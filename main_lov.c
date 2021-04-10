#include "includes/ft_printf.h"

int main()
{
	char *s = NULL;
	ft_printf("-->|%-16.*s|<--\n", 4, s);
	printf("\n");
	ft_printf("-->|%-16.*s|<--\n", 4, s);
	return (0);
}