// Tomas Czerniawski student
// Sortowanie_algorytmem_MergeSort.C
// 2022-12-06

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000


int vet[N];

void merge(int vet[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    
    int L[n1], R[n2];
 
    
    for (i = 0; i < n1; i++)
        L[i] = vet[l + i];
  
    for (j = 0; j < n2; j++)
        R[j] = vet[m + 1 + j];
 
   
    i = 0; 
    j = 0;
    k = l;
  
    while (i < n1 && j < n2) {
      
        if (L[i] <= R[j]) {
          
            vet[k] = L[i];
            i++;
        }
        else
        {
            vet[k] = R[j];
            j++;
        }
        k++;
    }
 
  
    while (i < n1) {
      
        vet[k] = L[i];
      
        i++;
        k++;
    }
 
    
    while (j < n2) {
      
        vet[k] = R[j];
      
        j++;
        k++;
    }
}
 

void mergeSort(int vet[], int l, int r)
{
    if (l < r) {
      
        int m = l + (r - l) / 2;
 
        mergeSort(vet, l, m);
        mergeSort(vet, m + 1, r);
 
        merge(vet, l, m, r);
    }
}
 

void printArray(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
      
        printf("%d ", A[i]);
        printf("\n");
}


main(void){
    
    
    int i,n;
  
      srand(time(NULL));
  
    for(i=0;i<1000;i++){
      
        vet[i]=(rand()%138573);
    }
   printf("Wprowadzenie ilosc elementow ktora bedzie otsortowana w tablice. Musi byc wiecej 0 i mniej %d \n", N);
while (n <=0 || n > N) {
 scanf("%d", &n);
}
  
    for(i=0;i<n;i++){
        printf("%d\n", vet[i]);
        

    }
    int arr_size = sizeof(vet) / sizeof(vet[0]);
      mergeSort(vet, 0, n - 1);
 
    printf("\nSorted array is \n");
  
      printArray(vet, n);
  
    return 0; 
}
