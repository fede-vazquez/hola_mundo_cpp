#include <iostream>

using namespace std;

/*
        Ejercicio 2
            Determinar si un número es primo.
    [*] Crear variable para que el usuario el numero.
    [*] Avisar y guardar el usuario para la variable de numero.
    [*] Preguntar con una condición que pregunte si el número es primo o no.
        Si - Avisar al usuario que es primo.
        No - Avisar al usuario que no es primo.
*/

int main(){

    int userNum = 0;

    cout << "Ingrese el numero para saber si es primo o no.";
    cin >> userNum;


    // No me gusta esta solución.
    if( ((userNum % 2 != 0 && userNum % 3 != 0) && userNum != 1) || userNum == 2 || userNum == 3){
        cout << userNum << " es un numero primo.";
    } else {
        cout << userNum << " no es primo.";
    }

    return 0;
}
