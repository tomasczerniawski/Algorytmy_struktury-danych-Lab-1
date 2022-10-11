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
 x=0;
 a=2;
   printf("wprowadz do jakiej zmiennej musi zkaczyc kod: ");
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
