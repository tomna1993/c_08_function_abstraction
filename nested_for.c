#include <stdio.h>
#include <cs50.c>

int main(void)
{
	int n = get_int("How many bricks do you want to print? ");

	while(n < 1)
	{
		n = get_int("How many bricks do you want to print? ");
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}