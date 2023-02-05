#include <stdio.h>
#include <errno.h>
#include <stdio.h>
#include <time.h>


int insertion_Sort()
{
  int i = 0, j, n = 0;
  int arr[100000];

  FILE* fptr;

  fptr = fopen("random.txt", "r");

  while (fscanf(fptr, "%d", &arr[i]) == 1)
  {
    n++;
    i++;
  }

  clock_t t;
  t = clock();

  // logika sortowania
  int element;
  for (i = 1; i < n; i++)
  {
    element = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > element)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = element;
  }

  t = clock() - t;
  double time_taken = ((double)t) / CLOCKS_PER_SEC;

  // printowanie tabeli
  for (i = 0; i < n; i++)
    printf("%d\n", arr[i]);

  printf("\nSortowanie przez wstawianie trwało %f sekund\n", time_taken);

  return 0;
}
