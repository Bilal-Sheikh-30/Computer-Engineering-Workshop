# include <stdio.h>
int main(){
    int value[3] = {};
    for (int i = 0; i < 3; i++){
        int element;
        printf("Enter value: ");
        scanf("%d",&element);
        value[i] = element;
    }
    int *ptr = &value;
    for (int i = 0; i < 3; i++){
        printf("%d\n",*(ptr + i));
    }
    
    return 0;
}