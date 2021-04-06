#include "includes/ft_printf.h"

int main()
{

	int		d = -12;


//	ft_printf("-->|%0*.*d|<--\n", 4, 0, d);
//	ft_printf("-->|%0*.*d|<--\n", 4, 1, d);
//	ft_printf("-->|%0*.*d|<--\n", 4, 2, d);
	ft_printf("-->|%0*.*d|<--\n", 4, 3, d);
	ft_printf("-->|%0*.*d|<--\n", 4, 4, d);
	ft_printf("\n");
//	printf("-->|%0*.*d|<--\n", 4, 0, d);
//	printf("-->|%0*.*d|<--\n", 4, 1, d);
//	printf("-->|%0*.*d|<--\n", 4, 2, d);
	printf("-->|%0*.*d|<--\n", 4, 3, d);
	printf("-->|%0*.*d|<--\n", 4, 4, d);
	return (0);
}
