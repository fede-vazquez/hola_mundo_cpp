#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    // Pedirle al usuario el número de filas y columnas de las matrices 1 y 2.
    int filas1 = 0;
    int columnas1 = 0;
    cout << "Ingresa el numero de filas de la matriz 1: ";
    cin >> filas1;
    cout << "Ingresa el numero de columnas de la matriz 1: ";
    cin >> columnas1;

    cout << endl;

    int filas2 = 0;
    int columnas2 = 0;
    cout << "Ingresa el numero de filas de la matriz 2: ";
    cin >> filas2;
    cout << "Ingresa el numero de columnas de la matriz 2: ";
    cin >> columnas2;

    cout << endl;

    // Preguntar si es posible hacer la multiplicación.
    if(columnas1 != filas2){
        // no - Avisarle al usuario que no es posible multiplicarlas y terminar el programa.
        cout << "Las matrices no se pueden multiplicar, ya que la cantidad de columnas de la matriz 1 no es igual a la cantidad de filas de la matriz 2.";
        exit(1);
    }


    // Crear matrices 1 y 2, y la matriz que será el resultado de la multiplicación.
    int matriz1[filas1][columnas1];
    int matriz2[filas2][columnas2];
    // El orden de la matriz resultado será el número de filas de la matriz 1 y el número de columnas de la matriz 2.
    int multiplicacion[filas1][columnas2];

    // Llenar las matrices 1 y 2 con los datos dados por el usuario. Informando la matriz y el elemento que esta llenando.
    cout << "Ingrese los datos de la matriz 1:" << endl;
    for(int i = 0; i < filas1; i++){
        for(int j = 0; j < columnas1; j++){
            cout << "Valor del elemento matriz 1[" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }
    cout << endl;
    cout << "Ingrese los datos de la matriz 2:" << endl;
    for(int i = 0; i < filas2; i++){
        for(int j = 0; j < columnas2; j++){
            cout << "Valor del elemento matriz 2[" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    // Iterar la matriz multiplicación. Es decir, filas 1 y columnas 2.
    for(int i = 0; i < filas1; i++){
        for(int j = 0; j < columnas2; j++){
            // Ponemos el valor contador en 0.
            multiplicacion[i][j] = 0;

            // Por cada elemento (multiplicacion[i][j]), iterar el numero de columnas de la matriz 1.
            for(int k = 0; k < columnas1; k++){
                // Multiplicar el elemento de la fila i y columna k de la matriz 1 por el elemento de la fila k, columna j de la matriz 2, y sumarlo al elemento.
                multiplicacion[i][j] += (matriz1[i][k] * matriz2[k][j]);
            }

        }
    }

    // Mostrar la matriz con el resultado de la multiplicación.
    cout << endl << "La matriz resultante de la multiplicacion de las matrices es:" << endl;
    for(int i = 0; i < filas1; i++){
        for(int j = 0; j < columnas2; j++){
            cout << " " << multiplicacion[i][j];
        }
        cout << endl;
    }

    return 0;
}
