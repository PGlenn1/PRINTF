#include "includes/ft_printf.h"

int main()
{
	char *s;

	s = "salut";
	ft_printf("-->|%-16.p|<--\n", s);
	ft_printf("-->|%-16p|<--\n", s);
	ft_printf("-->|%-15.p|<--\n", s);
	ft_printf("-->|%-15p|<--\n", s);
	ft_printf("-->|%-14.p|<--\n", s);
	ft_printf("-->|%-14p|<--\n", s);
	printf("\n");
	printf("-->|%-16.p|<--\n", s);
	printf("-->|%-16p|<--\n", s);
	printf("-->|%-15.p|<--\n", s);
	printf("-->|%-15p|<--\n", s);
	printf("-->|%-14.p|<--\n", s);
	printf("-->|%-14p|<--\n", s);
	return (0);
}
