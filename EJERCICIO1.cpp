/*EJERCICIO1: Producto de Dos Matrices: Implemente un programa que multiplique dos matrices de 3x3 y
muestre el resultado, y muestre las dos matrices y su resultado en horizontal*/

#include <iostream>
using namespace std;

int main() {
    int matriz[3][3] = {
        {3, 1, 2},
        {1, 1, 1},
        {1, 2, 3}
    };

    int matriz2[3][3] = {
        {3, 2, 1},
        {3, 4, 5},
        {2, 1, 3}
    };

    int map[3][3] = {0};

    cout << "--------------------------------------------------" << endl;
    cout << "  ---PROGRAMA QUE MULTIPLICA DOS MATRICES 3X3---" << endl;              
    cout << "--------------------------------------------------" << endl;

    cout << "Matriz 1: " << "\t " << "Matriz 2:" << endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }

        cout << "            ";  

        for(int j = 0; j < 3; j++) {
            cout << matriz2[i][j] << " ";
        }

        cout << endl;
        }
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                map[i][j] += matriz[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "\nEl producto es:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
    
            return 0;
}