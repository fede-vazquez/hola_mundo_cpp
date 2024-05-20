#include <iostream>

using namespace std;

/*
    Consigna
    Crear una funci�n que verifique si una palabra es palindroma.
*/

/*
    La funci�n pedir� un string como par�metro.
    Creamos otra variable que guardar� la palabra inversa.
    Pasamos la palabra dada a min�scula, y la guardamos en una variable.
    Invertimos la palabra al mismo tiempo que la pasamos a min�sculas.
    Comparamos estas dos palabras, para confirmar si la palabra es palindroma o no.
        si - devolver true
        no - devolver false
*/
bool esPalindrona(string palabra){
    int largoPalabra = palabra.length();

    string palabraMinuscula = "";
    string palabraInvertida = "";

    for(int i = 0; i < largoPalabra; i++){
        char minuscula = (char) tolower(palabra[i]);

        // ejemplo: "palabr" + "a"
        palabraMinuscula = palabraMinuscula + minuscula;

        // ejemplo: "a" + "rbalap"
        palabraInvertida = minuscula + palabraInvertida;
    }
    // Devolvemos true si es palindroma, sino false.
    return palabraMinuscula == palabraInvertida;
}

int main(){
    // Implementaci�n de la funci�n.
    string palabra;

    cout << "Ingresar una palabra para saber si es palindroma: ";
    cin >> palabra;

    cout << "La palabra: " << palabra << " " << (esPalindrona(palabra) ? "es palindroma" : "no es palindroma");

    return 0;

}
