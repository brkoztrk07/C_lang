#include <stdio.h>
int main(){
    char name[25]; //bytes
    int age;
    printf("How old are you ?");
    scanf("%d", &age); //Değişken adresi &.
    printf("You are %d years old", age);

    return 0;
}