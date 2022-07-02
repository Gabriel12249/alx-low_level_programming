#include <stdio.h>
/**
*main - entry point
*Return: always 0(success)
*/
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
if (ch != 57)
{
putchar(44);
putchar(3);
}
}
putchar(10);
return (0);
}
