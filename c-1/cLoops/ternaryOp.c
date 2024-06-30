#include <stdio.h>

int findMax(int x, int y)
{
    if(x > y)
    {
        return x;
    }
    else{
        return y;
    }
}
int main(){
    //Ternary operator: shortcut of if/else  statement.
    // (condition) ? value  true : false 
    int max = findMax(5,4);
    printf("%d", max);
    return 0;

}