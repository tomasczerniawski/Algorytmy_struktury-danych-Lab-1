//Ten kod niepracuje nic niewyswietla i niewychodzi mnie niejak poprawic

#include <stdio.h>
#include <errno.h>
#include <stdio.h>
#include <time.h>
#define N 10000
int arr[N];

void merge(int *arr, int l, int m, int r)
{
  int i = 0, j, k;
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
    if (L[i] <= R[j]) {
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

    
         
   
    
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    
    //printowanie tabeli
    
    

	printf("\n sortowanie scalieniem trwalo %f seconds \n", time_taken);
} 

void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    merge(arr, l, m, r);

    
  }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
      
        printf("%d ", arr[i]);
        printf("\n");
}
