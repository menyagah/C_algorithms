#include <stdio.h>
#include "main.h"

int find_occurence(int array[], int length, int value)
{
  int i;
  int count = 0;

  for(i = 0; i < length; i++)
  {
    if(value == array[i])
    {
      count += 1;
    }
  }
 
  return count;
}
