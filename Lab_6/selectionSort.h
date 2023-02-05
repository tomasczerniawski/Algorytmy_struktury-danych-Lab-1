#include <stdio.h>
#include <errno.h>
#include <stdio.h>
#include <time.h>

int selectionSort()
{
int i = 0, j, n = 0;


int arr[100000];

FILE* fptr; 

fptr = fopen("random.txt", "r"); 

while (fscanf(fptr, "%d", &arr[i]) == 1) 
{
  
    n++; 

    i++; 
}

clock_t t;

t = clock();
 
 //logika sortowania


int min_index;
for(i = 0; i < n - 1; i++) {
    min_index = i;
    for(j = i + 1; j < n; j++) {
        if(arr[min_index] > arr[j]) {
            min_index = j;
        }
    }
    if(min_index != i)
    {
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
t = clock() - t;
double time_taken = ((double)t)/CLOCKS_PER_SEC;

//printowanie tabeli

for (i = 0; i < n; i++)
    printf("%d \n ", arr[i]);

printf("\n sortowanie scalieniem trwalo %f seconds \n", time_taken);
return 0;
}
