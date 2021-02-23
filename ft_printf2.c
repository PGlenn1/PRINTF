#include <stdarg.h>
#include "../../Cercle0/libft_upgraded/libft.h"


void    ft_printf(char *format, ...)
{
    char *traverse;
    char *s;
    unsigned int i;
    va_list arg;
    va_start(arg, format);

    i = 0;
    traverse = format;
    while (*traverse)
    {
        while (*traverse && *traverse != '%')
        {
            ft_putchar_fd(*traverse, 1);
            traverse++;
        }
        if (*traverse == '%')
        {
            traverse++;

            if (*traverse == 'c')
            {
                i = va_arg(arg, int);
                ft_putchar_fd(i, 1);
            }
            else if (*traverse == 'd' && *traverse == 'i')
            {
                i = va_arg(arg, int);
                if (i < 0)
                {
                    i = -i;
                    ft_putchar_fd('-', 1);
                }
                ft_putnbr_fd(i, 1);
            }
            else if (*traverse == 's')
            {
                s = va_arg(arg, char *);
                ft_putstr_fd(s, 1);
            }
            traverse++;
            continue;
        }
    }
    va_end(arg);
}

int     main()
{
    char a;
    int b;
    char *c;

    a = 'D';
    b = 15;
    c = "PROUT";
    ft_printf("FT_PRINTF: J'adore la lettre %c, essayons le chiffre %d\nMaintenant, essayons la string %s\n", a, b, c);
    return (0);
}