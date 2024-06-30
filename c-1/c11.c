#include <stdio.h>
/*void birthday()
    {
    printf("\nHappy birthday dear %s!", name);
    printf("\n You are %d years old!.", age);
    }
*/
void birthday(char name[], int age)
    {
    printf("\nHappy birthday dear %s!", name);
    printf("\n You are %d years old!.", age);
    }


int main(){
    char name[] = "Burakk";
    int age = 28;
    birthday(name,age); // We have to write parameters.
    return 0;

}