#include "includes/ft_printf.h"

int main()
{

	int		d = -12;

	/// LIGNE 674
	ft_printf("%d\n", d);
//	ft_printf("-->|%-*.1d|<--\n", 4, d);
//	ft_printf("-->|%-*.1d|<--\n", 5, d);
	printf("\n");
	printf("%d\n", d);
	//printf("-->|%-*.1d|<--\n", 4, d);
	//printf("-->|%-*.1d|<--\n", 5, d);

	return (0);
}
