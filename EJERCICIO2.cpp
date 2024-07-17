/*EJERCICIO 2: Buscar un Valor en una Matriz: Escriba un programa que busque un valor específico en una matriz
de 3x3 y devuelva todas las posiciones donde se encuentra, indicando la fila y la columna de cada
ocurrencia.*/
#include <iostream>
using namespace std;

int main(){
	int matriz[3][3]={{2,3,4},
						{1,4,2},
						{9,4,3}};
	int m,v;
	
	cout << "La matriz es: " << endl;
				
	for (int i = 0; i<3; i++){
		for (int j = 0; j<3; j++){
			
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "Ingrese el valor a buscar: " << endl;
	cin >> m;
	
	bool en = false;
    
    cout << "El valor " << m << " se encuentra en la posicion: " << endl;
    
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == m) {
                cout << "Fila: " << i << ", Columna: " << j << endl;
                en = true;
            }
        }
    }

    if (!en) {
        cout << "El valor " << m << " no se encuentra en la matriz." << endl;
    }
	return 0;
}