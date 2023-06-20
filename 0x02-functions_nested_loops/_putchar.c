#include <unistd.h>
/**
 *  -putchar - write the character C to the stdout
 *  @c: The character to print
 *  Return: on success 1.
 *  On error, -1 is returned, and error number is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
