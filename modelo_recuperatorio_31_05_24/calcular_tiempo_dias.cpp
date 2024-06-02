#include <iostream>

using namespace std;

/*
    consigna
    Solicitar al usuario una cantidad de d�as y calcular la cantidad de horas,
    minutos, y segundos totales de ese n�mero de d�as.
    1 d�a tiene 24 horas, 1 hora tiene 60 minutos, y 1 minuto tiene 60 segundos.
*/

/*
    algoritmo
    [*] Declarar variable cantidadDias, que contendr� la cantidad de d�as
    [*] Informar al usuario e iniciar la variable con los datos dados por el mismo
    [*] Comprobar que el n�mero dado sea mayor de 0.
        no - avisarle al usuario que el n�mero de d�as tiene que ser mayor a 0
        si - seguir con el c�digo
    [*] Crear variables horas, minutos, segundos. Y guardar los c�lculos por cada una.
    [] Mostrarle al usuario la informaci�n de cara variable.
*/

int main(){

    int cantidadDias = 1;

    cout << "Ingrese la cantidad de dias: ";
    cin >> cantidadDias;

    if(cantidadDias <= 0){
        cout << "La cantidad de d�as que ingreso es menor o igual a 0.";
    }else {
        int horas = cantidadDias * 24;
        int minutos = horas * 60;
        int segundos = minutos * 60;

        cout
        << "La cantidad de horas, minutos, y segundos de " << cantidadDias
        << " dia/s es de:" << endl
        << "horas: " << horas << endl
        << "minutos: " << minutos << endl
        << "segundos: " << segundos << endl;
    }

    return 0;
}
