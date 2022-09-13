#include<stdlib.h>
#include <stdlib.h>
/**
 * main - Entry point if the number is positive, zero,
 *
 * Description: using the main function
 * this program prints "programming is positive"
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastDigit = (n%10);

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d\n\n and is greater than 5", n,lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d\n\n and is 0", n,lastDigit);
	}
	else if ((lastDigit < 6)&&(lastDigit !=0))
	{	printf("Last digit of %d is %d\n\n and is less than 6", n,lastDigit);
	}
	return (0);
}
