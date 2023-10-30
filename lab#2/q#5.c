# include <stdio.h>
# include "string.h"
int main() {
  char something[] = {'a','b','d','b','f','e','d'};
  for (int i = 0; i < strlen(something); i++){
    int count = 0;
    for (int j = 0; j < strlen(something); j++){
      if (something[i] == something[j]){
        count++;
      }
    }
    if (count == 1){
      printf("%c\n",something[i]);
      count = 0;
    }else{
      count = 0;
    }

  }
  return 0;
}