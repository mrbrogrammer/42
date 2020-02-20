
#include <unistd.h>
#include "ft_putchar.c"

void	rush(int x, int y)
{
	int hori;
	int vert;
	
	vert = 0;
	hori = 0;
	if (x)
	{
		ft_putchar('o');
		while (hori < x-2)
		{
			ft_putchar('-');
			hori++;
		}	

		ft_putchar('o');
		ft_putchar('\n');
		while (vert < y-2)
		{
			ft_putchar('|');
			vert++;

			hori = 0;
			while (hori < x-2)
			{
				ft_putchar(' ');
				hori++;	
			}
			ft_putchar('|');
			ft_putchar('\n');
		}
		
		hori = 0;
		ft_putchar('o');
		while (hori < x-2)
		{
			ft_putchar('-');
			hori++;
		}	
		ft_putchar('o');
		ft_putchar('\n');
	}
}
