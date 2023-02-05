#include <stdio.h>
#include <errno.h>
#include <stdio.h>


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
   

    
    for (i = 0; i < n; i++)
        printf("%d \n ", arr[i]);
 

    return 0;
}
