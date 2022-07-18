#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to be change
 * @to: string that change pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
