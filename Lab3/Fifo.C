// Tomas Czerniawski student
// kolejka
// 2022-11-08

#include <stdio.h>
#include <stdlib.h>

struct Item {
  float value;
  struct Item *next;
};
struct Item *temp;

void insert(float item);

void remov();

void display();

void main() {
 
  float item;
  
  
   for(int i = 1; i<6;i++){ 
     
      printf("Podaj 5 liczbow %d:  " , i);
      scanf("%f", &item);
     
    insert(item);
     
     }
    
    remov();
     
    display();
}

// Funkcii

void insert(float item) {
  struct Item *pointer = (struct Item *)malloc(sizeof(struct Item));
  
  if (pointer == NULL) {
    
    printf("Stack overflow");
  } 
  else
  {
    if (temp == NULL) {
      
      pointer->value = item;
      pointer->next = NULL;
      temp = pointer;
    } 
    else
    {
      pointer->value = item;
      pointer->next = temp;
      temp = pointer;
    }
  }
}

void remov() {
  float item;
  struct node *pointer;
  
  if (temp == NULL) {
    
    printf("Stack Underflow\n");
    
  } 
  else
  {
    item = temp->value;
    pointer = temp;
    temp = temp->next;
    free(pointer);
    
    printf("Usunieta liczba jest %f\n", item);
  }
}

void display() {
  
  int i;
  struct Item *pointer;
  
  pointer = temp;
  
  if (pointer == NULL) {
    printf("Stack underflow\n");
  }
  else
  {
      printf("Elementy kolejki sa\n");
    
    while (pointer != NULL) {
      
      printf("%f\n", pointer->value);
      pointer = pointer->next;
    }
  }
}
