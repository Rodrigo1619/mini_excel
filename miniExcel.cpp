#include <iostream>
#include <string>

using namespace std;

int main(){

    bool menu = true; 
    int opcion = 0;

    cout<< "\t\t Menu principal\n";
    cout<< "\t ==============================\n";

    do{
        cout<< "1. Nuevo\n";
        cout<< "2. Abrir\n";
        cout<< "3. Salir \n";
        cout<< "Opcion a elegir: \n";
        cin>>opcion;

        switch(opcion){
            case 1: cout<<"abriendo nuevo\n"; break;
            case 2: cout<<"abriendo anterior\n"; break;
            case 3: menu = false; break;
            default: cout<<"Ingresa una opcion valida"; break;
        }
    }while(menu == true);
}