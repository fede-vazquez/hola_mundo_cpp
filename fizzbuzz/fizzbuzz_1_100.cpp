#include <iostream>

using namespace std;

/*
    consigna
    * Escribe un programa que muestre por consola los
    * n�meros de 1 a 100 (ambos incluidos y con un salto de l�nea entre
    * cada impresi�n), sustituyendo los siguientes:
    * - M�ltiplos de 3 por la palabra "fizz".
    * - M�ltiplos de 5 por la palabra "buzz".
    * - M�ltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
*/

/*
    algoritmo
    [*] Crear un for que itere desde el 1 hasta el 100.
    [*] Dentro del for, preguntar si el resto del n�mero de iteraci�n dividido 3 es igual a 0.
        si - imprimir "fizz".
    [*] Dentro del for, preguntar si el resto del n�mero de iteraci�n dividido 5 es igual a 0.
        si - imprimir "buzz".
    [*] Dentro del for, preguntar si el resto del n�mero de iteraci�n dividido 3 o 5 es distinto a 0 en ambos casos.
        si - imprimir el n�mero de iteraci�n.
    [*] Antes de terminar el for, agregar un saldo de l�nea.
*/

int main(){

    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0){
            cout << "fizz";
        }
        if(i % 5 == 0){
            cout << "buzz";
        }
        if(i % 3 != 0 && i % 5 != 0){
            cout << i;
        }

        cout << endl;
    }

    return 0;

}
