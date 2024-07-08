#include <iostream>
#include <vector>

using namespace std;

/*
    consigna:
    Desarrollar un programa para gestionar una tienda de bicicletas.
    El programa debe cumplir los siguientes requisitos:

    * Mostrar men� de bicicletas: Al iniciar, el programa debe mostrar una lista
    de 5 marcas de bicicletas disponibles en la tienda, junto con sus precios.
    La informaci�n de las bicicletas debe ser almacenada en una matriz bidimensional.

    * Seleccionar bicicleta: El usuario debe poder seleccionar una bicicleta
    ingresando el n�mero correspondiente. Una vez seleccionada, el programa debe mostrar
    una descripci�n detallada de la bicicleta.

    * Opciones despu�s de seleccionar: Despu�s de mostrar la descripci�n, el programa
    debe ofrecer dos opciones: Volver al men� anterior para seleccionar otra bicicleta.
    Proceder a la compra de la bicicleta seleccionada.

    * Proceso de compra: Si el usuario decide comprar la bicicleta, el programa debe confirmar
    la compra y mostrar un mensaje de "Compra exitosa".

    * Volver al men�: Si el usuario decide volver al men� anterior, debe ser capaz
    de seleccionar otra bicicleta o salir del programa.
*/

// funci�n elementoLista: Muestra en consola los datos de una bicicleta, toma como par�metro un vector de strings y un indice.
void elementoLista(vector<string> bici, int indice){
    cout << " " << indice << " - " << bici[0] << " tiene un precio de $" << bici[1] << "."<< endl;
};


int main(){

    // Crear la matriz con 5 bicicletas, junto con informaci�n de la misma. Guardaremos el precio como un string.
    // info de las columnas de la matriz: 0 = nombre, 1 = precio, 2 = descripci�n.
    vector<vector<string>> bicicletas = {
        {"Specialized", "200000", "La bicicleta ideal para carretera."},
        {"Vairo", "250000", "La mejor opcion electrica."},
        {"Raleigh", "140000", "Mejor calidad precio."},
        {"Dahon", "210000", "Montanesa, ideal para salir de la rutina."},
        {"Tem", "190000", "Bicicleta plegable, para mayor comodidad."}
    };

    // Variable bandera, para saber si el usuario quiere terminar la ejecuci�n del programa.
    bool sigue = true;
    // Variable para saber si es la primera vez del usuario.
    bool primeraVez = true;

    // Mientras se ejecute el programa:
    while(sigue){

        // Mostrar al usuario la opci�n para terminar la ejecuci�n del programa en caso de no ser la primera vez que esta en el men� principal.
        if(!primeraVez){
            cout << " 0 - finalizar ejecucion." << endl;
        }
        // Mostrar las 5 bicicletas, junto con un n�mero para que el usuario pueda seleccionar la que quiera ver.
        for(int i = 0; i < bicicletas.size(); i++){
            if(!bicicletas[i].empty()){
                cout << " " << (i+1) << " - " << bicicletas[i][0] << " tiene un precio de $" << bicicletas[i][1] << "."<< endl;
            };
        };

        // Preguntarle al usuario que bicicleta quiere ver.
        int biciSeleccionada;
        cout << endl << "Seleccione el numero de bicicleta que quiera ver: ";
        cin >> biciSeleccionada;

        if(biciSeleccionada == 0){
            sigue = false;
            break;
        }

        // Mostrar la informaci�n de la bicicleta seleccionada por el usuario.
        cout << endl
        << bicicletas[biciSeleccionada-1][0]
        << ". " << bicicletas[biciSeleccionada-1][2]
        << " Tiene un precio de $" << bicicletas[biciSeleccionada-1][1]
        << "."<< endl;

        // Dar 2 opciones al usuario. 1 - volver al men� principal, 2 - comprar bicicleta.
        int opcionUsuario;
        cout << endl
        << "Selecciona una de las siguientes opciones:" << endl
        << "1 - volver al menu principal." << endl
        << "2 - comprar bicicleta." << endl;
        cin >> opcionUsuario;
            // 1 - El programa vuelve a mostrar el men� de las 5 bicicletas. (sumado a una opci�n para terminar el programa)
            // 2 - El programa manda un mensaje de "Compra exitosa" y termina la ejecuci�n.
        if(opcionUsuario == 2){
            cout << "Compra exitosa.";
            sigue = false;
        }
        primeraVez = false;

    }

    return 0;
}
