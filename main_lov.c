#include "includes/ft_printf.h"

int main()
{
	unsigned int u;

	u = 0;
	ft_printf("-->|%-4.u|<--\n", u);
	printf("\n");
	printf("-->|%-4.u|<--\n", u);

	return (0);
}