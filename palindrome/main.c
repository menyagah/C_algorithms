#include <stdio.h>
#include "main.h"
#include <stdbool.h>

int main(void){
  char string[] = "abcdcba";
  char string2[] = "abscdghr";
  char string3[] = "not a palindrome";

  if (is_palindrome(string)) {
    printf("This is a palindrome\n");
  } else {
    printf("Not a palindrome\n");
  }
   if (is_palindrome(string2)) {
    printf("\nThis is a palindrome\n");
  } else {
    printf("Not a palindrome\n");
  }
  
  return 0;
}
