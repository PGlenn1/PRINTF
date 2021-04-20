#include "includes/ft_printf.h"

int main()
{
	
	void *p;

	p = NULL;
	int i = 0;
	
	while (i < 20)
	{
		ft_printf("-->|%-12d|<--\n");
		printf("\n");
		// ft_printf("-->|%-z#-12alskjd|<--\n");
		// system("leaks a.out");
		i++;
	}
	

	return (0);
}