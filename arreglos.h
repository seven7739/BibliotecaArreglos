
#ifndef ARREGLOS_H
#define ARREGLOS_H

#define CUADRADO(x) ((x)*(x))

#define PI 3.14159

#define DEBUG

int sumaArreglo(int arr[], int n);
int maximo (int arr[], int n);
void cuadradoArreglo (int arr[], int n);
int busquedaLineal(int arr[], int n, int objetivo);	
int busquedaBinariaIterativa (int arr[], int n, int objetivo);
int busquedaBinarioRecursiva(int arr[], int n, int objetivo, int inicio, int fin);
void bubbleSort (int arr[], int n);
void imprimirArreglo (int arr[], int n);
void selectionSort (int arr[], int n);
void insertionSort (int arr[], int n);
#endif
