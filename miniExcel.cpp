#include <iostream>
#include <string>

using namespace std;

//prototipo de las funciones de menu principal
void nuevo();
void abrir();

//prototipos de funciones que se hara con el grid
void ingresarContenido(), saltarCelda(), copiar(), cortar() ,pegar(), moverIzquierda(), moverDerecha(), 
moverArriba(), moverAbajo(), guardar();

int main(){

    bool menu = true; //para mantener vivo al menu
    int opcion = 0; //opcion que ingresara el usuario

    do{
        cout<< "\t\t Menu principal\n";
        cout<< "\t ==============================\n";
        
        cout<< "1. Nuevo\n";
        cout<< "2. Abrir\n";
        cout<< "3. Salir \n";
        cout<< "Opcion a elegir: \n";
        cin>>opcion;

        switch(opcion)
        {
            case 1: nuevo();  break;
            case 2: abrir(); break;
            case 3: menu = false; break;
            default: cout<<"\tIngresa una opcion valida!!!!!!!\n\n"; break;
        }
    }while(menu == true);
}

//definiendo las funciones

void abrir(){
    cout << "abriendo anterior hoja\n";
}

void nuevo(){
    int opcionNuevo = 0;
    bool continuarNuevo = true;

    do
    {
        cout<<"\t\tOpciones:\n";
        cout<<"\t=========================\n";

        cout<< "1. Ingresar contenido.\n";
        cout<< "2. Saltar a celda.\n";
        cout<< "3. Copiar\n";
        cout<< "4. Cortar\n";
        cout<< "5. Pegar\n";
        cout<< "6. Mover a la izquierda\n";
        cout<< "7. Mover a la derecha.\n";
        cout<< "8. Moverse arriba.\n";
        cout<< "9. Moverse abajo.\n";
        cout<< "10. Guardar.\n";
        cout<< "11. Salir.\n";
        cout<< "Opcion que desea ingresar: \n";
        cin>>opcionNuevo;

        switch(opcionNuevo)
        {
            case 1: break;
            case 2: break;
            case 3: break;
            case 4: break;
            case 5: break;
            case 6: break;
            case 7: break;
            case 8: break;
            case 9: break;
            case 10: break;
            case 11: continuarNuevo = false; break;
            default: cout<<"\tIngresa una opcion valida!!!!!!!\n\n"; break;
        }
    } while (continuarNuevo == true);
}

//Definiendo funciones a usar del grid


