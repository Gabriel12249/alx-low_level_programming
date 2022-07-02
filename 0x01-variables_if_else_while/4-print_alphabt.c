#include <stdio.h>
/**
*main - entry point
*Return: always 0(success)
*/
int mqin(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if(ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar(10);
return (0);
}
