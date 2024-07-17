/*EJERCICIO 4:Intercambio de Filas: Desarrolle un programa que intercambie dos filas específicas de una matriz
de 4x4 y muestre la matriz resultante.*/

#include <iostream>
#include <windows.h>

using namespace std;
int main(){
	int matriz[4][4];
	int m,n;
	
	SetConsoleOutputCP(CP_UTF8);
	
	cout << "--------------------------------------------------------------" << endl;
	cout << "  ---PROGRAMA QUE INTERCAMBIA DOS FILAS DE UNA MATRIZ 4X4---" << endl;
	cout << "--------------------------------------------------------------" << endl << endl;

	cout << "Indíque cada elemento de cada posición de la matriz: " << endl;
	
	for (int i = 0; i<4; i++){
		for (int j = 0; j<4; j++){
			cout << "El elemento "<<"[" << i << "]" << "[" << j << "] : ";
			cin >> matriz[i][j];
		}
		cout << endl;
	}
	
	//Mostrando la matriz 
	cout << "La matriz es: " << endl;
	
	for (int i = 0; i<4; i++){
		for (int j = 0; j<4; j++){
			cout << matriz[i][j] << " ";
		}
		
		cout << endl;
	}
	
	cout << endl;
	
	cout << "Digíte la primera fila que va a intercambiar: " << endl;
	cin >> m;
	
	cout << "Digíte la segunda fila que va a intercambiar: " << endl;
	cin >> n;
	
	if ( m>3 || n>3 || m<0 || n<0 ) {
		cout << "Filas incorrectas..." << endl;
	
	} else {
		
		for (int j = 0; j < 4; j++) {
            int temp = matriz[m][j];
            matriz[m][j] = matriz[n][j];
            matriz[n][j] = temp;
	}
	
	cout << endl;

	// Mostrando la matriz después del intercambio
    cout << "Matriz resultante: " << endl;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
    cout << endl;
   }
}

	return 0;
}