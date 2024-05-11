#include "main.h"

/**
 * set_string - sets teh calue of a pointer to a char
 *
 * @s: the pointer to a pointer
 *
 * @to: the dest
 */

void set_string(char **s, char *to)
{
	*s = to;
}
