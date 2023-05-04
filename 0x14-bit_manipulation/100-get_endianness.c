#include "main.h"

/**
 * get_endianness - this checks endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
unsigned int l;
char *p;

l = 1;
p = (char *) &l;

return ((int)*p);
}
