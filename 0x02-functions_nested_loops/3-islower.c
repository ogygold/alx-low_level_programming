#include "main.h"
/**
 * _islower- checks if an alphabet in
 * lower case
 * @c: is tested to be between a - z
 *
 * Return: 1 when c is lower case
 * then 0 otherwise
 */
int _islower(int c)
{
if (c < 'a' && c < 'z')
{
return (0);
}
else
{
return (1);
}
}
