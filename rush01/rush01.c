#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void ft_putchar(char c);
void ft_display(char out[][4]);
int ft_check_pair();
void ft_check_1_4();

int main()
{
	char out[4][4] = {
		{'0', '0', '0', '0'},
		{'0', '0', '0', '0'},
		{'0', '0', '0', '0'},
		{'0', '0', '0', '0'}
	};
	ft_check_1_4(out);
	ft_display(out);
	printf("%d", ft_check_pair());
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_display(char out[][4])
{
	int x;
	int y;
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			ft_putchar(out[y][x]);
			ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

int ft_check_pair()
{
	int istr[16] = {2, 1, 3, 2, 
					 1, 2, 2, 3, 
					 2, 4, 2, 1, 
					 2, 1, 2, 4};
	int i; 
	i = 0;
	while (i < 12)
	{
		if ((istr[i] == istr[i + 4]) && istr[i] != 2)
			return (0);
		else if ((istr[i] != 1 && istr[i + 4] == 4) || (istr[i] == 4 && istr[i + 4] != 1))
			return (0);
		i++;
		if (i == 3)
			i = i + 5;
	}
	return(1);
}

void ft_check_1_4(char out[][4])
{
	int istr[16] = {
		2, 1, 3, 2, 
		1, 2, 2, 3, 
		2, 4, 2, 1, 
		2, 1, 2, 4
	};

	int i;
	int j;
	i = 0;
	while (i < 16)
	{
		if (istr[i] == 4)
		{
			if (istr[i] >= 0 && istr[i] <= 3)
			{
				j = 0;
				while (j < 4)
				{
					out[j][i] = '1' + j;
					j++;
				}
			}
			else if (istr[i] >= 4 && istr[i] <= 7)
			{
				j = 0;
				while (j < 4)
				{
					out[3 - j][i - 4] = '1' + j;
					j++;
				}
			}
			else if (istr[i] >= 8 && istr[i] <= 11)
			{
				j = 0;
				while (j < 4)
				{
					out[i - 8][j] = '1' + j;
					j++;
				}
			}
			else if (istr[i] >= 12 && istr[i] <= 15)
			{
				j = 0;
				while (j < 4)
				{
					out[i - 12][3 - j] = '1' + j;
					j++;
				}
			}
		}
		i++;
	}
}