#include <stdio.h>
int main(void){
	int typeInt;
	char typeChar;
	long int typeLongInt;
	long long typeLongLong;
	float typeFloat;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(typeChar));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(typeInt));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(typeLongInt));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(typeLongLong));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(typeFloat));
}
