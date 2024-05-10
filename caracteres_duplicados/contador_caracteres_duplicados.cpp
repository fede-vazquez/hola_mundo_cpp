#include <iostream>

using namespace std;

/*
    consigna
    Crear un programa que cuente la cantidad de caracteres repetidos que hay en una cadena de texto
    por ejemplo: char[] cadenaDeCaracteres = "EaAbbBcde";
    esto devolverá 3 ya que se repiten e, a, b.
    Dato: el método (char)tolower(caracter) retorna el caracter en minúscula.
*/

/*
    algoritmo
    [*] Variable que guarda la cantidad de caracteres que se repiten.
    [*] Variable con la cadena de caracteres que vamos a analizar (como un array de characteres, no como un string).
    [*] Averiguar el largo de esta cadena de caracteres y guardarlo en una variable.
    [*] Crear nueva cadena de caracteres, para guardar los caracteres duplicados ya contados.

    [*] Crear función para buscar un caracter dentro de una cadena de caracteres, ambos pasados como parámetros. Retorna True o False.
        Dentro de la función
        [*] Averiguar el largo de la cadena pasada en el parametro.
        [*] Iterar la cadena dada como parámetro, preguntando en cada iteración si el caracter de la cadena es igual al caracter
            dado como parámetro.
                si - Retornar true
        [*] Retornar false en caso de salir de la iteración. (el caracter buscado no existe en la cadena de caracteres dada)

    [] Iterar la cadena de caracteres original(sin llegar al último elemento).
        dentro del for
        [] Convertir el caracter a minúscula con la ayuda de (char) tolower(caracter) y guardarlo en una variable.
        [] Iterar nuevamente la cadena, desde el número de iteración hasta el final.
            [] Convertir, y guardar en una variable, el caracter de esta segunda iteración en minúscula también.
            [] Preguntar si estos caracteres son iguales.
                Si - Preguntar si dicho caracter NO existe en la cadena de caracteres duplicados ya contados.
                    Si - Agregar dicho caracter a la cadena de caracteres
                         y sumar 1 a la variable que guarda la cantidad de caracteres repetidos.

    [] Informarle al usuario la cantidad de caracteres que se repiten.

    Datos a tener en cuenta:
    Para saber el largo de una cadena de caracteres, hay que utilizar sizeof(texto) - 1.
    Ya que al utilizar la función sizeof con una cadena de caracteres, esta devuelve (cantidad de caracteres + 1),
    ya que cada caracter ocupa 1 bite, el otro bite desconozco de donde sale.
*/

// función que buscara un caracter dentro de un string.
// parámetros: 1- caracter, 2- string.
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
