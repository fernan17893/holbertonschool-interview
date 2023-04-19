#include <stdlib.h>
#include <stdio.h>

#include "sandpiles.h"

/**
 * sandpiles_sum - prints the sum of two sandpiles
 * @grid1: Left 3x3 grid
 * @grid2: Right 3x3 grid
 *
 */

void add_sandpiles(int grid1[3][3], int grid2[3][3])
{

	int i, j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] = grid1[i][j] + grid2[i][j];
		}
	}
}

void print_sandpile(int grid[3][3])
{
	int i, j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{

			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

int check_sandpiles(int grid[3][3])
{
	int i, j = 0;
	int flag = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid[i][j] > 3)
			{
				flag = 1;
			}
		}
	}

	if (flag == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void topple_sandpiles(int grid[3][3])
{
	int i, j = 0;
	int temp[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			temp[i][j] = grid[i][j];
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (temp[i][j] > 3)
			{
				grid[i][j] = grid[i][j] - 4;
				if (i - 1 >= 0)
				{
					grid[i - 1][j] = grid[i - 1][j] + 1;
				}
				if (i + 1 <= 2)
				{
					grid[i + 1][j] = grid[i + 1][j] + 1;
				}
				if (j - 1 >= 0)
				{
					grid[i][j - 1] = grid[i][j - 1] + 1;
				}
				if (j + 1 <= 2)
				{
					grid[i][j + 1] = grid[i][j + 1] + 1;
				}
			}
		}
	}
}

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	add_sandpiles(grid1, grid2);
	while (check_sandpiles(grid1) == 1)
	{
		printf("=\n");
		print_sandpile(grid1);
		topple_sandpiles(grid1);
	}
}
