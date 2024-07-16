/*EJERCICIO 5: Buscar el Máximo y Mínimo: Escriba un programa que encuentre el valor máximo y el valor
mínimo en una matriz de 4x4, indicando sus posiciones*/

#include <iostream>
#include <windows.h>

using namespace std;
int main(){
	int matriz[4][4]={{3,4,2,1},
					{9,3,2,1},
					{1,8,2,3},
					{0,3,2,1}};
	
	int maximo, minimo;
	int pos_max_i, pos_max_j, pos_min_i, pos_min_j;				
	
	SetConsoleOutputCP(CP_UTF8);

	cout << "---------------------------------------------------------------------" << endl;
	cout << " ---PROGRAMA QUE BUSCA EL MáXIMO Y MíNIMO VALOR DE UNA MATRIZ 4X4---" << endl;
	cout << "---------------------------------------------------------------------" << endl << endl;

	minimo = matriz[0][0];
	maximo = matriz[0][0];
	
	pos_min_i = pos_min_j = 0;
    pos_max_i = pos_max_j = 0;
	
	cout << "La matriz es: " << endl << endl;
	
	for (int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	
	for (int i=0;i<4;i++) {
		for (int j=0; j<4; j++){
			
			if (matriz[i][j]>maximo){
				maximo = matriz[i][j]; 
				
				pos_max_i = i;
                pos_max_j = j;
				
			}
			
			if(matriz[i][j] < minimo){

			minimo = matriz[i][j];
			pos_min_i = i;
            pos_min_j = j;

			}
		}
	}

cout << endl;

cout << "El máximo es: " << maximo << endl;
cout << "Su posición es: [" << pos_max_i << "]" << "[" << pos_max_j << "]" << endl << endl;
cout <<"El mínimo es: " << minimo << endl;
cout << "Su posición es: [" << pos_min_i << "]" << "[" << pos_min_j << "]" << endl << endl;
	
	return 0;
}