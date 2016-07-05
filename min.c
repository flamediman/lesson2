int min(int array[], int size) {
  int result;

  for (int i = 0; i < size; ++i)  {
    if(i == 0) {
      result = array[0];
    } else if(array[i] < result) {
      result = array[i];
    }
  }

  return result;
}

