#include "includes/ft_printf.h"

int main()
{
	int		d = -1;


  	//ft_printf("-->|%0*.*d|<--\n", 4, -4, d);
  	//ft_printf("-->|%0*.*d|<--\n", 4, -3, d);
  	//ft_printf("-->|%0*.*d|<--\n", 4, -2, d);
  	ft_printf("-->|%0*.*d|<--\n", 4, -1, d);
  	//ft_printf("-->|%0*.*d|<--\n", 4, 0, d);
  	//ft_printf("-->|%0*.*d|<--\n", 4, 1, d);
  	//ft_printf("-->|%0*.*d|<--\n", 4, 2, d);
  	//ft_printf("-->|%0*.*d|<--\n", 4, 3, d);
  	//ft_printf("-->|%-*.*d|<--\n", 8, 4, d);
  	//ft_printf("-->|%-*.*d|<--\n", 8, 5, d);
  	ft_printf("\n");
  	//printf("-->|%0*.*d|<--\n", 4, -4, d);
  	//printf("-->|%0*.*d|<--\n", 4, -3, d);
  	//printf("-->|%0*.*d|<--\n", 4, -2, d);
  	printf("-->|%0*.*d|<--\n", 4, -1, d);
  	//printf("-->|%0*.*d|<--\n", 4, 0, d);
  	//printf("-->|%0*.*d|<--\n", 4, 1, d);
  	//printf("-->|%0*.*d|<--\n", 4, 2, d);
  	//printf("-->|%0*.*d|<--\n", 4, 3, d);
  	//printf("-->|%-*.*d|<--\n", 8, 4, d);
  	//printf("-->|%-*.*d|<--\n", 8, 5, d);
	return (0);
}
