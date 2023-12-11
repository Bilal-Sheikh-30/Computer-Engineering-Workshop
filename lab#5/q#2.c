// Create a program that reads a text file and counts the number of words in it. Display the total number of words at the end.

#include "stdio.h"
#include "string.h"
int main() {
  int count = 0;
  FILE *fh;
  fh = fopen("lab5.txt", "r");
  if (fh != NULL) {
    char c;
    while ((c = fgetc(fh)) != EOF) {
      if (c == ' ' || c == '\n') {
        count++;
      }
    }
    // 1 is added to count to consider the last word which was not counted due to EOF
    printf("total words %d", count+1);
    fclose(fh);
  } else {
    printf("couldnt open file.\n");
  }

  return 0;
}