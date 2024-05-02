#include <iostream>

using namespace std;

/*
    [*] Variables int para guardar el n�mero dado por el usuario (valor inicial = 0),
        y otra para el resultado final (valor inicial = 1).
    [*] Pedir al usuario que ingrese el n�mero, informandol� lo que va a introducir.
    [*] En un for (comenzando en 1 hasta el n�mero dado por el usuario),
        multiplicar la variable de resultado final por el numero de iteraciones,
        guardar resultado en la variable de resultado final.
    [*] Mostrar la informaci�n al usuario. ejemplo: "El factorial de [numero] es [resultado]"
*/

int main(){

    int nro = 0;
    int resultado = 1;

    cout << "Ingrese un n�mero para saber su factorial: ";
    cin >> nro;

    for(int i = 1; i <= nro; i++ ){
        resultado *= i;
    }

    cout << "El factorial de " << nro << " es " << resultado << endl;

    return 0;
}
