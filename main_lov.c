#include "includes/ft_printf.h"

int main()
{
	char *s;

	s = "Salut";
	ft_printf("-->|%1p|<--\n", s);
	printf("\n");
	printf("-->|%1p|<--\n", s);
	return (0);
}