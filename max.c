#include <stdio.h>

const int N = 10;

int main() {
  int array[N], max;

  for (int i = 0; i < N; ++i) {
    scanf("%d", &array[i]);
  }

  for (int i = 0; i < N; ++i)  {
    if(i == 0) {
      max = array[0];
    } else if(array[i] > max) {
      max = array[i];
    }
  }

  printf("%d", max);

  return 0;
}
