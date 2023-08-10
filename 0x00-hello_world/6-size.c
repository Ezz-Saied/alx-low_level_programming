#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("\nsize of a char: %ld byte(s)\n", sizeof(char));
	printf("\nsize of an int: %ld byte(s)\n", sizeof(int));
	printf("\nsize of a long int: %ld byte(s)\n", sizeof(long int));
	printf("\nsize of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("\nsize of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
