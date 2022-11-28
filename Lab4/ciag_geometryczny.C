// Tomas Czerniawski student
// Ciag geometryczny
// 2022-11-28

#include <stdio.h>

int n_rekurencja(int a1, int q, int n){
    
    if(n==1){ 
      
    return a1;
      
}else{
      
    return q * n_rekurencja(a1, q, n-1); 
}
    
}

int main()
{
    int q,a1;
    int n;
  
 printf("Podaj pierwsza liczbe ciagu:");
    scanf("%d", &a1);
  
 printf("Podaj watosc ilorazu: ");
     scanf("%d", &q);
  
 printf("Podaj element ciągu arytmycznego do obliczenia:");
    scanf("%d", &n);
    
  printf("Liczba w kolejce = %d",n );
  printf("ciągu arytmycznego wynosi %d ",n_rekurencja(a1, q, n));

    return 0;
}
