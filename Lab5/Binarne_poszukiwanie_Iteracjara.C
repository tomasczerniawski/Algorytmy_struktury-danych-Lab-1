// Tomas Czerniawski student
// inarne_poszukiwanie_Iteracjara.C
// 2022-12-07

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000


//Posortowałem tabelke rosnaco bo niewiedziłem czy bylo trzeba to zrobić z algorytmem MergeSort



int binarySearch(int vet[], int l, int r, int x) 
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
      
        if (vet[m] == x)
            return m;
 
       
        if (vet[m] < x)
            l = m + 1;
 
        
        else
            r = m - 1;
    }
 
    
    return -1;
}


int main(void){
    
    int vet[N];
    int i,n;
  
srand(( unsigned )time(NULL));
  
    for(i=0;i<N;i++){
      
        vet[i]=(rand()%138573);
    }
    printf("Wprowadzenie n. To wiele liczb bedzie lososwo wygenerowano Musi byc != 0 \n");
		  scanf("%d", &n);
  
    for(i=0;i<n;i++){
        printf("%d\n", vet[i]);
        

    }
  
      
 int fel;
  
    for (i = 0; i < n; i++) { 
      
        for (int j = i+1; j < n; j++) {  
          
           if(vet[i] > vet[j]) {  
             
               fel = vet[i];    
               vet[i] = vet[j];    
               vet[j] = fel;    
           }     
        }     
    }    
        
    printf("\n");    
        
    
    printf("Elementy są posortowane rozsnaco: \n"); 
  
    for (i = 0; i < n; i++) { 
      
        printf("%d ", vet[i]);    
    }    
    int x;
  
    printf("\n Wprowadz liczbę którą chcesz znalesc: \n");
		  scanf("%d", &x);
     
    int result = binarySearch(vet, 0, n - 1, x);
  
    (result == -1)
  
        ? printf("Niema elementu")
        : printf("Element znajduje się na indeksie: %d", result);
    return 0; 
}
