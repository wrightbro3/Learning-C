#include <stdio.h>
#include <stdlib.h> // Allows me to unpact terminal arguments

// Need to call ./ex3 21 70 to use this function


int main(int argc, char *argv[])
{
	int age = atoi(argv[1]); //I'm 21 at the time of making this
	int height = atoi(argv[2]);
	
	printf("I am %d years old \n", age);
	printf("I am %d inches tall!\n", height);
	printf("This should trigger a beep\a\nBut it won\'t because apparently modern systems ignore it\n");
	
	return 0; //This is so shit doesn't break
}
	