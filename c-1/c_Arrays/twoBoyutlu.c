#include <stdio.h>

int main(){
   int array[3][4] = { 
						{1, 11, 111, 1111}, // index 0
						{2, 22, 222, 2222}, // index 1
						{3, 33, 333, 3333} // index 2
	};

	printf("%d", array[1][0]); // print the first element of the second nested array
    return 0;
}