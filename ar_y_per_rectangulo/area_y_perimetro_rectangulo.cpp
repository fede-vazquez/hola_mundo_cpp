#include <iostream>

using namespace std;

/*
    consigna
    Calcula el área y perímetro de un rectángulo, su largo y ancho lo da el usuario.
    Tomar en cuenta que el usuario podría ingresar números negativos o iguales a 0.
*/

/*
    [*] Crear variables float para guardar los valores dados por el usuario del largo y ancho del rectángulo, y el área y perímetro del mismo.
    [*] Pedir al usuario los valores del largo y ancho del rectángulo en centímetros y guardarlos en las variables correspondientes.
    [*] Verificar (con un if else) que los datos obtenidos sean mayores a 0, o que no sean iguales, ya que en este caso sería un cuadrado.
        - Si los datos son menores o iguales a 0, informarle al usuario que los datos son incorrectos.
        - Si los datos son iguales entre si, y mayores a 0, informarle que es un cuadrado.
        - si los datos son correctos, continuar con los siguientes puntos.
    [*] Calcular el área y el perímetro del rectángulo y guardar cada uno en su variable.
    [] Informarle al usuario el área y el perímetro del rectángulo.
*/

int main(){

    float largo, ancho, area, perimetro = 0;

    cout << "Ingrese el largo del rectangulo, en centimetros: ";
    cin >> largo;

    cout << "Ingrese el ancho del rectangulo, en centimetros: ";
    cin >> ancho;

    if( largo <= 0 || ancho <= 0 ){
        cout << "Los datos ingresados no son correctos, ya que son negativos o iguales a 0.";
    } else if ( largo == ancho ){
        cout << "Los datos ingresados pertenecen a un cuadrado.";
    } else {
        area = largo * ancho;
        perimetro = 2 * (largo + ancho);

        cout << endl << "El area del rectangulo es: " << area << "cm" << endl;
        cout << "El perimetro del rectangulo es: " << perimetro << "cm" << endl;
    }

    return 0;

}
