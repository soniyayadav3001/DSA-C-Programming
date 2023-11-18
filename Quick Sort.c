#include<stdio.h>
#include<conio.h>
// Function to swap two elements in an array
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Function to partition the array around a pivot element
int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = low - 1;
  int j;
  for ( j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return i + 1;
}

// Function to perform quick sort on an array
void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

// Function to print an array
int i;
void printArray(int array[], int size) {
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main() {
  int array[] = {12, 17, 6, 25, 1, 5};
  int size = sizeof(array) / sizeof(array[0]);

  quickSort(array, 0, size - 1);

  printf("Sorted array: ");
  printArray(array, size);

  return 0;
}
