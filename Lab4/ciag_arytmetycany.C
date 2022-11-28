// Tomas Czerniawski student
// Ciag arytmetyczny
// 2022-11-28

#include <stdio.h>

int n_rekurencja(int r, int n, int a1){
    
if(n==1){ 
      
    return a1;
      
}else{
    
    return r + n_rekurencja(r, n-1, a1); 
}  
        }

int main()
{
    int r,a1;
    int n;
  
    printf("Podaj pierwsza liczbe ciagu:");
      scanf("%d", &a1);
  
    printf("Podaj ruznice: ");
      scanf("%d", &r);
  
    printf("Podaj element ciągu arytmycznego do obliczenia:");
      scanf("%d", &n);
    
    printf("Liczba w kolejce = %d",n );
    printf("ciągu arytmycznego wynosi %d ",n_rekurencja(r,n,a1));

    return 0;
}
