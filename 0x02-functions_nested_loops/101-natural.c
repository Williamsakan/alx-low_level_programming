#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum;
	sum = 0;
	
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
		else
		{
			continue;
		}
	}
	printf("sum of multiples of 3 and 5 below 1024 is %d\n", sum);

	return (0);
}
