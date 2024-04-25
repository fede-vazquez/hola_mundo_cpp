#include <iostream>

using namespace std;

/*
        Ejercicio 3
            Conteo regresivo
    [*] Crear variable para guardar el número.
    [*] Avisar y guardar en la variable el número en la variable numero.
    [*] Mostrar cada número con un for que vaya desde el número dado por el usuario hasta 0
        mostrando el número del iterador.
*/

int main(){

    int userNum = 0;

    cout << "Ingrese un numero que sea positivo.";
    cin >> userNum;

    for ( int i = userNum ; i >= 0 ; i--){
        cout << i << endl;
    }

    return 0;
}
