#include <stdio.h>
#include <errno.h>
#include <stdio.h>


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


//printowanie tabeli

for (i = 0; i < n; i++)
    printf("%d \n ", arr[i]);
return 0;
}
