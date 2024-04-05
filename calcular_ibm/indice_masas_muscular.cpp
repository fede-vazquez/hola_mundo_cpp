#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

/*
    [x] Declaramos las variables de peso (float), de altura (int) y IMC (float)
    [x] Pedimos al usuario los datos para inicilizar las variables de peso y altura
    [x] Inicializamos la variable de IMC calculando el peso y la altura
    [x] Mostramos la información al usuario
*/


int main(){

    float peso, imc, altura;


    cout << "Ingrese el peso del usuario en kilos." << endl;
    cin >> peso;

    cout << "Ingrese la altura en centimetros." << endl;
    cin >> altura;


    //imc = peso / ((altura / 100) * (altura / 100));
    imc = peso / pow((altura / 100), 2);


    cout << "El IMC del usuario es: " << setprecision(4) << imc << " Kg/m2";

    return 0;
}
