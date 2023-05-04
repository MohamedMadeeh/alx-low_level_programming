#include "main.h"

/**
 * get_endianness - Checks endianness.
 *
 * Return: if big-endian - 0, if little-endian - 1.
 */
int get_endianness(void)
{
	int n = 1;
	char *end = (char *)&n;

	if (*end == 1)
		return (1);

	return (0);
}
