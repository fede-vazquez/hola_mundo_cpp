#include <iostream>

using namespace std;

/*
    consigna
    Determinar si la ra�z cuadrada de un n�mero (dado por el usuario)
    da como resultado un n�mero entero o no.
    Ejemplos:
    - ra�z cuadrada de 16 = 4 correcto
    - ra�z cuadrada de 12 = 3,464101615137 incorrecto
*/

/*
    [*] Crearle int que guarde el n�mero dado por el usuario.
    [*] Pedir al usuario que ingrese el n�mero y guardarlo en la variable.
    [] En un for, iterar desde 1 hasta el n�mero dado por el usuario, haciendo lo siguiente:
        [*] Preguntar si i^2 (i * i) es igual al n�mero dado por el usuario.
            si - la variable i ser�a el resultado de la ra�z cuadrada del n�mero dado, y al ser i un n�mero entero,
                 se lo informaremos al usuario. Y terminamos la ejecuci�n del for.
            no - no hacemos nada.
        [*] Preguntar si i^2 (i * i) es mayor que el n�mero dado por el usuario.
            si - Esto significa que la ra�z del n�mero dado no es un n�mero entero, y esta entre el anterior y el actual.
                 Entonces, le informamos al usuario que la ra�z del n�mero dado no es un n�mero entero, y terminamos la ejecuci�n del for.
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
