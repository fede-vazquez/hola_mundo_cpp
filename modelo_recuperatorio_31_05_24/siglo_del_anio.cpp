#include <iostream>
#include <stdlib.h>

using namespace std;

/*
    consigna
    Solicitar al usuario un a�o, y devolverle el siglo al que pertenece el mismo.
    Solo contaremos siglos de d.C (desde el a�o 1 en adelante).
    El siglo I abarca desde el a�o 1 hasta el 100, el II desde el 101 hasta el 200.
*/

/*
    algoritmo
    [*] Crear variable que guarde el a�o, y pedirle al usuario que la inicie.
    [*] Verificar que el a�o sea mayor a 0.
        no - informarle al usuario y detener el programa (usando librer�a <stdlib.h> y la funci�n exit(1))
        si - seguir con el programa
    [*] Crear variable siglo que contenga el resultado del c�lculo necesario para conocer el siglo.
    [] Mostrarle al usuario el a�o y el siglo al que pertenece.
*/

int main(){

    int anio = 0;

    cout << "Ingrese el a�o para conocer el siglo al que pertenece, tiene que ser mayor a 0: ";
    cin >> anio;

    if(anio <= 0){
        cout << "El anio ingresado es igual o menor a 0.";
        exit(1);
    }

    /*
        Restamos 1 al a�o ingresado por el usuario. entonces el "siglo" ser� de 0 a 99 en lugar de 1 a 100.
        Dividimos el (anio - 1) por 100, y luego le sumamos 1. Eso nos dar� el siglo de dicho a�o.
    */
    int siglo = ((anio - 1) / 100) + 1;

    cout << "El siglo al que pertenece el anio " << anio << " es el siglo " << siglo;

    return 0;
}
