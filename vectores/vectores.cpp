#include <iostream>
#include <vector>
// libreria que nos proporciona arrays dinamicos

using namespace std;

int main(){

    // vector estatico
    int numeritosEstaticos[6] = {4, 8, 15, 16, 23, 42};

    int tamanioEstatico = sizeof(numeritosEstaticos) / sizeof(*numeritosEstaticos);
    // vamos a conseguir el tamaño del array dividiendo
    // el total del espacio de memoria del array por el puntero de ese array
    // el puntero apunta al espacio de memoria de un elemento indivicual del mismo.


    // vector dinámico
    vector<int> numeritosDinamicos = {1, 2, 3};
/*
    numeritosDinamicos.push_back(10); // ingresa un dato al final del array
    numeritosDinamicos.pop_back() // va a quitar el último elemento del array
    numeritosDinamicos.size() // tamaño del array
    numeritosDinamicos.empty() // devuelve un true o un false si es que está o no vacio.
*/

    // Iterar arrays
    cout << "Con un for comun y silvestre: ";
    for(int i = 0; i < numeritosDinamicos.size(); i++){
        cout << numeritosDinamicos[i] << " ";
    }

    cout << endl;

    // En rango
    cout << "Con rango: ";
    for(int values : numeritosDinamicos){
        cout << values << " ";
    }


    return 0;
}
