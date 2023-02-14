#include <stdio.h>

static int linear(int *arr, int size, int search);

int main() {
  int arr[] = {223, 175, 10, 93, 122, 345, 2, 12, 1, 5, 99, 92, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  int search;
  scanf("%d", &search);

  int result = linear(arr, size, search);

  if (result == -1) {
    printf("Element not found at the array");
  } else {
    printf("Element lies at %d insex", result);
  }

  return 0;
}

static int linear(int *arr, int size, int search) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == search) {
      return i;
    }
  }
  return -1;
}