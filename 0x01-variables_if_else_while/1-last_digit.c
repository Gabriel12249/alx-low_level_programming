#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - print thr last digit of the number stored in the variable n.
*Return: always 0(success)
*/
int main(void)
{
int n, lastd;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n);
}
else if (lastd == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastd);
}
else if (lastd < 6 && lastd != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
}
return (0);
}
