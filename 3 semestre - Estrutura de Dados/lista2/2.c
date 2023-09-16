#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

	/*Compare o desempenho do algoritmo de ordenação por bolha com algoritmo de ordenação o quicksort e 
o mergesort, usando arrays de tamanhos diferentes. Meça o tempo de execução e compare os resultado.
*/

void fillArray(int arr[], int size) {
	int i;
    for ( i = 0; i < size; i++) {
        arr[i] = rand() % 1000;
    }
}


void printArray(int arr[], int size) {
    int i;
	for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void bubbleSort(int arr[], int size) {
    int temp,i,j;
    for ( i = 0; i < size - 1; i++) {
        for ( j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    int j;

    for ( j = low; j <= high - 1; j++) {
        if (arr[j] > pivot) { 
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) { 
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

	main() {
	setlocale(LC_ALL, "Portuguese");
    int sizes[] = {100, 1000, 10000, 100000}; 
    clock_t start, end;
    double cpu_time_used;
	int i;
    for ( i = 0; i < sizeof(sizes) / sizeof(sizes[0]); i++) {
        int size = sizes[i];
        int *arr = (int *)malloc(size * sizeof(int));

        fillArray(arr, size);

        
        start = clock();
        bubbleSort(arr, size);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Bubble Sort - Tamanho %d: %f segundos\n", size, cpu_time_used);

      
        fillArray(arr, size);

        
        start = clock();
        quickSort(arr, 0, size - 1);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Quick Sort - Tamanho %d: %f segundos\n", size, cpu_time_used);

        
        fillArray(arr, size);

    	
        start = clock();
        mergeSort(arr, 0, size - 1);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Merge Sort - Tamanho %d: %f segundos\n", size, cpu_time_used);

        free(arr); 
    }

    return 0;
}

