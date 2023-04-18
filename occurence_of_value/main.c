#include <stdio.h>
#include "main.h"


int main(void)
{
  int myarray[] = {1,23,4,5,6,1,32,1,54,1,67,8,9,1,100,21,1,1,45,1};
  int myvalue = 1;
  int ocurrence = find_occurence(myarray, 20, myvalue);

   printf("%d occurs %d times in the array\n", myvalue, ocurrence);

}
