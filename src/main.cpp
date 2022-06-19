#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct FileHeader {
    short bfType;
    int bfSize;
    short bfReserved1;
    short bfReserved2;
    int bfOffBits;
} File;

struct PictureHeader {
    int biSize;
    int biWidth;
    int biHeight;
    short biPlanes;
    short biBitCount;
    int biCompression;
    int biSizeImage;
    int biXPelsPerMeter;
    int biYPelsPerMeter;
    int biClrUsed;
    int biClrImportant;
} Picture;

struct ColorsRGB {
    char R;
    char G;
    char B;
} Rgb;

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