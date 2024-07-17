/*EJERCICIO3: Suma de Diagonales: Desarrolle un programa que sume los elementos de las dos diagonales de una
matriz de 4x4 y muestre el resultado */

#include <iostream>
#include <windows.h>

using namespace std;

	
	int matriz1[4][4];
	int s = 0;
	int s1 = 0;
	
	SetConsoleOutputCP(CP_UTF8);

	cout << "-----------------------------------------------------------" << endl;
	cout << "  ---PROGRAMA QUE SUMA LAS DIAGONALES DE UN MATRIZ 4X4---" << endl;
	cout << "-----------------------------------------------------------" << endl << endl;
	
	cout << "Indíque cada elemento de la matriz: " << endl << endl;
	cadaElemento();
	<4; i++){
			cout << "Indíque el elemento " << "[" << i << "]" << "[" << j << "]" << ": ";
			cin >> matriz1[i][j];
		}
	}
	
	cout << endl;
	
	cout << "Matriz: " << endl;
	
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cout << matriz1[i][j] << " ";
		}	
		cout << endl;
	}
	
	//Sumando diagonal principal
	
	for (int i = 0; i < 4; i++){ 
		for (int j = 0; j < 4; j++){
			if ( i == j) {
				s = s + matriz1[i][j];
			}
		cout << endl;
		}
	}

	// Sumando diagonal secundaria

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			if ( i + j == 3){
				s1 = s1 + matriz1[i][j];
			}		
	    }
	}
      

	}
}
