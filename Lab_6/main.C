#include "bubble_sort.h"

#include "insertion_sort.h"

#include "selection_sort.h"

#include "merge_sort.h"

#include "quick_sort.h"

#include "generate_random_numbers.h"

#define N 10000

int main(void) {
int n = N;
int arr[N];
generuj_randomowe_liczby(arr, n);

clock_t t;

// Bubble sort
t = clock();
bubble_Sort(arr, n);
t = clock() - t;
double time_taken = ((double)t) / CLOCKS_PER_SEC;
printf("Czas sortowania bąbelkowego wynosi: %f sekund\n", time_taken);

// Insertion sort
t = clock();
insertion_sort(arr, n);
t = clock() - t;
time_taken = ((double)t) / CLOCKS_PER_SEC;
printf("Czas sortowania przez wstawianie wynosi: %f sekund\n", time_taken);

// Selection sort
t = clock();
selection_sort(arr, n);
t = clock() - t;
time_taken = ((double)t) / CLOCKS_PER_SEC;
printf("Czas sortowania przez wybieranie wynosi: %f sekund\n", time_taken);

// Merge sort
t = clock();
merge_sort(arr, 0, n - 1);
t = clock() - t;
time_taken = ((double)t) / CLOCKS_PER_SEC;
printf("Czas sortowania przez scalanie wynosi: %f sekund\n", time_taken);

// Quick sort
t = clock();
quick_sort(arr, 0, n - 1);
t = clock() - t;
time_taken = ((double)t) / CLOCKS_PER_SEC;
printf("Czas sortowania szybkiego wynosi: %f sekund\n", time_taken);

return 0;
}






