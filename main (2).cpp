/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int op1, op2, op3, op4;//Menú
    cout<<" \t ***Mel VideoGames Store*** \n";
    cout<<"Elige unas de las siguentes opciones \n";
    cout<<"1.Agregar Articulo \n";
    cout<<"2.Modificar Articulo \n";
    cout<<"3.Eliminar Articulo \n";
    cout<<"4.Lista de Articulos Vigentes \n";
    cout<<"5.Limpiar Pantalla \n";
    cout<<"6.Salir \n";
    cin>> op1;
       
    switch(op1)
       {
           case 1://Agregar Articulo(s)
           cout<<"Agregar Nombre del videojuego\n";
           break;
           
           case 2://Modificar Articulo(s)
           cout<<"Que desearia modificar \n";
           break;
           
           case 3://Eliminar Articulo(s)
           cout<<"Que Articulo desearia eliminar \n";
           break;
           
           case 4://Lista de Videojuegos
           cout<<"Decide una de las siguientes opciones \n";
           cout<<"1.Genero \n";
           cout<<"2.Clasificacion \n";
           cin>> op2;
            switch(op2)
            {
            case 1:
                cout<<"Los Videojuegos Ordenados por Genero\n";
                break;
                
            case 2:
                 cout<<"Los Videojuegos Ordenados por Clasificacion\n";
                 break;
            }
           break;
           
           case 5://Limpiar Pantalla
            cout<<"¿Estas seguro de desear *Limpiar la pantalla*? \n";
            cout<<"1.Si \n";
            cout<<"2.No \n";
                    cin>>op3;
                if(op3==1)
                {
                    system("clear"); 
                    return main();
                }  
                else
                {
                    return main();
                }
                break;
             
           case 6://Salir
            cout<<"¿Estas seguro de querer *salir* ? \n";
            cout<<"1.Si \n";
            cout<<"2.No \n";
            cin>> op3;
            if(op3==1)
            {
                cout<<"Gracias por Usarme, Lindo Dia/Tarde/Noche:)\n";
               return 0; 
            }
            else
            {
                system("clear"); 
                return main();
            }
            break;
             
       }

    return 0;
}