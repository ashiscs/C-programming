#include <stdio.h>

int main(void)
{
	//normal variable
	int num = 100;

	//pointer variable
	int *ptr;

	//pointer initialization
	ptr = &num;

	//pritning the value
	printf("value of num = %d\n", *ptr);

	return 0;
}
