#include <stdio.h>
#include <stdlib.h>

void swap()
{
    int a,b,t;
    printf("Please enter a 2 value..\n");
    scanf("%d %d", &a,&b);
    t = a;
    a = b;
    b = t;
    printf(" a = %d, b= %d", a,b);
}


int main(void){
swap();

}