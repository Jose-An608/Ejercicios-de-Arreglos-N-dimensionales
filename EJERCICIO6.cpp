/*EJERCICIO 6: Reflejar una Imagen: Implemente un programa que refleje horizontalmente una imagen
representada por una matriz de 6x6. El programa debe intercambiar los elementos de cada fila para
obtener la imagen reflejada.*/

#include <iostream>
using namespace std;
int main(){
	
	int matriz[6][6]={{1,2,3,4,5,6},
						{3,2,2,1,2,5},
						{2,1,4,2,7,6},
						{1,2,4,2,2,1},
						{2,1,4,3,8,7},
						{2,1,5,3,2,2}};
	
	cout << "La matriz es: " << endl;
	
	for (int i=0; i<6; i++){
		for (int j=0; j<6; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	
	for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) { 
            int temp = matriz[i][j];
            matriz[i][j] = matriz[i][5 - j];
            matriz[i][5 - j] = temp;
        }
    }

	cout << "Su reflejo horizontal es: " << endl;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

	return 0;
}