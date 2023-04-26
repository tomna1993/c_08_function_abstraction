#include <stdio.h>
#include <cs50.c>

int main(void)
{
	int n;

	do
	{
		n = get_int("How many bricks do you want to print? ");
	}
	while(n < 1);

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}