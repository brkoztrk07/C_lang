#include <stdio.h>

int main(){
    int var = 10;
    int *p;
    p = &var; //p, bellekteki var adresinin adresini tutar. &=eşitlenecek variable ın bellekteki yeri.

    int c = 8;
    int *k;
    k = &var;
    printf("var degeri: %d\n", *k);


    return 0;
}