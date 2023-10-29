#include <stdio.h>

int main(void) {
    // with for loop
  int terms;
  printf("Enter no of terms: ");
  scanf("%d",&terms);
  int sum = 0;
  for (int i = 0; terms != 0;i++){
    printf("%d\n",i+1);
    i++;
    sum += i;
    terms--;
  }
  printf("Sum is: %d",sum);

// with while loop
int terms;
  printf("Enter no of terms: ");
  scanf("%d",&terms);
  int i = 1;
  int sum = 0;
  while (terms != 0){
    printf("%d\n",i);
    sum += i;
    i+= 2;
    terms--;
  }
  printf("sum: %d",sum);

//   with do while loop
int terms;
  printf("Enter no of terms: ");
  scanf("%d",&terms);
  int i = 1;
  int sum = 0;
  do{
    printf("%d\n",i);
    sum += i;
    i+=2;
    terms--;
  } while (terms != 0);
  printf("sum: %d",sum);
  return 0;
}