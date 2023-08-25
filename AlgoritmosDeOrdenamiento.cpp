#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

struct Equipo {
    int puntaje;
    int tiempo;   
}equipo1, equipo2,equipo3, equipo4, equipo5,equipo6,equipo7,equipo8,equipo9, equipo10;

void PrintArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void swap(int *array, int i, int min)
{
	int temp = array[i];
	array[i] = array[min];
	array[min] = temp;

}

void bubbleSort(int arr[], int n) {
    // Iterar a través de los elementos del arreglo (n - 1) veces
    for (int i = 0; i < n - 1; i++) {
        // Cada iteración coloca el elemento más grande en su posición final correcta
        for (int j = n - 1; j > i; j--) {
            // Comparar el elemento actual con su elemento adyacente
            if (arr[j] > arr[j - 1]) {
                // Intercambiar los elementos si están en el orden incorrecto
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}

void SelectionSort(int* arr, int n)
{
	for(int i = 0; i < n-1; i++)
	{
		//we first assume that the minimum value is the one that is 
		// on the position where we start
		int min = i;

		for(int j = i+1; j<n; j++)
		{
			// if the value of the position j is less than theoretical minimum
			// we change the position where we think the theoretial minimum is
			if( arr[j] < arr[min])
				min =  j;
		}

		// if the value where the minimum is changed, then we swap positions
		if(min != i)
			swap(arr,i,min);
	}
}

int main(){

equipo1.puntaje = 8 ; 
equipo1.tiempo = 34;

equipo2.puntaje = 6 ;
equipo2.tiempo = 223;

equipo3.puntaje = 2 ;
equipo3.tiempo = 127;

equipo4.puntaje = 4;
equipo4.tiempo = 219;

equipo5.puntaje = 4 ;
equipo5.tiempo = 23;

equipo6.puntaje = 10 ;
equipo6.tiempo = 294;

equipo7.puntaje = 2 ;
equipo7.tiempo = 373;

equipo8.puntaje = 8 ;
equipo8.tiempo = 327;

equipo9.puntaje = 9;
equipo9.tiempo = 483;

equipo10.puntaje = 5 ;
equipo10.tiempo = 156;

	const int size = 10;
    int array1[size] = {equipo1.puntaje, equipo2.puntaje, equipo3.puntaje ,equipo4.puntaje 
	,equipo5.puntaje, equipo6.puntaje, equipo7.puntaje, equipo8.puntaje, equipo9.puntaje, equipo10.puntaje}; 

	int array2[size] = {equipo1.tiempo, equipo2.tiempo, equipo3.tiempo ,equipo4.tiempo 
	,equipo5.tiempo, equipo6.tiempo, equipo7.tiempo, equipo8.tiempo, equipo9.tiempo, equipo10.tiempo}; 
	cout << "Puntajes equipos: " <<endl;
	PrintArray(array1,size);
	cout << endl << "Tiempos de equipos: " <<endl;
	PrintArray(array2,size);
	
	SelectionSort(array1, size);
	cout << endl << endl <<"Aplicando Selection sort de manera ascendente para puntajes "  << endl;
	PrintArray(array1,size);
	
	cout << endl << endl <<"Aplicando Bubble sort de manera descendete para los tiempos  "  << endl;
	bubbleSort(array2, size);
	PrintArray(array2,size);

	
	

    return 0;
}
