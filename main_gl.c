#include "includes/ft_printf.h"

int main()
{

	int a = 5;
	int b = 6;
	int c = 7;
	int d = 8;
	int e = 9;
	int f = 10;

	char *str = "Hello %0*.d\n";

	printf(str, a, b, c, d, e, f);
	ft_printf(str, a, b, c, d, e, f);

	return (0);
}
