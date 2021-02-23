#include <stdio.h>

int		main()
{
	char *a;
	int b;
	int c;
	int e;
	int f;

	a = "salut";
	b = 70;
	c = 20;
	e = 150;
	printf("test:|%150.*s\ntest2:|%*.70s", b, a, e, a);
	return (0);
}
