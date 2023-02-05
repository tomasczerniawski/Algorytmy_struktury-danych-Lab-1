#include "bubble_sort.h"

#include "insertion_sort.h"

#include "selection_sort.h"

#include "merge_sort.h"

#include "quick_sort.h"

#include "generate_random_numbers.h"

#define N 10000

int main(void) {
   int n = N;
int count;
   
//generuj_randomowe_liczby(arr, n);
   
   
   clock_t t;

    t = clock();
    bubble_Sort();
    t = clock() - t;

    double time_taken = ((double)t) / CLOCKS_PER_SEC;
    printf("Czas sortowania bąbelkowego wynosi: %f sekund\n", time_taken);

   
//insertion_sort();
   
//selection_sort();
   
//mergeSort(arr, 0, n - 1);
   
//    printf("Posortowana tablica: \n");
// printArray(arr, n);

   
quick_sort(arr, 0, n - 1);
return 0;
}






