#include <iostream>

using namespace std;

int main(){

    // Como se constituye la matriz.

    int filas, columnas;

    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    // Definir la matriz con los valores que captamos.

    int matriz[filas][columnas];

    // Rellenar la matriz.

    for(int i= 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << "Ingresar el valor para la posicion " << i << j;
            cin >> matriz[i][j];
        }
    }

    // Mostrar la matriz.

    for(int i= 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}
