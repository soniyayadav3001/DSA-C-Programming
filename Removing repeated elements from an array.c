#include <stdio.h>

int main() {
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int temp[n];
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] != arr[i + 1]) {
      temp[j++] = arr[i];
    }
  }

  for (int i = 0; i < j; i++) {
    arr[i] = temp[i];
  }

  printf("The array with duplicate elements removed is: ");
  for (int i = 0; i < j; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
