#include <iostream>

using namespace std;

main(){

    int base = 0;
    int altura = 0;

    cout << "Increse la base del triangulo" << endl;
    cin >> base;

    cout << "Increse la altura del triangulo" << endl;
    cin >> altura;

    float area = (base * altura / 2);

    cout << "El area del triangulo es de " << area << "CMs2";

    return 0;
}
