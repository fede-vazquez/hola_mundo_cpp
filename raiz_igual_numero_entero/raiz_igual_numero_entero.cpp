#include <iostream>

using namespace std;

/*
    consigna
    Determinar si la raíz cuadrada de un número (dado por el usuario)
    da como resultado un número entero o no.
    Ejemplos:
    - raíz cuadrada de 16 = 4 correcto
    - raíz cuadrada de 12 = 3,464101615137 incorrecto
*/

/*
    [*] Crearle int que guarde el número dado por el usuario.
    [*] Pedir al usuario que ingrese el número y guardarlo en la variable.
    [] En un for, iterar desde 1 hasta el número dado por el usuario, haciendo lo siguiente:
        [*] Preguntar si i^2 (i * i) es igual al número dado por el usuario.
            si - la variable i sería el resultado de la raíz cuadrada del número dado, y al ser i un número entero,
                 se lo informaremos al usuario. Y terminamos la ejecución del for.
            no - no hacemos nada.
        [*] Preguntar si i^2 (i * i) es mayor que el número dado por el usuario.
            si - Esto significa que la raíz del número dado no es un número entero, y esta entre el anterior y el actual.
                 Entonces, le informamos al usuario que la raíz del número dado no es un número entero, y terminamos la ejecución del for.
            no - no hacemos nada.
*/

int main(){

    int nro = 0;

    cout << "Ingrese un numero para saber si su raiz cuadrada da como resultado un numero entero: ";
    cin >> nro;

    for (int i = 0; i <= nro; i++){
        if( (i * i) == nro ){
            cout << "La raiz cuadrada de " << nro << " es " << i << " entonces es un numero entero." << endl;
            break;
        } else if( (i * i) > nro ) {
            cout << "La raiz cuadrada de " << nro << " no da como resultado un numero entero.";
            break;
        }
    }

    return 0;

}
