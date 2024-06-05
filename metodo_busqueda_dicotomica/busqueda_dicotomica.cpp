#include <iostream>

using namespace std;

int main(){

    int nros[] = {1, 3, 5, 9, 11, 16, 24, 54};
    int nBuscado = 5;

    int desde = 0;
    int hasta = (sizeof(nros)/sizeof(nros[0])) - 1;
    int medio = (desde + hasta) / 2;
    int pos = (-1);

    while(pos == (-1) && desde <= hasta){
        if(nBuscado == nros[medio]){
            pos = medio;
        } else{

            if(nBuscado < nros[medio]){
                hasta = medio - 1;
            } else{
                desde = medio + 1;
            }
            medio = (desde + hasta) / 2;
        }
    }

    if(pos != (-1)){
        cout << "La posicion de " << nBuscado << " es: " << pos;
    } else {
        cout << "El numero " << nBuscado << " no se encuentra en el array.";
    }



    return 0;
}
