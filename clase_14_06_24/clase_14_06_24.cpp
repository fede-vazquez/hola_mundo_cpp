#include <iostream>
#include <vector>

using namespace std;

// parcial 2.

void imprimirArray(vector<int>unArray){
    for(size_t i = 0; i < unArray.size(); i++){
        cout << unArray[i] << " ";
    }
    cout << endl;
}

int main(){

    // parte 1. ok
    vector<int> numeritos = {1,2,3,4,5};
    cout << "Vector original: ";
    imprimirArray(numeritos);

    // agregar valores. ok
    numeritos.push_back(6);
    numeritos.push_back(7);

    cout << "Vector despues de pushearle datos: ";
    imprimirArray(numeritos);

    // quitar valores. ok
    vector<int>nuevoArray;
    size_t index = 0;
    for(const int elemento : numeritos){
        if(index != 2){
            nuevoArray.push_back(elemento);
        }
        index++;
    }
    cout << "Array sin el 3er elemento: ";
    imprimirArray(nuevoArray);

    return 0;
}
