#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 * @a: address of the main function
 * @n: number of bytes to print
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int a;

	for (c = 0; c < n; c++)
	{
		printf("%.2hhx", a[c]);
		if (c < n - 1)
			printf(" ");
	}
	printf("\n");

}


int main(int argc, char **argv)
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, bytes);
	return (0);
}
