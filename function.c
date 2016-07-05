#include <stdio.h>
#include "min.c"
#include "max.c"

const int N = 10;

int main() {
  int array[N];

  for (int i = 0; i < N; ++i) {
    scanf("%d", &array[i]);
  }

  printf("Min: %d\n", min(array, N));
  printf("Max: %d\n", max(array, N));

  return 0;
}
