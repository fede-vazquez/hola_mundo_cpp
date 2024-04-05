#include <iostream>

/*
    [x] Declaramos 2 variables int
        que van a ser los números
    [x] Declaramos la variable float
        resultadoDeLaOperacion
    [x] Inicializamos las variables numéricas
    [x] Inicializamos la variable resultado
    [x] Mostrar el resultado al usuario
*/

using namespace std;

int main(){

    int n1, n2;
    float resultadoDeLaOperacion;

    n1 = 5;
    n2 = 9;

    resultadoDeLaOperacion = n1 + n2;

    cout << "La suma de " << n1 << " y " << n2 << " es igual a " << resultadoDeLaOperacion;

    return 0;
}
