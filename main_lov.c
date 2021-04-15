#include "includes/ft_printf.h"

int main()
{
	unsigned int u;

	u = -12;
	ft_printf("-->|%-3.*u|<--\n", 4, u);
	printf("\n");
	printf("-->|%-3.*u|<--\n", 4, u);

	return (0);
}