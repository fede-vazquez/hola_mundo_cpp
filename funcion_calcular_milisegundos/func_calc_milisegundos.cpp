#include <iostream>

using namespace std;

/*
    consigna
    * Crea una funci�n que reciba d�as, horas, minutos y segundos (como enteros)
    * y retorne su resultado en milisegundos.
*/
/*
    algoritmo
    [*] Crear una funci�n que devuelva un n�mero. Que tome 4 par�metros
        de tipo int (dias, horas, minutos, segundos).
        Devolver� la cantidad de milisegundos dentro de ese tiempo.

        dentro de la funci�n:
    [*] Crear variable int que guarde el total de milisegundos.
        Sumar a esta variable los siguientes resultados:
    [*] dias * (24 * 60 * 60 * 1000) (d�as multiplicado milisegundos por dia)
    [*] horas * (60 * 60 * 1000) (horas multiplicado milisegundos por hora)
    [*] minutos * (60 * 1000) (minutos multiplicado milisegundos por minuto)
    [*] segundos * (1000) (segundos multiplicado milisegundos por segundo)
    [*] Retornar el resultado.
*/

int calcMilisegundos(int dias, int horas, int minutos, int segundos){
    int resultado = 0;

    resultado += dias * (24 * 60 * 60 * 1000);
    resultado += horas * (60 * 60 * 1000);
    resultado += minutos * (60 * 1000);
    resultado += segundos * 1000;

    return resultado;
}

int main(){

    return 0;

}
