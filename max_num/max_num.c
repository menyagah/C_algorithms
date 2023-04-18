#include <stdio.h>
#include "main.h"

int find_max(int array[], int length)
{
  int max = array[0];
  int i;

  for (i = 0; i < length; i++)
  {
    if(array[i] > max)
    {
      max = array[i];
    }
   
  }
  return max;
}
