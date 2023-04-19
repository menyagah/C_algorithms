#include <stdio.h>
#include "main.h"

void reverse_array(int array[], int length)
{
  int i;
  int temp = 0;

  for (i = 0; i < (length/2); i++)
  {
    temp = array[i];
    array[i] = array[length - i - 1];
    array[length-i-1] = temp;
  }
  printf("array[] = ");
  printf(" {");
  for (i = 0; i < length; i++)
  {
    printf("%d", array[i]);
    if(i != length - 1) printf(", ");
  }
  printf("}\n");
}

