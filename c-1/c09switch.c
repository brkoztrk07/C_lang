#include <stdio.h>

int main(){
    char grade;
    printf("\nEnter a grade: ");
    scanf("%c", &grade);
switch(grade){
    case 'A':
        printf("perfect!\n");
        break;
    case 'B':
        printf("Good");
        break;
    case 'C':
        printf("You can improve yourself");
        break;
    case 'D':
        printf(" Maybe one day..");
        break;
    case 'F':
    printf("You should learn how to dive first.");
        break;
    default:
        printf("0");
}
}