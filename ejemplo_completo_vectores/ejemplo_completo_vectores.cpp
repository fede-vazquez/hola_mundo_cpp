#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> numeritos = {1, 2, 3, 4, 5, 6};

    numeritos.push_back(7);
    numeritos.push_back(8);

    for(int value : numeritos){
        cout << value << " ";
    }

    cout << endl;

    numeritos.pop_back();

    cout << "Elementos del vector despues del por_back() son: ";
    for(int value : numeritos){
        cout << value << " ";
    }

    cout << endl;

    cout << "Tamanio: " << numeritos.size() << endl;
    cout << "Capacidad: " << numeritos.capacity() << endl;
    cout << "Esta vacia? " << (numeritos.empty() ? "si" : "no");

    return 0;
}
