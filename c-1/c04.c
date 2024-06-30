#include <stdio.h>

int main(){
    // +(toplama)
    // -(cikarma)
    // /(bolme)
    // *(multiplication)
    // % (modulus)
    // ++ increment
    // -- decrement
    /*int x = 5;
    int y = 2;
    float z = x / (float) y; //casting
    */
   int b = 7;
     int c = b++;
    printf("%d\n",c);
    int i = 5;
    int j = ++i; // i önce 6 olur, sonra j ye atanır.
    int k = 4;
    int y = i++; // i nin değeri önce j ye atanır sonra i artırılır.
    printf("%d",y);
    printf("%d",j);
    return 0;
}