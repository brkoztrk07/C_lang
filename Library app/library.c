#include <stdio.h>
#include <string.h>

struct Books{
    char name[20];
    int page;
    float price;
};

int main()
{
    struct Books b1;
    strcpy(b1.name,"1984"); //char dizi sınıfına doğrudan erişemeyiz. Neden Ram de heap de tutuluyor.
    b1.page = 250;
    b1.price =  34.5;
    printf(b1.name);
    return 0;
}