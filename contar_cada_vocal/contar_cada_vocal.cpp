#include <iostream>

using namespace std;

int main(){

    char texto[] = "Hola mundo.";

    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    int cantVeces[] = {0, 0, 0, 0, 0};

    int contador = 0;
    while(texto[contador] != NULL){
        contador++;

        char caracterMinuscula = tolower(texto[contador]);

        /*
        for(int i = 0; i < 5; i++){
            if(caracterMinuscula == vocales[i]){
                cantVeces[i]++;
                break;
            }
        }
        */

        switch(caracterMinuscula){
            case 'a':
                cantVeces[0]++;
                break;
            case 'e':
                cantVeces[1]++;
                break;
            case 'i':
                cantVeces[2]++;
                break;
            case 'o':
                cantVeces[3]++;
                break;
            case 'u':
                cantVeces[4]++;
                break;
        }
    }

    for(int i = 0; i < 5; i++){
        string vezOVeces = (cantVeces[i] == 1) ? " vez." : " veces.";

        cout << "La vocal " << vocales[i] << " se repite " << cantVeces[i] << vezOVeces << endl;
    }

    return 0;
}
