#include <stdio.h>
<<<<<<< HEAD

=======
>>>>>>> 66fa9fa (c02)
void pointer()
    {
        //int *p; // p, int(burası için geçerli) türünde bir veriyi işaret eden bir işaretçidir.
        //Pointer Atama.
        int a = 8;
        int *p = &a; //Burada & operatoru atama operatoru a'nın adresini p ye  atadık. 
        // * = operatıru //dereferencing)ü bir işaretçinin işaret ettiği adresteki değeri alır.
        printf("%d\n", *p); // p nin işaret ettiği adresteki değeri yazdırır, yani 10.
     
    }

int main()
{
    pointer();
    return 0;
}
