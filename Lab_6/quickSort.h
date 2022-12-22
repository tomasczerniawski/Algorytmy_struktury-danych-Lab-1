#include <stdio.h>

void quic_kSort(int *arr, int first, int last) {
  int i, j, pivot, temp;
  if (first < last) {
    pivot = first;
    i = first;
    j = last;
    while (i < j) {
      while (arr[i] <= arr[pivot] && i < last)
        i++;
      while (arr[j] > arr[pivot])
        j--;
      if (i < j) {
        swap(arr, i, j);
      }
    }
    temp = arr[pivot];
    arr[pivot] = arr[j];
    arr[j] = temp;
    quick_Sort(arr, first, j - 1);
    quick_Sort(arr, j + 1, last);
  }
}
