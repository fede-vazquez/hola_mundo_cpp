/*
    Hacer un código que le pida al usuario que ingrese un dia de la semana y devuelva si este tiene clase de programación ese día.
    Que contenga un switch
    Dias que el usuario tiene programación: Martes, Jueves, Viernes
*/

/*
    [] Declarar las variables dia y numeroDia.
    [] Avisarle al usuario que datos va a agregar en el siguiente input.
    [] Inicializar la variable dia con los datos dados por el usuario.
    [] Parcear el string dado por el usario a un número dedicado, dependiendo el día.
        (luner = 1, martes = 2, etc.)
    [] Mostrar al usuario si es que tiene o no programación. Utilizando una estructra switch case.
*/

#include  <iostream>

using namespace std;

int main(){

    string dia;
    int numeroDia;

    cout << "Ingrese el día de hoy, todo en minusculas y sin acentos: ";

    cin >> dia;

    if(dia == "lunes"){
        numeroDia = 1;
    } else if(dia == "martes"){
        numeroDia = 2;
    } else if(dia == "miercoles"){
        numeroDia = 3;
    } else if(dia == "jueves"){
        numeroDia = 4;
    } else if(dia == "viernes"){
        numeroDia = 5;
    } else if(dia == "sabado"){
        numeroDia = 6;
    } else if(dia == "domingo"){
        numeroDia = 7;
    } else {
        numeroDia = 0;
    };

    switch(numeroDia){

        case 1:
            cout << "NO tiene programacion.";
            break;
        case 2:
            cout << "Tiene programacion.";
            break;
        case 3:
            cout << "NO tiene programacion.";
            break;
        case 4:
            cout << "Tiene programacion.";
            break;
        case 5:
            cout << "Tiene programacion.";
            break;
        case 6:
            cout << "NO tiene programacion.";
            break;
        case 7:
            cout << "NO tiene programacion.";
            break;

        default:
            cout  << "No ingreso correctamente el dia, recuerde colocar el dia en minusculas.";

    };

    return 0;
}
