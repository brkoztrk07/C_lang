#include <stdio.h>

void hello(char[], int); //Function prototype

void hello(char name[], int age)
{
    printf("\nHello %s", name);
    printf("\n You are %d years old", age);
}

int main()
{
//Functiom prototype
char name[] = "Burak";
int age = 27;
hello(name,age);

return 0;
}