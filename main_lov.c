#include "includes/ft_printf.h"

int main()
{
	int		d = 0;


  	ft_printf("-->|%.*d|<--\n", 4, 0, d);
  	ft_printf("\n");
  	printf("-->|%.*d|<--\n", 4, 0, d);
	return (0);
}
