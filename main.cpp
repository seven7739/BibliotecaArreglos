#include <stdio.h>
#include <iostream>
#include "arreglos.h"
using namespace std;

int main ()
{
	int numeros[]= {2,8,10,15,20,32,909,897};
    int arreglo[] = {10, 8, 6, 5, 2};
//	const double euler = 2.7182; 
//	cout << "suma de arrglo: " << sumaArreglo(numeros, 5) << endl;
//	cout << "Maximo del arrglo: " << maximo(numeros, 5) << endl;
//	cout << "valor de pi: " << PI << endl;
//	cout << "valor de euler: " << euler << endl;
//	cout << "Cuadrado del arreglo: " << endl;
//	cuadradoArreglo(numeros, 5);
//	imprimirArreglo(numeros, 5);
    cout << "Elemento encontrado en la posicion: " << busquedaBinariaIterativa (numeros, 5, 20) << endl;
    cout << "Elemento encontrado en la posicion: " << busquedaBinarioRecursiva (numeros, 5, 20, 0, 5) << endl;
    cout << "Arreglo desordenado: " << endl;
    imprimirArreglo(arreglo, 5);
    cout << "\n Arreglo ordenado: " << endl;

    insertionSort(arreglo, 5);
    imprimirArreglo(arreglo, 5);
	cout << "elemento encontrado en la posicion: " << busquedaLineal(numeros, 5, 10) << endl;
	
	return 0;
}
