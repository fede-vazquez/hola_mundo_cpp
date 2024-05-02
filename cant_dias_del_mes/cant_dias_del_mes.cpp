#include <iostream>

using namespace std;

/*
    consigna
    El usuario ingresa un mes y se le devuelve la cantidad de d�as de dicho mes.
    El usuario pondr� todo en min�sculas, y no tomamos en cuenta el a�o bisiesto.
    Utilizar un switch.
*/

/*
    [*] Crear variable string que guardar� el mes dado por el usuario (valor inicial = "").
        Y otra variable int para guardar un dato num�rico para utilizar en el switch (valor inicial = 0).
    [*] Informar al usuario y guardar el valor dado por el mismo en la variable de mes.
    [*] Averiguar si la cantidad de d�as del mes, sin contar los a�os bisiestos. Sabiendo que:
        - enero, marzo, mayo, julio, agosto, octubre y diciembre: Tienen 31 d�as.
        - abril, junio, septiembre y noviembre: Tienen 30 d�as.
        - febrero: tiene 28 d�as.
    [*] Modificar la variable, que guarda el n�mero que compararemos en el switch, dentro del anterior if.
        - mes con 31 d�as = 1
        - mes con 30 d�as = 2
        - mes con 28 d�as = 3
    [*] En un switch, comparar los resultados anteriores y mostrarle al usuario cuantos d�as tiene dicho mes,
        en caso de no ser ninguno (el usuario ingreso mal el mes) informarle que el mes ingresado es incorrecto.
*/

int main(){

    string mes = "";
    int grupoDelMes = 0;

    cout << "Ingrese el mes para saber cuantos dias tiene, todo en minusculas: ";
    cin >> mes;

    if( mes == "enero" || mes == "marzo" || mes == "mayo" || mes == "julio" || mes == "agosto" || mes == "octubre" || mes == "diciembre" ){

        grupoDelMes = 1;

    }else if( mes == "abril" || mes == "junio" || mes == "septiembre" || mes == "noviembre" ){

        grupoDelMes = 2;

    } else if( mes == "febrero" ){

        grupoDelMes = 3;

    }

    switch(grupoDelMes){
    case 1: cout << "El mes tiene 31 dias";
    break;

    case 2: cout << "El mes tiene 30 dias";
    break;

    case 3: cout << "El mes tiene 28 dias";
    break;

    default: cout << endl << "El texto agregado no concuerda con ningun mes, recuerde que el mes debe ser todo en minusculas." << endl << "El texto ingresado fue: " << mes << endl;

    }

    return 0;

}
