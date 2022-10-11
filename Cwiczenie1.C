# Zadanie1.C

```
#include <stdio.h>

int main() {
  
int a,x,y;
  
  x=0;
  a=2;
  
while(x<7){
  
  x=x+2;
  y=a*x*x;
    
  printf(" %d \n", y);
  }
return 0;
  }
```
# Zadanie2.C
```
#include <stdio.h>

int main() {
  int a,x,y,n,h;
  
 
  printf("wprowadz a: ");
  scanf("%d", &a);
  
  printf("wprowadz do jakiej wartosci x liczymy y: ");
  scanf("%d", &n);
  
  printf("wprowadz krok: ");
  scanf("%d", &h);
  
while(x<n){
  
    x=x+h;
    y=a*x*x;
    
    printf(" %d \n", y);
  }
  return 0;
  }
```

# Zadanie_1_ciagi
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i = 0;
    srand(1);
  
    for(i=1; i<=10; i++)
    {
        printf("Wywolanie %d wygenerowalo liczbe o wartosci: %d\n", i, rand());
    }
    return 0;
```
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
