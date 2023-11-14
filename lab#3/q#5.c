#include <stdio.h>
int main()
{
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{1, 2}, {3, 4}};
    int *ptrMat1 = &mat1[0][0];
    int *ptrMat2 = &mat2[0][0];
    for (int i = 0; i < 4; i++)
    {
        *(ptrMat1 + i) = *(ptrMat1 + i) + *(ptrMat2 + i);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", *(ptrMat1 + i));
    }
    return 0;
}