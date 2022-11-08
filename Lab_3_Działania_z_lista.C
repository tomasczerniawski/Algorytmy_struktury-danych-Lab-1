//Tomas Czerniawski. Student
    // Lista jednokierunkowa niesortowana
    // 2022-11-08

    struct Item {
        float value;
        struct Item *next;
        struct Item *prev;
    };

    float find(float value, Item *head)

    Item locate(float value, Item *head) // pointer

    float retrieve(Item *item) // wartosc

    void insert(Item *item, float value, Item *head)

    void remove(Item *item, Item *head)

    int size(int *head)

    Item findMax(Item *head)

    Item findMin(Item *head)

    int printList(Item *head)

    int isEmpty(Item *head)

    void next(Item *item, Item *head)

    void previous(Item *item, Item *head)

    void makeNull(Item *head)

    #include <stdio.h>

    void main(void) {
        // realizacja

      return;
    }

    // Funkcii

float finde(int value, struct Item *head,int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == value)
            return i;
     
      // If the value is not found
    return -1;
}
