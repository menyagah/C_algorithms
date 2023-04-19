#include <stdio.h>
#include "main.h"

int main(void)
{
  int array[] = {11,12,13,14,15,16,17,18,19,20};
  int length = 10;
  int array1[] = {1,2,3,4,5,6,7,8};
  int length2 = 8;
  reverse_array(array, length);
  reverse_array(array1, length2);
}
