#include "includes/ft_printf.h"

int main()
{
	char *p = NULL;
	ft_printf("%-16.p|<--\n", p);
	printf("\n");
	printf("%-16.p|<--\n", p);

	return (0);
}