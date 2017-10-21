// PEC1Datos.cpp: define el punto de entrada de la aplicación de consola.
//
#include <iostream>
#include "stdafx.h"
#include "Gestor.h"
#include "Cliente.h"
#include <Windows.h>
#include <string>
#include "cola.h"


using namespace std;

int main(int argc, char** argv)
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);

    char opcion;

    //Cliente cliente;

    do{
     
        std::cout << "\t--------------\n";
        cout << "\tMenu\n";
        cout << "\t--------------\n";
        
        cout << "\tA.- Generar solicitudes de entradas de los clentes VIP.\n"; 
        cout << "\tB.- Mostrar la cola de solicitudes en espera de los clientes VIP.\n";
        cout << "\tC.- Borrar la cola de solicitudes en espera de clientes VIP.\n";
        cout << "\tD.- Generar solicitudes de entradas de los clientes no registrados.\n";
        cout << "\tE.- Mostrar la cola de solicitudes en espera de usuarios no registrados.\n";
        cout << "\tF.- Borrar la cola de solicitudes en espera de usuarios no registrados.\n";
        cout << "\tG.- Simular el proceso de compra de entradas de los clientes VIP.\n";
        cout << "\tH.- Simular el proceso de compra de entradas de los clientes no registrados.\n";
        cout << "\tI.- Mostrar la lista de entradas vendidas.\n";
		cout << "\tJ.- Reiniciar el programa.\n";
		cout << "\tK.- Salir del programa.\n";
	    
        cout << "\tIndique la opcion deseada: ";
        cin >>opcion;
      //  system("cls");
        switch(opcion){
            case 'A':
                break;
			case 'B':
                break;
            case 'C':                          
				break;
            case 'D':
                break;
            case 'E':
		
                break;
            case 'F':
		
                break;
            case 'G':
		
                break;
            case 'H':
                
                break;
            case 'I':		
                break;
			case 'J':
				cout<<"Reiniciando programa...\n";
				break;
			case 'K':
				cout<<"\t Saliendo del programa...\n";
                break;
            default:
                cout<<"Opcion incorrecta\n\n";
        }
    } while(opcion!='K'); 
	return 0;
}
