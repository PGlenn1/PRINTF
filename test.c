#include <stdio.h>
#include "../../Cercle0/libft_upgraded/libft.h"
#include <fcntl.h>

int		main()
{
	char *a;
	int b;
	int c;
	int e;
	int fd;

	a = "salut";
	b = 70;
	c = 20;
	e = 150;
	fd = open("prout", O_RDWR);
	write(fd, "a", fd);
//	printf("test:|%-10.19d\n", e);
	return (0);
}
