# include <stdio.h>
#include <string.h>
int main(){
    int arr[3] = {2,4,6};
    int searchValue = 4;
    int *ptr = &arr;
    int status = 0;
    for (int i = 0; i < 3; i++){
        if ( searchValue == *(ptr + i)){
            printf("value is present");
            status = 1;
            break;
        }
    }
    if (status == 0){
        printf("value is absent");
    }
    return 0;
}