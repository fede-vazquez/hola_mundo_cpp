#include <iostream>

using namespace std;

/*
        Ejercicio 3
            Conteo regresivo
    [*] Crear variable para guardar el n�mero.
    [*] Avisar y guardar en la variable el n�mero en la variable numero.
    [*] Mostrar cada n�mero con un for que vaya desde el n�mero dado por el usuario hasta 0
        mostrando el n�mero del iterador.
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
