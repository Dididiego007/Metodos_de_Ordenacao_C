#include <stdio.h>
#include <stlib.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move os elementos do arr[0..i-1] que são maiores que key
        // para uma posição à frente de sua posição atual
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int TAM = sizeof(arr) / sizeof(arr[0]);

    printf("Array desordenado: ");
    for (int i = 0; i <TAM; i++) {
        printf("%d ", arr[i]);
    }

    insertionSort(arr, TAM);

    printf("\nArray ordenado: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
