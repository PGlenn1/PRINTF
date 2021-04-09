#include "includes/ft_printf.h"

int main()
{
	int		d = 0;
	int e = 35;
	int f = 37;

	

	int a = ft_printf("-->|%.d|<--j'adore manger%.*d cacas\n", d, 4, e);
	ft_printf("\n");
	int b =	ft_printf("-->|%.d|<--j'adore manger%.*d cacas\n", d, 4, f);
	ft_printf("\n");
	ft_printf("a:%d, b:%d\n", a, b);
	printf("a:%d, b:%d\n", a, b);
	return (0);
}
