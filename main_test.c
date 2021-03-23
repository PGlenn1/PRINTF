#include "includes/ft_printf.h"

int	main()
{
	char *str;
	int tab[7];
	int a = 15;
	int b = 0;
	int c = -15;
	int d = 1;
	int e = -1;
	int f = 20;
	int g = -30;

	tab[0] = a;
	tab[1] = b;
	tab[2] = c;
	tab[3] = d;
	tab[4] = e;
	tab[5] = f;
	tab[6] = g;

	int i = 0;

	printf("====================\nTESTING D\n====================\n");
/////////////////////////////////////////

	printf("\nTEST 1\n\n");
	str = "Hello %d! c'est pas tres gentil\n";
	while (i < 7)
	{
		ft_printf(str, tab[i]);
		printf(str, tab[i]);
		printf("\n");
		i++;
	}

	printf("\nTEST 2\n\n");
	str = "Hello %d! le deuxieme chiffre est: %d\n";
	i = 0;
	while (i < 6)
	{
		ft_printf(str, tab[i], tab [i + 1]);
		printf(str, tab[i], tab[i + 1]);
		printf("\n");
		i++;
	}
	ft_printf(str, tab[i], tab[i]);

	printf("\nTEST 3\n\n");
	str = "1er %d! 2eme %d! 3eme %d!\n";
	i = 0;
	while (i < 5)
	{
		ft_printf(str, tab[i], tab [i + 1]);
		printf(str, tab[i], tab[i + 1]);
		printf("\n");
		i++;
	}

	printf("\nTEST 4\n\n");
	str = "Hello %0d!\n";
	i = 0;
	while (i < 7)
	{
		ft_printf(str, tab[i]);
		printf(str, tab[i]);
		printf("\n");
		i++;
	}

	return (0);
}
