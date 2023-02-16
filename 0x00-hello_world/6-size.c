#include <stdio.h>


/**
* main - prints the size of various typesa based on computer that its
* complied and run on.
* Return: Always 0.
*/
int main(void)
{
printf("Size of a char: %zu bytes(s)\n" , sizeof(char));	
printf("Size of an int: %zu byes(s)\n"  , sizeof(int));
printf("Size of an long int: %zu byes(s)\n"  , sizeof(long int));
printf("Size of an long long int: %zu byes(s)\n"  , sizeof(long long int));
printf("Size of an float: %zu byes(s)\n"  , sizeof(float));
return (0);
}
