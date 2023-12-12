# include "file_operations.h"
#include <stdio.h>
int fileExist(const char *filename){
  FILE *fp = fopen(filename,"r");
  if (fp == NULL){
    printf("could not open file.");
    return 0;
  }else{
    fclose(fp);
    return 1;
  }
}
void readFile(const char *filename){
  FILE *fp = fopen(filename,"r");
  char c;
  while ((c = fgetc(fp)) != EOF) {
    putchar(c);
    };
  fclose(fp);
  return;
}
void writeInFile(const char *filename, const char *content){
  FILE *fp = fopen(filename,"w");
  fprintf(fp,"%s",content);
  fclose(fp);
}