# include "stdio.h"
int main (){
  int n = 0, i = 0;
  printf("Enter no of rows: ");
  scanf("%d",&n);
  for (int i = 1; i <= n;i++){
    for (int j = n-i; j > 0; j--){
      printf(" ");
    }
    for (int k = 1; k <= i; k++){
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}