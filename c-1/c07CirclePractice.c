#include <stdio.h>

int main(){
    const double PI = 3.14159;
    double r;
    double circ;

    printf("Please enter a circle's radial:");
    scanf("%lf", &r);
    circ = 2 * PI * r;
    printf("circ: %lf", circ);
    
    return 0;
}