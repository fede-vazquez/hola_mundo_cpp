#include <iostream>

using namespace std;

int main(){

    int matriz[3][3] ={
    {1,2,3},
    {4,5,6},
    {7,8,9}
    };

    int numeroBuscado = 5;

    bool encontrado = false;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] == numeroBuscado){
                encontrado = true;
                cout
                << "El valor "
                << numeroBuscado
                << " se encuentra en la matriz";
                break;
            }
        }
        if(encontrado){
            break;
        }
    }

    if(!encontrado){
        cout
        << "El valor "
        << numeroBuscado
        << " no se encuentra en la matriz";
    }

    return 0;

}

/*

        ejemplo de array dentro de otro, dado por el profe.
    int tamanio = 5;

    for (int i = 0; i < tamanio; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
*/
