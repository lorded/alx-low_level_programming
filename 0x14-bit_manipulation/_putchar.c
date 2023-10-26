#include "main.h"
#include <unistd.h>
/**
 * _putchar - outputs char o to stdout
 * @o: character that is to be printed
 *
 * Return: if successfull 1.
 * On error, -1 is returned
 */
int _putchar(char o)
{
	return (write(1, &o, 1));
}

