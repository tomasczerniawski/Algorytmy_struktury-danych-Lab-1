// Tomas Czerniawski student
// Trójkąt Paskala
// 2022-11-28

#include <stdio.h>

int l_paskala(int wiersz, int kolumna) {
  if (kolumna == 0) return 0;
    
  if (wiersz == 1 && kolumna == 1) return 1;
    
  if (kolumna > wiersz)  return 0;
   
  else
    
    return (l_paskala(wiersz - 1, kolumna - 1) + l_paskala(wiersz - 1, kolumna));
}

int main()
{
     
  int wiersz,kolumna;
  
    printf("Podaj liczbe wierszu gdzie chcecie znalesc liczbe ");
      scanf("%d", &wiersz);
  
    printf("Podaj liczbe kolumny gdzie chcecie znalesc liczbe ");
     scanf("%d", &kolumna);
  
    printf("Liczba z trujkata paskala %d ",l_paskala(wiersz,kolumna));

    return 0;
}
