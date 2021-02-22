#include <stdarg.h>
#include "../../Cercle0/libft_upgraded/libft.h"


void    ft_printf(char *format, ...)
{
    char *traverse;
    unsigned int i;
   // char *s;
    va_list arg;
    va_start(arg, format);

    i = 0;
    for(traverse = format; *traverse != '\0'; traverse++)
    {
        while(*traverse != '%')
        {
            ft_putchar_fd(*traverse, 1);
            traverse++;
        }
        traverse++;

        if (*traverse)
        {
            if (*traverse == 'c')
            {
                i = va_arg(arg, int);
                ft_putchar_fd(i, 1);
                break;
            }
            else if (*traverse == 'd') ///// PUTNBR BASE 10
            {
                i = va_arg(arg, int);
                if(i<0)
                {
                    i = -i;
                    ft_putchar_fd('-', 1);
                }
                ft_putnbr_fd(i, 1);
                break;
            }
        }
    }
    va_end(arg);
}

int     main()
{
    char a;
    int b;

    a = 68;
    b = 15;
    printf("j'adore le chiffre %c, essayons %d\n", a, b);
    ft_printf("J'adore le chiffre %c, essayons %d", a, b);
    return (0);
}