#include <iostream>

using namespace std;

int main(){

    // Pedirle al usuario el número de filas y de columnas y guardarlas. (camino feliz, el usuario no pondrá menos de 1)
    int filas = 0;
    int columnas = 0;
    cout << "Ingresa el numero de filas: ";
    cin >> filas;
    cout << "Ingresa el numero de columnas: ";
    cin >> columnas;

    // Declaramos las 2 matrices que vamos a sumar, y la que será el resultado de la suma.
    int matriz1[filas][columnas];
    int matriz2[filas][columnas];

    int suma[filas][columnas];

    // Llenamos la primera matriz con los datos del usuario.
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << "Valor del elemento matriz1[" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }
    cout << endl;
    // Mostramos la matriz 1
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
                cout << matriz1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Llenamos la segunda matriz con los datos del usuario
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << "Valor del elemento matriz2[" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    cout << endl;
    // Mostramos la matriz 2
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
                cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Iteramos las filas y columnas, asignando el resultado de la suma en la matriz suma.
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            suma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    cout << "La suma de estas matrices da como resultado: " << endl;

    // Mostramos la matriz resultante de la suma de las otras dos matrices.
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
                cout << suma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
