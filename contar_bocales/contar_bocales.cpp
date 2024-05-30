#include <iostream>

using namespace std;

/*
    consigna
    crear una función que cuente la cantidad de bocales
    que primero pase todas las letras a minúscula
*/

// Función que diga si un caracter es o no una bocal
// el caracter será pasado en minúscula.
bool esUnaBocal(char caracter){
    switch(caracter){
    case 'a':
        return true;
    case 'e':
        return true;
    case 'i':
        return true;
    case 'o':
        return true;
    case 'u':
        return true;
    default:
        return false;
    }
}

// función que cuente el total de elementos de una cadena.
int totalDeElementos(char texto[]){
    int contador = 0;

    while(texto[contador] != NULL){
        contador++;
    }

    return contador;
}

// función que retorna la cantidad de bocales de un texto
// toma como parametro una cadena de caracteres.
int contarBocales(char unTexto[]){
    int totalBocales = 0;

    int totalCaracteres = totalDeElementos(unTexto);

    // Crear una cadena de minusculas y llenarla
    char textoMinuscula[totalCaracteres];

    for(int i = 0; i < totalCaracteres; i++){
            textoMinuscula[i] = tolower(unTexto[i]);
    }

    // Cuenta las bocales
    for(int i = 0; i < totalCaracteres; i++){
            if(esUnaBocal(textoMinuscula[i])){
                totalBocales += 1;
            }
    }

    return totalBocales;
}

int main(){

    char texto[] = "HOLA MUNDO";

    cout << contarBocales(texto);

}
