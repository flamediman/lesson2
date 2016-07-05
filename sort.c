#ifndef MY_SORT
#define MY_SORT

#include "min.c"

void sort(int *result, int array[], int size) {
  int index = 0;
  int array_max = max(array, size);

  for (int i = 0; i < size; ++i)  {
    int array_min = min(array, size);

    if(array[i] == array_min) {
      result[index] = array_min;
      array[i] = array_max;
      index++;
    }
  }
}

#endif
