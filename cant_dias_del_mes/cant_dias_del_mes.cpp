#include <iostream>

using namespace std;

/*
    consigna
    El usuario ingresa un mes y se le devuelve la cantidad de días de dicho mes.
    El usuario pondrá todo en minúsculas, y no tomamos en cuenta el año bisiesto.
    Utilizar un switch.
*/

/*
    [*] Crear variable string que guardará el mes dado por el usuario (valor inicial = "").
        Y otra variable int para guardar un dato numérico para utilizar en el switch (valor inicial = 0).
    [*] Informar al usuario y guardar el valor dado por el mismo en la variable de mes.
    [*] Averiguar si la cantidad de días del mes, sin contar los años bisiestos. Sabiendo que:
        - enero, marzo, mayo, julio, agosto, octubre y diciembre: Tienen 31 días.
        - abril, junio, septiembre y noviembre: Tienen 30 días.
        - febrero: tiene 28 días.
    [*] Modificar la variable, que guarda el número que compararemos en el switch, dentro del anterior if.
        - mes con 31 días = 1
        - mes con 30 días = 2
        - mes con 28 días = 3
    [*] En un switch, comparar los resultados anteriores y mostrarle al usuario cuantos días tiene dicho mes,
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
