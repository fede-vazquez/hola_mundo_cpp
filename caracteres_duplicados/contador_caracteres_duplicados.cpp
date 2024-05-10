#include <iostream>

using namespace std;

/*
    consigna
    Crear un programa que cuente la cantidad de caracteres repetidos que hay en una cadena de texto
    por ejemplo: char[] cadenaDeCaracteres = "EaAbbBcde";
    esto devolver� 3 ya que se repiten e, a, b.
    Dato: el m�todo (char)tolower(caracter) retorna el caracter en min�scula.
*/

/*
    algoritmo
    [*] Variable que guarda la cantidad de caracteres que se repiten.
    [*] Variable con la cadena de caracteres que vamos a analizar (como un array de characteres, no como un string).
    [*] Averiguar el largo de esta cadena de caracteres y guardarlo en una variable.
    [*] Crear nueva cadena de caracteres, para guardar los caracteres duplicados ya contados.

    [*] Crear funci�n para buscar un caracter dentro de una cadena de caracteres, ambos pasados como par�metros. Retorna True o False.
        Dentro de la funci�n
        [*] Averiguar el largo de la cadena pasada en el parametro.
        [*] Iterar la cadena dada como par�metro, preguntando en cada iteraci�n si el caracter de la cadena es igual al caracter
            dado como par�metro.
                si - Retornar true
        [*] Retornar false en caso de salir de la iteraci�n. (el caracter buscado no existe en la cadena de caracteres dada)

    [] Iterar la cadena de caracteres original(sin llegar al �ltimo elemento).
        dentro del for
        [] Convertir el caracter a min�scula con la ayuda de (char) tolower(caracter) y guardarlo en una variable.
        [] Iterar nuevamente la cadena, desde el n�mero de iteraci�n hasta el final.
            [] Convertir, y guardar en una variable, el caracter de esta segunda iteraci�n en min�scula tambi�n.
            [] Preguntar si estos caracteres son iguales.
                Si - Preguntar si dicho caracter NO existe en la cadena de caracteres duplicados ya contados.
                    Si - Agregar dicho caracter a la cadena de caracteres
                         y sumar 1 a la variable que guarda la cantidad de caracteres repetidos.

    [] Informarle al usuario la cantidad de caracteres que se repiten.

    Datos a tener en cuenta:
    Para saber el largo de una cadena de caracteres, hay que utilizar sizeof(texto) - 1.
    Ya que al utilizar la funci�n sizeof con una cadena de caracteres, esta devuelve (cantidad de caracteres + 1),
    ya que cada caracter ocupa 1 bite, el otro bite desconozco de donde sale.
*/

// funci�n que buscara un caracter dentro de un string.
// par�metros: 1- caracter, 2- string.
// retorna: true si existe, false si no.
bool encontrarCaracter(char caracter, string duplicadosString){
    int largo = duplicadosString.length();

    for(int i = 0; i < largo; i++){
        if(caracter == duplicadosString[i]){
            return true;
        }
    }
    return false;
}

int main (){

    int cantDuplicados = 0;

    char cadena[] = "EaAbbBcde";
    int largoCadena = sizeof(cadena) - 1;

    string  duplicadosContados = "";

    return 0;

}
