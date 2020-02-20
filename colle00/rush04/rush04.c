
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
		ft_putchar(65);
		while (hori < x-2)
		{
			ft_putchar(66);
			hori++;
		}	

		ft_putchar(67);
		ft_putchar('\n');
		while (vert < y-2)
		{
			ft_putchar(66);
			vert++;

			hori = 0;
			while (hori < x-2)
			{
				ft_putchar(' ');
				hori++;	
			}
			ft_putchar(66);
			ft_putchar('\n');
		}
		
		hori = 0;
		ft_putchar(67);
		while (hori < x-2)
		{
			ft_putchar(66);
			hori++;
		}	
		ft_putchar(65);
		ft_putchar('\n');
	}
}
