#include "includes/ft_printf.h"

int main()
{
	char *s;

	s = NULL;
	ft_printf("-->|%-16.p|<--\n", s); 
	ft_printf("-->|%-16p|<--\n", s); 
	ft_printf("-->|%-15.p|<--\n", s); 
	ft_printf("-->|%-15p|<--\n", s); 
	printf("\n");
	printf("-->|%-16.p|<--\n", s); 
	printf("-->|%-16p|<--\n", s); 
	printf("-->|%-15.p|<--\n", s); 
	printf("-->|%-15p|<--\n", s); 
}