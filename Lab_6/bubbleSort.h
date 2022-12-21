#include <stdio.h>
#include <errno.h>
#include <stdio.h>
#include <time.h>

int bubble_Sort() {
   
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
    //sama logika sortowania
    
     for(i = 0; i < n - 1; i++){       

        for(j = 0; j < n - i - 1; j++){          

            if(arr[j] > arr[j + 1]){               

               int temp = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = temp;

            }

        }

    }
   
  t = clock() - t;
    
    for (i = 0; i < n; i++)
        printf("%d \n ", arr[i]);
  

   double time_taken = ((double)t)/CLOCKS_PER_SEC;

	printf("\n sortowanie scalieniem trwalo %f seconds \n", time_taken);

    return 0;
}
