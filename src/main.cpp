#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int arc, char *argv[]) {
  FILE *w = fopen("../test.bmp", "wb");
  if (w == nullptr) {
      printf("\n\n Can't open the file");
      return -1;
  } else {
      printf("\n\n File w opened!");
  }
 
  return 1;
}