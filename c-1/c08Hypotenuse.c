#include <stdio.h>
#include <math.h>

int main(){
    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A);
    printf("Enter side of B: ");
    scanf("%lf", &B);
     C = sqrt(pow(A,2) + pow(B,2));
     printf("%lf",C);
     
    return 0;
}