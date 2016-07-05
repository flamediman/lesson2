#include <stdio.h>

const int N = 10;

int main() {
  int array[N], min;

  for (int i = 0; i < N; ++i) {
    scanf("%d", &array[i]);
  }

  for (int i = 0; i < N; ++i)  {
    if(i == 0) {
      min = array[0];
    } else if(array[i] < min) {
      min = array[i];
    }
  }

  printf("%d", min);

  return 0;
}

