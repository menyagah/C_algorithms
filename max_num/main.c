#include <stdio.h>
#include "main.h"


int main(void)
{
  int my_array[] = {8,2,34,5,67,9,100,124,1000,45,123,67};
  int max = find_max(my_array, 12);

  printf("maximum number is: %d\n", max);
  return 0;
}
