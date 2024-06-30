#include <stdio.h>

int main(){
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];
    int i = 0;
    for(;i < 5; i++)
        arr2[i] = arr1[i];

    printf("%d\n",arr1[i]);

    return 0;
}