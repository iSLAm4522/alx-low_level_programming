#include "main.h"
/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to a pointer to a char (double pointer)
 * @to: The target char pointer to set
 *
 * Description: This function sets the value of the pointer `s` to
 * point to the same location as the pointer `to`.
 */

void set_string(char **s, char *to)
{
*s = to;
}
