#include "includes/ft_printf.h"

int main()
{
	char c = 'a';

//	ft_printf("%4.d", c);
//	ft_printf("-->|%4.c|--\n", c);
	printf("\n");
	printf("%,c", c);

	return (0);
}
