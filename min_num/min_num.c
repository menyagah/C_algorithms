#include <stdio.h>
#include "main.h"

int main(void)
{
  int myarray[] = {5,9,10,11,4,3,8,6,7};

  int min = find_min(myarray, 9);
  printf("\nMinimum is: %d\n\n", min);

  return 0;
}

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
