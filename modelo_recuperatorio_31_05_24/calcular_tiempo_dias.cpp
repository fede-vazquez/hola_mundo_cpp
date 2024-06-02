#include <iostream>

using namespace std;

/*
    consigna
    Solicitar al usuario una cantidad de días y calcular la cantidad de horas,
    minutos, y segundos totales de ese número de días.
    1 día tiene 24 horas, 1 hora tiene 60 minutos, y 1 minuto tiene 60 segundos.
*/

/*
    algoritmo
    [*] Declarar variable cantidadDias, que contendrá la cantidad de días
    [*] Informar al usuario e iniciar la variable con los datos dados por el mismo
    [*] Comprobar que el número dado sea mayor de 0.
        no - avisarle al usuario que el número de días tiene que ser mayor a 0
        si - seguir con el código
    [*] Crear variables horas, minutos, segundos. Y guardar los cálculos por cada una.
    [] Mostrarle al usuario la información de cara variable.
*/

int main(){

    int cantidadDias = 1;

    cout << "Ingrese la cantidad de dias: ";
    cin >> cantidadDias;

    if(cantidadDias <= 0){
        cout << "La cantidad de días que ingreso es menor o igual a 0.";
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
