#include "includes/ft_printf.h"

int main()
{
	int d = -12;


	ft_printf("-->|%4.0d|--\n", d);
	ft_printf("-->|%4.1d|--\n", d);
	printf("\n");
	printf("-->|%4.0d|--\n", d);
	printf("-->|%4.1d|--\n", d);

	return (0);
}
