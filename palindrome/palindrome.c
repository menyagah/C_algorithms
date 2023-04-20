#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdbool.h>


bool is_palindrome(char string[]){
  int i;
  int middle = strlen(string)/2;
  int length = strlen(string);

  for (i = 0; i < middle; i++){
    if(string[i] != string[length-i-1]){
      return false;
    }
  }
  return true;
}

