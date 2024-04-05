#include <iostream>

using namespace std;

int findLifeExpectacy(string treeType){
    if(treeType == "A"){
            return 45;
    }
    else if (treeType == "B"){
        return 80;
    }
    else if (treeType == "C"){
        return 75;
    }
    else if(treeType == "D"){
        return 150;
    }
    else {
        return -1;
    };
};

main(){
    cout << "Ingresa el tipo de arbol" << endl;
    string treeType = "";
    cin >> treeType;
    int lifeExpentancy = findLifeExpectacy(treeType);

    if(lifeExpentancy == -1){
    cout << "Expectativa de vida desconocida.";
    }
    else {
        cout << "Expectativa de vida del arbol es de " << lifeExpentancy << " años.";
    };

    return 0;
};

