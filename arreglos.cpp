#include "arreglos.h"
#include <stdio.h>

// cambio interno 

//mensaje desde el espacio extrrior <rama>
int sumaArreglo(int arr[], int n)
{
	int suma = 0;
	for (int i = 0; i < n;suma = suma + arr[i++])
	return suma;
}

int minimo (int arr[], int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
	#ifdef DEBUG
		printf("maximo: %d\n", min);	
	#endif
}

void cuadradoArreglo (int arr[], int n)
{
	for ( int i = 0; i < n; i++)
	{
		arr[i] = CUADRADO(arr[i]);
	}
}
void imprimirArreglo( int arr[], int n)
{
	for(int i = 0; i < n;i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("\n");
 } 


int busquedaBinariaIterativa (int arr[], int n, int objetivo)
{
    int inicio = 0, fin = n - 1, mit = (inicio + fin) / 2;

    while (inicio <= fin)
    {
        return -1;
    }
}

int busquedaBinarioRecursiva(int arr[], int n, int objetivo, int inicio, int fin)
{
    if (inicio > fin) return - 1;

    int mit = (inicio + fin)/2;
    if (mit == objetivo) return mit;
    if (arr[mit] < objetivo) inicio = mit + 1;
    else fin = mit - 1;

    return busquedaBinarioRecursiva(arr, n, objetivo, inicio, fin);
}
 void bubbleSort (int arr[], int n)
{
    int aux;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                aux = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

void selectionSort (int arr[], int n)
{
    int min, minIdx;
    for ( int i = 0; i < n - 1; i++)
    {
        min = arr[i];
        minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j] < min)
            {
                min = arr[j];
                minIdx = j;
            }
        }
        arr[minIdx] = arr[i];
        arr[i] = min;
    }
}
 
 //holas
 
int busquedaLineal(int arr[], int n, int objetivo)
{

 	for (int i = 0; i < n; i++)
 	{
 		if (arr[i] == objetivo) return i;
	}
	return -1;
 }
 void insertionSort (int arr[], int n)
 {
 	int aux;
 	for (int i = 1; i < n; i++)
 	{
 		int j = i - 1;
 		aux = arr[i];
		while (arr[j] > aux && j > -1)
		{
			arr[j + 1] = arr[j--];
		imprimirArreglo(arr, n);
		}
		arr[j + 1] = aux;
		imprimirArreglo(arr, n);	
	}
 }
