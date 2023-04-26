#include <stdio.h>
#include <cs50.c>

int get_gridSize(void);
void printGrid(int size);

int main(void)
{
	//  Get size of grid, it can be any positive integer number bigger than zero
	int n = get_gridSize();

	// Print grid of bricks
	printGrid(n);
}

int get_gridSize(void)
{
	int i;
	do
	{
		i = get_int("How many bricks do you want to print? ");
	}
	while(i < 1);

	return i;
}

void printGrid(int gridSize)
{
	for(int i = 0; i < gridSize; i++)
	{
		for(int j = 0; j < gridSize; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}