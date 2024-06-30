#include  <stdio.h>
int main(){
    //FORMAT SPESIFIERS
    //Integers
    int a = 5;
    unsigned int b = 8;
    float c = 3.14;
    char d = 'Y';
    char str[] = "khy";
    int l = 12;
    printf("%p", l); //pointer fs for heap address.
    printf("%d", a); // For int format spesifier
    scanf("%d", &a); // FOR SCANF: %d assigned int and & RAM location. 
    printf("%u", b); // for unsigned int fs
    scanf("%u", &a); // For unsigned int & RAM location.
    printf("%f", c); // for floating number fs.
    scanf("%f", &a); // for floating scanf fs.
    printf("%c", d); // for character fs.
    scanf("%c", &c); // for character Scanf fs.
    printf("%s", str); // for string. Every string is character array.
    scanf("%s", str); // for character array or string for scanf.
    //Special Format
    printf("%%"); // output is %.    
    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align
    return 0;
}