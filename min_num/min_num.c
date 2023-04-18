#include <stdio.h>
#include "main.h"

int find_min(int array[], int length)
{
  int i;
  int result;
  result = array[0];

  for(i = 1; i < length; i++)
  {
    if(array[i] < result)
    {
      result = array[i];     
    }
  }
  return result;
}
