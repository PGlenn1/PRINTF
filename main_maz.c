#include "includes/ft_printf.h"

int main()
{

	int		d = -5;

	/// LIGNE 1988
//	ft_printf("-->|%.d|<--\n", d);
//	ft_printf("-->|%4.*d|<--\n", 0, d);
//	ft_printf("-->|%4.*d|<--\n", 2, d);
//	ft_printf("-->|%4.*d|<--\n", 3, d);
	ft_printf("-->|%4.*d|<--\n", 4, d);
//	ft_printf("-->|%4.0d|<--\n", d);
  	printf("\n");
//	printf("-->|%.d|<--\n", d);
//	printf("-->|%4.*d|<--\n", 0, d);
//	printf("-->|%4.*d|<--\n", 2, d);
//	printf("-->|%4.*d|<--\n", 3, d);
	printf("-->|%4.*d|<--\n", 4, d);
//	printf("-->|%4.0d|<--\n", d);


	return (0);
}
