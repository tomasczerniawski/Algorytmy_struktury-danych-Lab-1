// Tomas Czerniawski
// Minimalna Liczba Monet
// 2023-01-31

#include <stdio.h>
#include <stdlib.h>

int *getMinCoins(int *coinList, int n, int value, int *coinCount);

int main(void) {
  int coinList[] = {1, 2, 5};
  int value = 69;

  int len = sizeof(coinList) / sizeof(coinList[0]);
  
  int coinComposition[value];
  int coinCount = 0;

  int *result = getMinCoins(coinList, len, value, &coinCount);
  if (!result) {
    printf("Error: failed to get the minimum coins\n");
    return 1;
  }

  printf("The value %d can be represented by these coins:", value);
  for (int i = 0; i < coinCount; i++) {
    printf("%d, ", result[i]);
  }

  free(result);
  return 0;
}

int *getMinCoins(int *coinList, int n, int value, int *coinCount) {
  int *composition = malloc(value * sizeof(int));
  if (!composition) {
    return NULL;
  }

  int compositionIndex = 0;
  for (int i = n - 1; i >= 0; i--) {
    while (value >= coinList[i]) {
      composition[compositionIndex] = coinList[i];
      value = value - coinList[i];
      compositionIndex++;
    }
    if (value == 0) {
      break;
    }
  }

  *coinCount = compositionIndex;
  return composition;
}
