#include <iostream>
#include <stdlib.h>

using namespace std;

/*
        Ejercicio 4
            Sumar números hasta un límite.
    [*] Crear variable para guardar el número y la suma total.
    [*] Avisar y guardar en la variable el número dado por el usuario. (avisando que tiene que ser mayor a 0).
    [*] Preguntar si el número es mayor a 0.
        Si - No hacer nada.
        No - Avisar al usuario que el número tiene que ser mayor y terminar el programa.
    [*] En un for iterar desde el 0 hasta el número dado por el usuario. Sumando cada número de iteración a la variable que guarda la suma total.
    [*] Mostrar al usuario la suma total.
*/

int main(){

    int userNum, sumTotal = 0;

    cout << "Ingrese el numero que sera el tope para sumar todos los numeros, desde el 0 hasta llegar a este. Que sea mayor a 0.";
    cin >> userNum;

    if(userNum <= 0){
        cout << "El numero ingresado es menor o igual a 0.";
        exit(1);
    }

    for(int i = 0 ; i <= userNum ; i++){
        sumTotal += i;
    }

    cout << "La suma total de todos los numeros desde el 0 hasta el " << userNum << " es de: " << sumTotal;

    return 0;
}
