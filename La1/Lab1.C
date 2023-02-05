Tomas Czerniawski, Student
* -----------------
 Laboratorium 1. Zadanie 1 przyklad
 Oblicza funkcja y = ax^2 znaczenia, gdy a i x zmeniaja sie jednoczesnie: a=1
krokiem 0.5, x=2 do 6 krokiem 2
* -----------------
2022-10-11


# Zadanie1.C

```
#include <stdio.h>

#include <stdio.h>

int main() {
  int a, x, y;
  int x0 = 0;
  int xn = 7;

  x = x0;
  a = 2;

  while (x < xn) {
    x = x + 2;
    y = a * x * x;

    printf("%d\n", y);
  }

  return 0;
}
```



Tomas Czerniawski, Student
* -----------------
 Laboratorium 1. Zadanie 2 przyklad
 Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale. x - zmieniase z x0 do xn, krokiem hx
* -----------------
2022-10-11

# Zadanie2.C
```
#include <stdio.h>

int main() {
  int a, y, n, h;
  int x = 0;

  printf("Wprowadź a: ");
  scanf("%d", &a);
  
  printf("Wprowadź początkową wartość x (x0): ");
  scanf("%d", &x);
  
  printf("Wprowadź końcową wartość x (xn): ");
  scanf("%d", &n);
  
  printf("Wprowadź krok (h): ");
  scanf("%d", &h);
  
  while (x < n) {
    y = a * x * x;
    printf("y = %d\n", y);
    
    x = x + h;
  }
  
  return 0;
}
```



Tomas Czerniawski, Student
* -----------------
 Laboratorium 1. Zadanie 3 przyklad
 Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale, x jest wybierany z tablicy X(n)
* -----------------
2022-10-11

# Zadanie3.c
```

#include <stdio.h>

int main() {
  int a, x, y, n, h;
  int xn, arr[] = {2, 4, 8, 9, 10};

  printf("Wprowadź a: ");
  scanf("%d", &a);
  
  printf("Wprowadź numer x, który chcesz wybrać z tablicy X(n): ");
  scanf("%d", &xn);
  
  x = arr[xn];
  
  printf("Wprowadź do jakiej wartości x liczymy y: ");
  scanf("%d", &n);
  
  printf("Wprowadź krok (h): ");
  scanf("%d", &h);
  
  while (x < n) {
    y = a * x * x;
    printf("y = %d\n", y);
    
    x = x + h;
  }
  
  return 0;
}

```

Tomas Czerniawski, Student
* -----------------
 Laboratorium 1. Zadanie 1 przyklad
 Generowanie liczb pseudolosowych
* -----------------
2022-10-11

# Zadanie_1_ciagi
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i = 0;
    srand(time(NULL));

    for(i=1; i<=10; i++)
    {
        printf("Wywolanie %d wygenerowalo liczbe o wartosci: %d\n", i, rand());
    }
    return 0;
}
```
  
  
  Tomas Czerniawski, Student
* -----------------
 Laboratorium 1. Zadanie 2 przyklad
 Należy wygenerować n kolejnych wyrazów ciągu arytmetycznego.
* -----------------
2022-10-11

  # Zadanie_2_ciagi
  ```
  #include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  
    int i = 0,n;
   printf("wprowadz ile liczb generowac: ");
  
    scanf("%d", &n);
    srand(1);
  
    for(i=1; i<=n; i++)
    {
        printf("Wywolanie %d wygenerowalo liczbe o wartosci: %d\n", i, rand());
    }
    return 0;
}
  ```
