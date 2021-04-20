#include "includes/ft_printf.h"

int main()
{
	
	void *p;

	p = NULL;
	int i = 0;
	
	while (i < 20)
	{
		ft_printf("-->|%-12.p|<--\n", p);
		printf("\n");
		printf("-->|%-12.p|<--\n", p);
		system("leaks a.out");
		i++;
	}
	

	return (0);
}