# include <stdio.h>
# include "string.h"
int main (){
  char str1[50];
  char str2[50];
  int len1;
  int len2;
  char status = 't';
  printf("Enter 1st string: ");
  scanf("%s",str1);
  printf("Enter 2nd string: ");
  scanf("%s",str2);
  len1 = strlen(str1);
  len2 = strlen(str2);
  if (len1 != len2){
    printf("strings are not equal");
  }else{
    for (int i = 0; i < len1; i++){
      if (str1[i] == str2[i]){
        continue;
      }else{
        printf("strings are not equal");
        status = 'f';
        break;
      }
      
    }
    if (status == 't'){
      printf("strings are same");
    }
  }
  return 0;
}