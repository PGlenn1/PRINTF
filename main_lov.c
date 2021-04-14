#include "includes/ft_printf.h"

int main()
{
	unsigned int s;
	int a;
	int b;

	s = 198;
	a = ft_printf("-->|%02.X|<--\n", s); 
	printf("\n");
	b = printf("-->|%02.X|<--\n", s); 
	ft_putnbr_fd(a, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(b, 1);
}