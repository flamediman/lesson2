#include <stdio.h>
#include "min.c"
#include "max.c"
#include "sort.c"
const int N = 10;

int main() {
  int array[N];
  int sort_array[N];

  for (int i = 0; i < N; ++i) {
    scanf("%d", &array[i]);
  }

  printf("Min: %d\n", min(array, N));
  printf("Max: %d\n", max(array, N));
  sort(&sort_array[0], array, N);

  printf("Sort: ");
  for(int i = 0; i < N; ++i) {
    printf("%d ", sort_array[i]);
  }

  return 0;
}
