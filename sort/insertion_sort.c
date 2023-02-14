#include <stdio.h>

static void insert_increase(int *arr, int size);
static void insert_decrease(int *arr, int size);

static void print_array(int *arr, int size);

int main() {
  int arr[] = {177, 12, 6, 55, 8, 2, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  insert_increase(arr, size);
  print_array(arr, size);
  insert_decrease(arr, size);
  print_array(arr, size);

  return 0;
}

static void insert_increase(int *arr, int size) {
  int key, i, j;
  for (i = 0; i < size; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

static void insert_decrease(int *arr, int size) {
  int key, i, j;
  for (i = 0; i < size; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] < key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

static void print_array(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}