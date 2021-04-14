#include "includes/ft_printf.h"

int main()
{
	unsigned int s;

	s = 198;
	ft_printf("-->|%16x|<--\n", s);
	printf("\n");
	ft_printf("-->|%16x|<--\n", s);
	return (0);
}
