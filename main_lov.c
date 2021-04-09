#include "includes/ft_printf.h"

int main()
{
	char c = 'a';

	ft_printf("-->|%04c|--\n", c);
	printf("\n");
	printf("-->|%04c|--\n", c);

	return (0);
}
