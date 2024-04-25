#include <iostream>

using namespace std;

/*
        Ejercicio 1
            Conversor de Celsius a Fahrenheit.
    [*] Crear variables float para guardar grados celsius y fahrenheit.
    [*] Avisar y guardar en la variable de celsius los grados dados por el usuario.
    [*] Guardar en la variable fahrenheit el calculo de: celsius * (9 / 5) + 32.
    [] Mostrar al usuario.
*/

int main(){

    float cels, fahr = 0;

    cout << "Ingrese los grados celsius.";
    cin >> cels;

    fahr = ((cels * 9) / 5) + 32;

    cout << "Los grados fahrenheit son: " << fahr;

    return 0;
}
