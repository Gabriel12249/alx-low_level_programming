#include <stdio.h>
/**
*main -prints the alphabet in lowercase.
*Return: always 0(success)
*/
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
