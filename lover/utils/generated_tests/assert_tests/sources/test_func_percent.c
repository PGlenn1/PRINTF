/*
** charmstr@student.42.fr
*/

#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include <stdio.h>
#include <assert.h>
#include "../includes/printf_lover_test_func.h"

int	test_func_percent(void)
{
setbuf(stdout, NULL);
assert(printf("-->|%-4.%|<--\n") == ft_printf("-->|%-4.%|<--\n"));
assert(printf("-->|%-4.*%|<--\n", -4) == ft_printf("-->|%-4.*%|<--\n", -4));
assert(printf("-->|%-4.*%|<--\n", -3) == ft_printf("-->|%-4.*%|<--\n", -3));
assert(printf("-->|%-4.*%|<--\n", -2) == ft_printf("-->|%-4.*%|<--\n", -2));
assert(printf("-->|%-4.*%|<--\n", -1) == ft_printf("-->|%-4.*%|<--\n", -1));
assert(printf("-->|%-4.*%|<--\n", 0) == ft_printf("-->|%-4.*%|<--\n", 0));
assert(printf("-->|%-4.*%|<--\n", 1) == ft_printf("-->|%-4.*%|<--\n", 1));
assert(printf("-->|%-4.*%|<--\n", 2) == ft_printf("-->|%-4.*%|<--\n", 2));
assert(printf("-->|%-4.*%|<--\n", 3) == ft_printf("-->|%-4.*%|<--\n", 3));
assert(printf("-->|%-4.*%|<--\n", 4) == ft_printf("-->|%-4.*%|<--\n", 4));
assert(printf("-->|%-4.0%|<--\n") == ft_printf("-->|%-4.0%|<--\n"));
assert(printf("-->|%-4.1%|<--\n") == ft_printf("-->|%-4.1%|<--\n"));
assert(printf("-->|%-4.2%|<--\n") == ft_printf("-->|%-4.2%|<--\n"));
assert(printf("-->|%-4.3%|<--\n") == ft_printf("-->|%-4.3%|<--\n"));
assert(printf("-->|%-4.4%|<--\n") == ft_printf("-->|%-4.4%|<--\n"));
assert(printf("-->|%-4%|<--\n") == ft_printf("-->|%-4%|<--\n"));
assert(printf("-->|%-3.%|<--\n") == ft_printf("-->|%-3.%|<--\n"));
assert(printf("-->|%-3.*%|<--\n", -4) == ft_printf("-->|%-3.*%|<--\n", -4));
assert(printf("-->|%-3.*%|<--\n", -3) == ft_printf("-->|%-3.*%|<--\n", -3));
assert(printf("-->|%-3.*%|<--\n", -2) == ft_printf("-->|%-3.*%|<--\n", -2));
assert(printf("-->|%-3.*%|<--\n", -1) == ft_printf("-->|%-3.*%|<--\n", -1));
assert(printf("-->|%-3.*%|<--\n", 0) == ft_printf("-->|%-3.*%|<--\n", 0));
assert(printf("-->|%-3.*%|<--\n", 1) == ft_printf("-->|%-3.*%|<--\n", 1));
assert(printf("-->|%-3.*%|<--\n", 2) == ft_printf("-->|%-3.*%|<--\n", 2));
assert(printf("-->|%-3.*%|<--\n", 3) == ft_printf("-->|%-3.*%|<--\n", 3));
assert(printf("-->|%-3.*%|<--\n", 4) == ft_printf("-->|%-3.*%|<--\n", 4));
assert(printf("-->|%-3.0%|<--\n") == ft_printf("-->|%-3.0%|<--\n"));
assert(printf("-->|%-3.1%|<--\n") == ft_printf("-->|%-3.1%|<--\n"));
assert(printf("-->|%-3.2%|<--\n") == ft_printf("-->|%-3.2%|<--\n"));
assert(printf("-->|%-3.3%|<--\n") == ft_printf("-->|%-3.3%|<--\n"));
assert(printf("-->|%-3.4%|<--\n") == ft_printf("-->|%-3.4%|<--\n"));
assert(printf("-->|%-3%|<--\n") == ft_printf("-->|%-3%|<--\n"));
assert(printf("-->|%-2.%|<--\n") == ft_printf("-->|%-2.%|<--\n"));
assert(printf("-->|%-2.*%|<--\n", -4) == ft_printf("-->|%-2.*%|<--\n", -4));
assert(printf("-->|%-2.*%|<--\n", -3) == ft_printf("-->|%-2.*%|<--\n", -3));
assert(printf("-->|%-2.*%|<--\n", -2) == ft_printf("-->|%-2.*%|<--\n", -2));
assert(printf("-->|%-2.*%|<--\n", -1) == ft_printf("-->|%-2.*%|<--\n", -1));
assert(printf("-->|%-2.*%|<--\n", 0) == ft_printf("-->|%-2.*%|<--\n", 0));
assert(printf("-->|%-2.*%|<--\n", 1) == ft_printf("-->|%-2.*%|<--\n", 1));
assert(printf("-->|%-2.*%|<--\n", 2) == ft_printf("-->|%-2.*%|<--\n", 2));
assert(printf("-->|%-2.*%|<--\n", 3) == ft_printf("-->|%-2.*%|<--\n", 3));
assert(printf("-->|%-2.*%|<--\n", 4) == ft_printf("-->|%-2.*%|<--\n", 4));
assert(printf("-->|%-2.0%|<--\n") == ft_printf("-->|%-2.0%|<--\n"));
assert(printf("-->|%-2.1%|<--\n") == ft_printf("-->|%-2.1%|<--\n"));
assert(printf("-->|%-2.2%|<--\n") == ft_printf("-->|%-2.2%|<--\n"));
assert(printf("-->|%-2.3%|<--\n") == ft_printf("-->|%-2.3%|<--\n"));
assert(printf("-->|%-2.4%|<--\n") == ft_printf("-->|%-2.4%|<--\n"));
assert(printf("-->|%-2%|<--\n") == ft_printf("-->|%-2%|<--\n"));
assert(printf("-->|%-1.%|<--\n") == ft_printf("-->|%-1.%|<--\n"));
assert(printf("-->|%-1.*%|<--\n", -4) == ft_printf("-->|%-1.*%|<--\n", -4));
assert(printf("-->|%-1.*%|<--\n", -3) == ft_printf("-->|%-1.*%|<--\n", -3));
assert(printf("-->|%-1.*%|<--\n", -2) == ft_printf("-->|%-1.*%|<--\n", -2));
assert(printf("-->|%-1.*%|<--\n", -1) == ft_printf("-->|%-1.*%|<--\n", -1));
assert(printf("-->|%-1.*%|<--\n", 0) == ft_printf("-->|%-1.*%|<--\n", 0));
assert(printf("-->|%-1.*%|<--\n", 1) == ft_printf("-->|%-1.*%|<--\n", 1));
assert(printf("-->|%-1.*%|<--\n", 2) == ft_printf("-->|%-1.*%|<--\n", 2));
assert(printf("-->|%-1.*%|<--\n", 3) == ft_printf("-->|%-1.*%|<--\n", 3));
assert(printf("-->|%-1.*%|<--\n", 4) == ft_printf("-->|%-1.*%|<--\n", 4));
assert(printf("-->|%-1.0%|<--\n") == ft_printf("-->|%-1.0%|<--\n"));
assert(printf("-->|%-1.1%|<--\n") == ft_printf("-->|%-1.1%|<--\n"));
assert(printf("-->|%-1.2%|<--\n") == ft_printf("-->|%-1.2%|<--\n"));
assert(printf("-->|%-1.3%|<--\n") == ft_printf("-->|%-1.3%|<--\n"));
assert(printf("-->|%-1.4%|<--\n") == ft_printf("-->|%-1.4%|<--\n"));
assert(printf("-->|%-1%|<--\n") == ft_printf("-->|%-1%|<--\n"));
assert(printf("-->|%.%|<--\n") == ft_printf("-->|%.%|<--\n"));
assert(printf("-->|%.*%|<--\n", -4) == ft_printf("-->|%.*%|<--\n", -4));
assert(printf("-->|%.*%|<--\n", -3) == ft_printf("-->|%.*%|<--\n", -3));
assert(printf("-->|%.*%|<--\n", -2) == ft_printf("-->|%.*%|<--\n", -2));
assert(printf("-->|%.*%|<--\n", -1) == ft_printf("-->|%.*%|<--\n", -1));
assert(printf("-->|%.*%|<--\n", 0) == ft_printf("-->|%.*%|<--\n", 0));
assert(printf("-->|%.*%|<--\n", 1) == ft_printf("-->|%.*%|<--\n", 1));
assert(printf("-->|%.*%|<--\n", 2) == ft_printf("-->|%.*%|<--\n", 2));
assert(printf("-->|%.*%|<--\n", 3) == ft_printf("-->|%.*%|<--\n", 3));
assert(printf("-->|%.*%|<--\n", 4) == ft_printf("-->|%.*%|<--\n", 4));
assert(printf("-->|%.0%|<--\n") == ft_printf("-->|%.0%|<--\n"));
assert(printf("-->|%.1%|<--\n") == ft_printf("-->|%.1%|<--\n"));
assert(printf("-->|%.2%|<--\n") == ft_printf("-->|%.2%|<--\n"));
assert(printf("-->|%.3%|<--\n") == ft_printf("-->|%.3%|<--\n"));
assert(printf("-->|%.4%|<--\n") == ft_printf("-->|%.4%|<--\n"));
assert(printf("-->|%%|<--\n") == ft_printf("-->|%%|<--\n"));
assert(printf("-->|%*.%|<--\n", -4) == ft_printf("-->|%*.%|<--\n", -4));
assert(printf("-->|%*.%|<--\n", -3) == ft_printf("-->|%*.%|<--\n", -3));
assert(printf("-->|%*.%|<--\n", -2) == ft_printf("-->|%*.%|<--\n", -2));
assert(printf("-->|%*.%|<--\n", -1) == ft_printf("-->|%*.%|<--\n", -1));
assert(printf("-->|%*.%|<--\n", 0) == ft_printf("-->|%*.%|<--\n", 0));
assert(printf("-->|%*.%|<--\n", 1) == ft_printf("-->|%*.%|<--\n", 1));
assert(printf("-->|%*.%|<--\n", 2) == ft_printf("-->|%*.%|<--\n", 2));
assert(printf("-->|%*.%|<--\n", 3) == ft_printf("-->|%*.%|<--\n", 3));
assert(printf("-->|%*.%|<--\n", 4) == ft_printf("-->|%*.%|<--\n", 4));
assert(printf("-->|%*.*%|<--\n", -4, -4) == ft_printf("-->|%*.*%|<--\n", -4, -4));
assert(printf("-->|%*.*%|<--\n", -4, -3) == ft_printf("-->|%*.*%|<--\n", -4, -3));
assert(printf("-->|%*.*%|<--\n", -4, -2) == ft_printf("-->|%*.*%|<--\n", -4, -2));
assert(printf("-->|%*.*%|<--\n", -4, -1) == ft_printf("-->|%*.*%|<--\n", -4, -1));
assert(printf("-->|%*.*%|<--\n", -4, 0) == ft_printf("-->|%*.*%|<--\n", -4, 0));
assert(printf("-->|%*.*%|<--\n", -4, 1) == ft_printf("-->|%*.*%|<--\n", -4, 1));
assert(printf("-->|%*.*%|<--\n", -4, 2) == ft_printf("-->|%*.*%|<--\n", -4, 2));
assert(printf("-->|%*.*%|<--\n", -4, 3) == ft_printf("-->|%*.*%|<--\n", -4, 3));
assert(printf("-->|%*.*%|<--\n", -4, 4) == ft_printf("-->|%*.*%|<--\n", -4, 4));
assert(printf("-->|%*.*%|<--\n", -3, -4) == ft_printf("-->|%*.*%|<--\n", -3, -4));
assert(printf("-->|%*.*%|<--\n", -3, -3) == ft_printf("-->|%*.*%|<--\n", -3, -3));
assert(printf("-->|%*.*%|<--\n", -3, -2) == ft_printf("-->|%*.*%|<--\n", -3, -2));
assert(printf("-->|%*.*%|<--\n", -3, -1) == ft_printf("-->|%*.*%|<--\n", -3, -1));
assert(printf("-->|%*.*%|<--\n", -3, 0) == ft_printf("-->|%*.*%|<--\n", -3, 0));
assert(printf("-->|%*.*%|<--\n", -3, 1) == ft_printf("-->|%*.*%|<--\n", -3, 1));
assert(printf("-->|%*.*%|<--\n", -3, 2) == ft_printf("-->|%*.*%|<--\n", -3, 2));
assert(printf("-->|%*.*%|<--\n", -3, 3) == ft_printf("-->|%*.*%|<--\n", -3, 3));
assert(printf("-->|%*.*%|<--\n", -3, 4) == ft_printf("-->|%*.*%|<--\n", -3, 4));
assert(printf("-->|%*.*%|<--\n", -2, -4) == ft_printf("-->|%*.*%|<--\n", -2, -4));
assert(printf("-->|%*.*%|<--\n", -2, -3) == ft_printf("-->|%*.*%|<--\n", -2, -3));
assert(printf("-->|%*.*%|<--\n", -2, -2) == ft_printf("-->|%*.*%|<--\n", -2, -2));
assert(printf("-->|%*.*%|<--\n", -2, -1) == ft_printf("-->|%*.*%|<--\n", -2, -1));
assert(printf("-->|%*.*%|<--\n", -2, 0) == ft_printf("-->|%*.*%|<--\n", -2, 0));
assert(printf("-->|%*.*%|<--\n", -2, 1) == ft_printf("-->|%*.*%|<--\n", -2, 1));
assert(printf("-->|%*.*%|<--\n", -2, 2) == ft_printf("-->|%*.*%|<--\n", -2, 2));
assert(printf("-->|%*.*%|<--\n", -2, 3) == ft_printf("-->|%*.*%|<--\n", -2, 3));
assert(printf("-->|%*.*%|<--\n", -2, 4) == ft_printf("-->|%*.*%|<--\n", -2, 4));
assert(printf("-->|%*.*%|<--\n", -1, -4) == ft_printf("-->|%*.*%|<--\n", -1, -4));
assert(printf("-->|%*.*%|<--\n", -1, -3) == ft_printf("-->|%*.*%|<--\n", -1, -3));
assert(printf("-->|%*.*%|<--\n", -1, -2) == ft_printf("-->|%*.*%|<--\n", -1, -2));
assert(printf("-->|%*.*%|<--\n", -1, -1) == ft_printf("-->|%*.*%|<--\n", -1, -1));
assert(printf("-->|%*.*%|<--\n", -1, 0) == ft_printf("-->|%*.*%|<--\n", -1, 0));
assert(printf("-->|%*.*%|<--\n", -1, 1) == ft_printf("-->|%*.*%|<--\n", -1, 1));
assert(printf("-->|%*.*%|<--\n", -1, 2) == ft_printf("-->|%*.*%|<--\n", -1, 2));
assert(printf("-->|%*.*%|<--\n", -1, 3) == ft_printf("-->|%*.*%|<--\n", -1, 3));
assert(printf("-->|%*.*%|<--\n", -1, 4) == ft_printf("-->|%*.*%|<--\n", -1, 4));
assert(printf("-->|%*.*%|<--\n", 0, -4) == ft_printf("-->|%*.*%|<--\n", 0, -4));
assert(printf("-->|%*.*%|<--\n", 0, -3) == ft_printf("-->|%*.*%|<--\n", 0, -3));
assert(printf("-->|%*.*%|<--\n", 0, -2) == ft_printf("-->|%*.*%|<--\n", 0, -2));
assert(printf("-->|%*.*%|<--\n", 0, -1) == ft_printf("-->|%*.*%|<--\n", 0, -1));
assert(printf("-->|%*.*%|<--\n", 0, 0) == ft_printf("-->|%*.*%|<--\n", 0, 0));
assert(printf("-->|%*.*%|<--\n", 0, 1) == ft_printf("-->|%*.*%|<--\n", 0, 1));
assert(printf("-->|%*.*%|<--\n", 0, 2) == ft_printf("-->|%*.*%|<--\n", 0, 2));
assert(printf("-->|%*.*%|<--\n", 0, 3) == ft_printf("-->|%*.*%|<--\n", 0, 3));
assert(printf("-->|%*.*%|<--\n", 0, 4) == ft_printf("-->|%*.*%|<--\n", 0, 4));
assert(printf("-->|%*.*%|<--\n", 1, -4) == ft_printf("-->|%*.*%|<--\n", 1, -4));
assert(printf("-->|%*.*%|<--\n", 1, -3) == ft_printf("-->|%*.*%|<--\n", 1, -3));
assert(printf("-->|%*.*%|<--\n", 1, -2) == ft_printf("-->|%*.*%|<--\n", 1, -2));
assert(printf("-->|%*.*%|<--\n", 1, -1) == ft_printf("-->|%*.*%|<--\n", 1, -1));
assert(printf("-->|%*.*%|<--\n", 1, 0) == ft_printf("-->|%*.*%|<--\n", 1, 0));
assert(printf("-->|%*.*%|<--\n", 1, 1) == ft_printf("-->|%*.*%|<--\n", 1, 1));
assert(printf("-->|%*.*%|<--\n", 1, 2) == ft_printf("-->|%*.*%|<--\n", 1, 2));
assert(printf("-->|%*.*%|<--\n", 1, 3) == ft_printf("-->|%*.*%|<--\n", 1, 3));
assert(printf("-->|%*.*%|<--\n", 1, 4) == ft_printf("-->|%*.*%|<--\n", 1, 4));
assert(printf("-->|%*.*%|<--\n", 2, -4) == ft_printf("-->|%*.*%|<--\n", 2, -4));
assert(printf("-->|%*.*%|<--\n", 2, -3) == ft_printf("-->|%*.*%|<--\n", 2, -3));
assert(printf("-->|%*.*%|<--\n", 2, -2) == ft_printf("-->|%*.*%|<--\n", 2, -2));
assert(printf("-->|%*.*%|<--\n", 2, -1) == ft_printf("-->|%*.*%|<--\n", 2, -1));
assert(printf("-->|%*.*%|<--\n", 2, 0) == ft_printf("-->|%*.*%|<--\n", 2, 0));
assert(printf("-->|%*.*%|<--\n", 2, 1) == ft_printf("-->|%*.*%|<--\n", 2, 1));
assert(printf("-->|%*.*%|<--\n", 2, 2) == ft_printf("-->|%*.*%|<--\n", 2, 2));
assert(printf("-->|%*.*%|<--\n", 2, 3) == ft_printf("-->|%*.*%|<--\n", 2, 3));
assert(printf("-->|%*.*%|<--\n", 2, 4) == ft_printf("-->|%*.*%|<--\n", 2, 4));
assert(printf("-->|%*.*%|<--\n", 3, -4) == ft_printf("-->|%*.*%|<--\n", 3, -4));
assert(printf("-->|%*.*%|<--\n", 3, -3) == ft_printf("-->|%*.*%|<--\n", 3, -3));
assert(printf("-->|%*.*%|<--\n", 3, -2) == ft_printf("-->|%*.*%|<--\n", 3, -2));
assert(printf("-->|%*.*%|<--\n", 3, -1) == ft_printf("-->|%*.*%|<--\n", 3, -1));
assert(printf("-->|%*.*%|<--\n", 3, 0) == ft_printf("-->|%*.*%|<--\n", 3, 0));
assert(printf("-->|%*.*%|<--\n", 3, 1) == ft_printf("-->|%*.*%|<--\n", 3, 1));
assert(printf("-->|%*.*%|<--\n", 3, 2) == ft_printf("-->|%*.*%|<--\n", 3, 2));
assert(printf("-->|%*.*%|<--\n", 3, 3) == ft_printf("-->|%*.*%|<--\n", 3, 3));
assert(printf("-->|%*.*%|<--\n", 3, 4) == ft_printf("-->|%*.*%|<--\n", 3, 4));
assert(printf("-->|%*.*%|<--\n", 4, -4) == ft_printf("-->|%*.*%|<--\n", 4, -4));
assert(printf("-->|%*.*%|<--\n", 4, -3) == ft_printf("-->|%*.*%|<--\n", 4, -3));
assert(printf("-->|%*.*%|<--\n", 4, -2) == ft_printf("-->|%*.*%|<--\n", 4, -2));
assert(printf("-->|%*.*%|<--\n", 4, -1) == ft_printf("-->|%*.*%|<--\n", 4, -1));
assert(printf("-->|%*.*%|<--\n", 4, 0) == ft_printf("-->|%*.*%|<--\n", 4, 0));
assert(printf("-->|%*.*%|<--\n", 4, 1) == ft_printf("-->|%*.*%|<--\n", 4, 1));
assert(printf("-->|%*.*%|<--\n", 4, 2) == ft_printf("-->|%*.*%|<--\n", 4, 2));
assert(printf("-->|%*.*%|<--\n", 4, 3) == ft_printf("-->|%*.*%|<--\n", 4, 3));
assert(printf("-->|%*.*%|<--\n", 4, 4) == ft_printf("-->|%*.*%|<--\n", 4, 4));
assert(printf("-->|%*.0%|<--\n", -4) == ft_printf("-->|%*.0%|<--\n", -4));
assert(printf("-->|%*.0%|<--\n", -3) == ft_printf("-->|%*.0%|<--\n", -3));
assert(printf("-->|%*.0%|<--\n", -2) == ft_printf("-->|%*.0%|<--\n", -2));
assert(printf("-->|%*.0%|<--\n", -1) == ft_printf("-->|%*.0%|<--\n", -1));
assert(printf("-->|%*.0%|<--\n", 0) == ft_printf("-->|%*.0%|<--\n", 0));
assert(printf("-->|%*.0%|<--\n", 1) == ft_printf("-->|%*.0%|<--\n", 1));
assert(printf("-->|%*.0%|<--\n", 2) == ft_printf("-->|%*.0%|<--\n", 2));
assert(printf("-->|%*.0%|<--\n", 3) == ft_printf("-->|%*.0%|<--\n", 3));
assert(printf("-->|%*.0%|<--\n", 4) == ft_printf("-->|%*.0%|<--\n", 4));
assert(printf("-->|%*.1%|<--\n", -4) == ft_printf("-->|%*.1%|<--\n", -4));
assert(printf("-->|%*.1%|<--\n", -3) == ft_printf("-->|%*.1%|<--\n", -3));
assert(printf("-->|%*.1%|<--\n", -2) == ft_printf("-->|%*.1%|<--\n", -2));
assert(printf("-->|%*.1%|<--\n", -1) == ft_printf("-->|%*.1%|<--\n", -1));
assert(printf("-->|%*.1%|<--\n", 0) == ft_printf("-->|%*.1%|<--\n", 0));
assert(printf("-->|%*.1%|<--\n", 1) == ft_printf("-->|%*.1%|<--\n", 1));
assert(printf("-->|%*.1%|<--\n", 2) == ft_printf("-->|%*.1%|<--\n", 2));
assert(printf("-->|%*.1%|<--\n", 3) == ft_printf("-->|%*.1%|<--\n", 3));
assert(printf("-->|%*.1%|<--\n", 4) == ft_printf("-->|%*.1%|<--\n", 4));
assert(printf("-->|%*.2%|<--\n", -4) == ft_printf("-->|%*.2%|<--\n", -4));
assert(printf("-->|%*.2%|<--\n", -3) == ft_printf("-->|%*.2%|<--\n", -3));
assert(printf("-->|%*.2%|<--\n", -2) == ft_printf("-->|%*.2%|<--\n", -2));
assert(printf("-->|%*.2%|<--\n", -1) == ft_printf("-->|%*.2%|<--\n", -1));
assert(printf("-->|%*.2%|<--\n", 0) == ft_printf("-->|%*.2%|<--\n", 0));
assert(printf("-->|%*.2%|<--\n", 1) == ft_printf("-->|%*.2%|<--\n", 1));
assert(printf("-->|%*.2%|<--\n", 2) == ft_printf("-->|%*.2%|<--\n", 2));
assert(printf("-->|%*.2%|<--\n", 3) == ft_printf("-->|%*.2%|<--\n", 3));
assert(printf("-->|%*.2%|<--\n", 4) == ft_printf("-->|%*.2%|<--\n", 4));
assert(printf("-->|%*.3%|<--\n", -4) == ft_printf("-->|%*.3%|<--\n", -4));
assert(printf("-->|%*.3%|<--\n", -3) == ft_printf("-->|%*.3%|<--\n", -3));
assert(printf("-->|%*.3%|<--\n", -2) == ft_printf("-->|%*.3%|<--\n", -2));
assert(printf("-->|%*.3%|<--\n", -1) == ft_printf("-->|%*.3%|<--\n", -1));
assert(printf("-->|%*.3%|<--\n", 0) == ft_printf("-->|%*.3%|<--\n", 0));
assert(printf("-->|%*.3%|<--\n", 1) == ft_printf("-->|%*.3%|<--\n", 1));
assert(printf("-->|%*.3%|<--\n", 2) == ft_printf("-->|%*.3%|<--\n", 2));
assert(printf("-->|%*.3%|<--\n", 3) == ft_printf("-->|%*.3%|<--\n", 3));
assert(printf("-->|%*.3%|<--\n", 4) == ft_printf("-->|%*.3%|<--\n", 4));
assert(printf("-->|%*.4%|<--\n", -4) == ft_printf("-->|%*.4%|<--\n", -4));
assert(printf("-->|%*.4%|<--\n", -3) == ft_printf("-->|%*.4%|<--\n", -3));
assert(printf("-->|%*.4%|<--\n", -2) == ft_printf("-->|%*.4%|<--\n", -2));
assert(printf("-->|%*.4%|<--\n", -1) == ft_printf("-->|%*.4%|<--\n", -1));
assert(printf("-->|%*.4%|<--\n", 0) == ft_printf("-->|%*.4%|<--\n", 0));
assert(printf("-->|%*.4%|<--\n", 1) == ft_printf("-->|%*.4%|<--\n", 1));
assert(printf("-->|%*.4%|<--\n", 2) == ft_printf("-->|%*.4%|<--\n", 2));
assert(printf("-->|%*.4%|<--\n", 3) == ft_printf("-->|%*.4%|<--\n", 3));
assert(printf("-->|%*.4%|<--\n", 4) == ft_printf("-->|%*.4%|<--\n", 4));
assert(printf("-->|%*%|<--\n", -4) == ft_printf("-->|%*%|<--\n", -4));
assert(printf("-->|%*%|<--\n", -3) == ft_printf("-->|%*%|<--\n", -3));
assert(printf("-->|%*%|<--\n", -2) == ft_printf("-->|%*%|<--\n", -2));
assert(printf("-->|%*%|<--\n", -1) == ft_printf("-->|%*%|<--\n", -1));
assert(printf("-->|%*%|<--\n", 0) == ft_printf("-->|%*%|<--\n", 0));
assert(printf("-->|%*%|<--\n", 1) == ft_printf("-->|%*%|<--\n", 1));
assert(printf("-->|%*%|<--\n", 2) == ft_printf("-->|%*%|<--\n", 2));
assert(printf("-->|%*%|<--\n", 3) == ft_printf("-->|%*%|<--\n", 3));
assert(printf("-->|%*%|<--\n", 4) == ft_printf("-->|%*%|<--\n", 4));
assert(printf("-->|%0.%|<--\n") == ft_printf("-->|%0.%|<--\n"));
assert(printf("-->|%0.*%|<--\n", -4) == ft_printf("-->|%0.*%|<--\n", -4));
assert(printf("-->|%0.*%|<--\n", -3) == ft_printf("-->|%0.*%|<--\n", -3));
assert(printf("-->|%0.*%|<--\n", -2) == ft_printf("-->|%0.*%|<--\n", -2));
assert(printf("-->|%0.*%|<--\n", -1) == ft_printf("-->|%0.*%|<--\n", -1));
assert(printf("-->|%0.*%|<--\n", 0) == ft_printf("-->|%0.*%|<--\n", 0));
assert(printf("-->|%0.*%|<--\n", 1) == ft_printf("-->|%0.*%|<--\n", 1));
assert(printf("-->|%0.*%|<--\n", 2) == ft_printf("-->|%0.*%|<--\n", 2));
assert(printf("-->|%0.*%|<--\n", 3) == ft_printf("-->|%0.*%|<--\n", 3));
assert(printf("-->|%0.*%|<--\n", 4) == ft_printf("-->|%0.*%|<--\n", 4));
assert(printf("-->|%0.0%|<--\n") == ft_printf("-->|%0.0%|<--\n"));
assert(printf("-->|%0.1%|<--\n") == ft_printf("-->|%0.1%|<--\n"));
assert(printf("-->|%0.2%|<--\n") == ft_printf("-->|%0.2%|<--\n"));
assert(printf("-->|%0.3%|<--\n") == ft_printf("-->|%0.3%|<--\n"));
assert(printf("-->|%0.4%|<--\n") == ft_printf("-->|%0.4%|<--\n"));
assert(printf("-->|%0%|<--\n") == ft_printf("-->|%0%|<--\n"));
assert(printf("-->|%1.%|<--\n") == ft_printf("-->|%1.%|<--\n"));
assert(printf("-->|%1.*%|<--\n", -4) == ft_printf("-->|%1.*%|<--\n", -4));
assert(printf("-->|%1.*%|<--\n", -3) == ft_printf("-->|%1.*%|<--\n", -3));
assert(printf("-->|%1.*%|<--\n", -2) == ft_printf("-->|%1.*%|<--\n", -2));
assert(printf("-->|%1.*%|<--\n", -1) == ft_printf("-->|%1.*%|<--\n", -1));
assert(printf("-->|%1.*%|<--\n", 0) == ft_printf("-->|%1.*%|<--\n", 0));
assert(printf("-->|%1.*%|<--\n", 1) == ft_printf("-->|%1.*%|<--\n", 1));
assert(printf("-->|%1.*%|<--\n", 2) == ft_printf("-->|%1.*%|<--\n", 2));
assert(printf("-->|%1.*%|<--\n", 3) == ft_printf("-->|%1.*%|<--\n", 3));
assert(printf("-->|%1.*%|<--\n", 4) == ft_printf("-->|%1.*%|<--\n", 4));
assert(printf("-->|%1.0%|<--\n") == ft_printf("-->|%1.0%|<--\n"));
assert(printf("-->|%1.1%|<--\n") == ft_printf("-->|%1.1%|<--\n"));
assert(printf("-->|%1.2%|<--\n") == ft_printf("-->|%1.2%|<--\n"));
assert(printf("-->|%1.3%|<--\n") == ft_printf("-->|%1.3%|<--\n"));
assert(printf("-->|%1.4%|<--\n") == ft_printf("-->|%1.4%|<--\n"));
assert(printf("-->|%1%|<--\n") == ft_printf("-->|%1%|<--\n"));
assert(printf("-->|%2.%|<--\n") == ft_printf("-->|%2.%|<--\n"));
assert(printf("-->|%2.*%|<--\n", -4) == ft_printf("-->|%2.*%|<--\n", -4));
assert(printf("-->|%2.*%|<--\n", -3) == ft_printf("-->|%2.*%|<--\n", -3));
assert(printf("-->|%2.*%|<--\n", -2) == ft_printf("-->|%2.*%|<--\n", -2));
assert(printf("-->|%2.*%|<--\n", -1) == ft_printf("-->|%2.*%|<--\n", -1));
assert(printf("-->|%2.*%|<--\n", 0) == ft_printf("-->|%2.*%|<--\n", 0));
assert(printf("-->|%2.*%|<--\n", 1) == ft_printf("-->|%2.*%|<--\n", 1));
assert(printf("-->|%2.*%|<--\n", 2) == ft_printf("-->|%2.*%|<--\n", 2));
assert(printf("-->|%2.*%|<--\n", 3) == ft_printf("-->|%2.*%|<--\n", 3));
assert(printf("-->|%2.*%|<--\n", 4) == ft_printf("-->|%2.*%|<--\n", 4));
assert(printf("-->|%2.0%|<--\n") == ft_printf("-->|%2.0%|<--\n"));
assert(printf("-->|%2.1%|<--\n") == ft_printf("-->|%2.1%|<--\n"));
assert(printf("-->|%2.2%|<--\n") == ft_printf("-->|%2.2%|<--\n"));
assert(printf("-->|%2.3%|<--\n") == ft_printf("-->|%2.3%|<--\n"));
assert(printf("-->|%2.4%|<--\n") == ft_printf("-->|%2.4%|<--\n"));
assert(printf("-->|%2%|<--\n") == ft_printf("-->|%2%|<--\n"));
assert(printf("-->|%3.%|<--\n") == ft_printf("-->|%3.%|<--\n"));
assert(printf("-->|%3.*%|<--\n", -4) == ft_printf("-->|%3.*%|<--\n", -4));
assert(printf("-->|%3.*%|<--\n", -3) == ft_printf("-->|%3.*%|<--\n", -3));
assert(printf("-->|%3.*%|<--\n", -2) == ft_printf("-->|%3.*%|<--\n", -2));
assert(printf("-->|%3.*%|<--\n", -1) == ft_printf("-->|%3.*%|<--\n", -1));
assert(printf("-->|%3.*%|<--\n", 0) == ft_printf("-->|%3.*%|<--\n", 0));
assert(printf("-->|%3.*%|<--\n", 1) == ft_printf("-->|%3.*%|<--\n", 1));
assert(printf("-->|%3.*%|<--\n", 2) == ft_printf("-->|%3.*%|<--\n", 2));
assert(printf("-->|%3.*%|<--\n", 3) == ft_printf("-->|%3.*%|<--\n", 3));
assert(printf("-->|%3.*%|<--\n", 4) == ft_printf("-->|%3.*%|<--\n", 4));
assert(printf("-->|%3.0%|<--\n") == ft_printf("-->|%3.0%|<--\n"));
assert(printf("-->|%3.1%|<--\n") == ft_printf("-->|%3.1%|<--\n"));
assert(printf("-->|%3.2%|<--\n") == ft_printf("-->|%3.2%|<--\n"));
assert(printf("-->|%3.3%|<--\n") == ft_printf("-->|%3.3%|<--\n"));
assert(printf("-->|%3.4%|<--\n") == ft_printf("-->|%3.4%|<--\n"));
assert(printf("-->|%3%|<--\n") == ft_printf("-->|%3%|<--\n"));
assert(printf("-->|%4.%|<--\n") == ft_printf("-->|%4.%|<--\n"));
assert(printf("-->|%4.*%|<--\n", -4) == ft_printf("-->|%4.*%|<--\n", -4));
assert(printf("-->|%4.*%|<--\n", -3) == ft_printf("-->|%4.*%|<--\n", -3));
assert(printf("-->|%4.*%|<--\n", -2) == ft_printf("-->|%4.*%|<--\n", -2));
assert(printf("-->|%4.*%|<--\n", -1) == ft_printf("-->|%4.*%|<--\n", -1));
assert(printf("-->|%4.*%|<--\n", 0) == ft_printf("-->|%4.*%|<--\n", 0));
assert(printf("-->|%4.*%|<--\n", 1) == ft_printf("-->|%4.*%|<--\n", 1));
assert(printf("-->|%4.*%|<--\n", 2) == ft_printf("-->|%4.*%|<--\n", 2));
assert(printf("-->|%4.*%|<--\n", 3) == ft_printf("-->|%4.*%|<--\n", 3));
assert(printf("-->|%4.*%|<--\n", 4) == ft_printf("-->|%4.*%|<--\n", 4));
assert(printf("-->|%4.0%|<--\n") == ft_printf("-->|%4.0%|<--\n"));
assert(printf("-->|%4.1%|<--\n") == ft_printf("-->|%4.1%|<--\n"));
assert(printf("-->|%4.2%|<--\n") == ft_printf("-->|%4.2%|<--\n"));
assert(printf("-->|%4.3%|<--\n") == ft_printf("-->|%4.3%|<--\n"));
assert(printf("-->|%4.4%|<--\n") == ft_printf("-->|%4.4%|<--\n"));
assert(printf("-->|%4%|<--\n") == ft_printf("-->|%4%|<--\n"));
assert(printf("-->|%0.%|<--\n") == ft_printf("-->|%0.%|<--\n"));
assert(printf("-->|%0.*%|<--\n", -4) == ft_printf("-->|%0.*%|<--\n", -4));
assert(printf("-->|%0.*%|<--\n", -3) == ft_printf("-->|%0.*%|<--\n", -3));
assert(printf("-->|%0.*%|<--\n", -2) == ft_printf("-->|%0.*%|<--\n", -2));
assert(printf("-->|%0.*%|<--\n", -1) == ft_printf("-->|%0.*%|<--\n", -1));
assert(printf("-->|%0.*%|<--\n", 0) == ft_printf("-->|%0.*%|<--\n", 0));
assert(printf("-->|%0.*%|<--\n", 1) == ft_printf("-->|%0.*%|<--\n", 1));
assert(printf("-->|%0.*%|<--\n", 2) == ft_printf("-->|%0.*%|<--\n", 2));
assert(printf("-->|%0.*%|<--\n", 3) == ft_printf("-->|%0.*%|<--\n", 3));
assert(printf("-->|%0.*%|<--\n", 4) == ft_printf("-->|%0.*%|<--\n", 4));
assert(printf("-->|%0.0%|<--\n") == ft_printf("-->|%0.0%|<--\n"));
assert(printf("-->|%0.1%|<--\n") == ft_printf("-->|%0.1%|<--\n"));
assert(printf("-->|%0.2%|<--\n") == ft_printf("-->|%0.2%|<--\n"));
assert(printf("-->|%0.3%|<--\n") == ft_printf("-->|%0.3%|<--\n"));
assert(printf("-->|%0.4%|<--\n") == ft_printf("-->|%0.4%|<--\n"));
assert(printf("-->|%0%|<--\n") == ft_printf("-->|%0%|<--\n"));
assert(printf("-->|%0*.%|<--\n", -4) == ft_printf("-->|%0*.%|<--\n", -4));
assert(printf("-->|%0*.%|<--\n", -3) == ft_printf("-->|%0*.%|<--\n", -3));
assert(printf("-->|%0*.%|<--\n", -2) == ft_printf("-->|%0*.%|<--\n", -2));
assert(printf("-->|%0*.%|<--\n", -1) == ft_printf("-->|%0*.%|<--\n", -1));
assert(printf("-->|%0*.%|<--\n", 0) == ft_printf("-->|%0*.%|<--\n", 0));
assert(printf("-->|%0*.%|<--\n", 1) == ft_printf("-->|%0*.%|<--\n", 1));
assert(printf("-->|%0*.%|<--\n", 2) == ft_printf("-->|%0*.%|<--\n", 2));
assert(printf("-->|%0*.%|<--\n", 3) == ft_printf("-->|%0*.%|<--\n", 3));
assert(printf("-->|%0*.%|<--\n", 4) == ft_printf("-->|%0*.%|<--\n", 4));
assert(printf("-->|%0*.*%|<--\n", -4, -4) == ft_printf("-->|%0*.*%|<--\n", -4, -4));
assert(printf("-->|%0*.*%|<--\n", -4, -3) == ft_printf("-->|%0*.*%|<--\n", -4, -3));
assert(printf("-->|%0*.*%|<--\n", -4, -2) == ft_printf("-->|%0*.*%|<--\n", -4, -2));
assert(printf("-->|%0*.*%|<--\n", -4, -1) == ft_printf("-->|%0*.*%|<--\n", -4, -1));
assert(printf("-->|%0*.*%|<--\n", -4, 0) == ft_printf("-->|%0*.*%|<--\n", -4, 0));
assert(printf("-->|%0*.*%|<--\n", -4, 1) == ft_printf("-->|%0*.*%|<--\n", -4, 1));
assert(printf("-->|%0*.*%|<--\n", -4, 2) == ft_printf("-->|%0*.*%|<--\n", -4, 2));
assert(printf("-->|%0*.*%|<--\n", -4, 3) == ft_printf("-->|%0*.*%|<--\n", -4, 3));
assert(printf("-->|%0*.*%|<--\n", -4, 4) == ft_printf("-->|%0*.*%|<--\n", -4, 4));
assert(printf("-->|%0*.*%|<--\n", -3, -4) == ft_printf("-->|%0*.*%|<--\n", -3, -4));
assert(printf("-->|%0*.*%|<--\n", -3, -3) == ft_printf("-->|%0*.*%|<--\n", -3, -3));
assert(printf("-->|%0*.*%|<--\n", -3, -2) == ft_printf("-->|%0*.*%|<--\n", -3, -2));
assert(printf("-->|%0*.*%|<--\n", -3, -1) == ft_printf("-->|%0*.*%|<--\n", -3, -1));
assert(printf("-->|%0*.*%|<--\n", -3, 0) == ft_printf("-->|%0*.*%|<--\n", -3, 0));
assert(printf("-->|%0*.*%|<--\n", -3, 1) == ft_printf("-->|%0*.*%|<--\n", -3, 1));
assert(printf("-->|%0*.*%|<--\n", -3, 2) == ft_printf("-->|%0*.*%|<--\n", -3, 2));
assert(printf("-->|%0*.*%|<--\n", -3, 3) == ft_printf("-->|%0*.*%|<--\n", -3, 3));
assert(printf("-->|%0*.*%|<--\n", -3, 4) == ft_printf("-->|%0*.*%|<--\n", -3, 4));
assert(printf("-->|%0*.*%|<--\n", -2, -4) == ft_printf("-->|%0*.*%|<--\n", -2, -4));
assert(printf("-->|%0*.*%|<--\n", -2, -3) == ft_printf("-->|%0*.*%|<--\n", -2, -3));
assert(printf("-->|%0*.*%|<--\n", -2, -2) == ft_printf("-->|%0*.*%|<--\n", -2, -2));
assert(printf("-->|%0*.*%|<--\n", -2, -1) == ft_printf("-->|%0*.*%|<--\n", -2, -1));
assert(printf("-->|%0*.*%|<--\n", -2, 0) == ft_printf("-->|%0*.*%|<--\n", -2, 0));
assert(printf("-->|%0*.*%|<--\n", -2, 1) == ft_printf("-->|%0*.*%|<--\n", -2, 1));
assert(printf("-->|%0*.*%|<--\n", -2, 2) == ft_printf("-->|%0*.*%|<--\n", -2, 2));
assert(printf("-->|%0*.*%|<--\n", -2, 3) == ft_printf("-->|%0*.*%|<--\n", -2, 3));
assert(printf("-->|%0*.*%|<--\n", -2, 4) == ft_printf("-->|%0*.*%|<--\n", -2, 4));
assert(printf("-->|%0*.*%|<--\n", -1, -4) == ft_printf("-->|%0*.*%|<--\n", -1, -4));
assert(printf("-->|%0*.*%|<--\n", -1, -3) == ft_printf("-->|%0*.*%|<--\n", -1, -3));
assert(printf("-->|%0*.*%|<--\n", -1, -2) == ft_printf("-->|%0*.*%|<--\n", -1, -2));
assert(printf("-->|%0*.*%|<--\n", -1, -1) == ft_printf("-->|%0*.*%|<--\n", -1, -1));
assert(printf("-->|%0*.*%|<--\n", -1, 0) == ft_printf("-->|%0*.*%|<--\n", -1, 0));
assert(printf("-->|%0*.*%|<--\n", -1, 1) == ft_printf("-->|%0*.*%|<--\n", -1, 1));
assert(printf("-->|%0*.*%|<--\n", -1, 2) == ft_printf("-->|%0*.*%|<--\n", -1, 2));
assert(printf("-->|%0*.*%|<--\n", -1, 3) == ft_printf("-->|%0*.*%|<--\n", -1, 3));
assert(printf("-->|%0*.*%|<--\n", -1, 4) == ft_printf("-->|%0*.*%|<--\n", -1, 4));
assert(printf("-->|%0*.*%|<--\n", 0, -4) == ft_printf("-->|%0*.*%|<--\n", 0, -4));
assert(printf("-->|%0*.*%|<--\n", 0, -3) == ft_printf("-->|%0*.*%|<--\n", 0, -3));
assert(printf("-->|%0*.*%|<--\n", 0, -2) == ft_printf("-->|%0*.*%|<--\n", 0, -2));
assert(printf("-->|%0*.*%|<--\n", 0, -1) == ft_printf("-->|%0*.*%|<--\n", 0, -1));
assert(printf("-->|%0*.*%|<--\n", 0, 0) == ft_printf("-->|%0*.*%|<--\n", 0, 0));
assert(printf("-->|%0*.*%|<--\n", 0, 1) == ft_printf("-->|%0*.*%|<--\n", 0, 1));
assert(printf("-->|%0*.*%|<--\n", 0, 2) == ft_printf("-->|%0*.*%|<--\n", 0, 2));
assert(printf("-->|%0*.*%|<--\n", 0, 3) == ft_printf("-->|%0*.*%|<--\n", 0, 3));
assert(printf("-->|%0*.*%|<--\n", 0, 4) == ft_printf("-->|%0*.*%|<--\n", 0, 4));
assert(printf("-->|%0*.*%|<--\n", 1, -4) == ft_printf("-->|%0*.*%|<--\n", 1, -4));
assert(printf("-->|%0*.*%|<--\n", 1, -3) == ft_printf("-->|%0*.*%|<--\n", 1, -3));
assert(printf("-->|%0*.*%|<--\n", 1, -2) == ft_printf("-->|%0*.*%|<--\n", 1, -2));
assert(printf("-->|%0*.*%|<--\n", 1, -1) == ft_printf("-->|%0*.*%|<--\n", 1, -1));
assert(printf("-->|%0*.*%|<--\n", 1, 0) == ft_printf("-->|%0*.*%|<--\n", 1, 0));
assert(printf("-->|%0*.*%|<--\n", 1, 1) == ft_printf("-->|%0*.*%|<--\n", 1, 1));
assert(printf("-->|%0*.*%|<--\n", 1, 2) == ft_printf("-->|%0*.*%|<--\n", 1, 2));
assert(printf("-->|%0*.*%|<--\n", 1, 3) == ft_printf("-->|%0*.*%|<--\n", 1, 3));
assert(printf("-->|%0*.*%|<--\n", 1, 4) == ft_printf("-->|%0*.*%|<--\n", 1, 4));
assert(printf("-->|%0*.*%|<--\n", 2, -4) == ft_printf("-->|%0*.*%|<--\n", 2, -4));
assert(printf("-->|%0*.*%|<--\n", 2, -3) == ft_printf("-->|%0*.*%|<--\n", 2, -3));
assert(printf("-->|%0*.*%|<--\n", 2, -2) == ft_printf("-->|%0*.*%|<--\n", 2, -2));
assert(printf("-->|%0*.*%|<--\n", 2, -1) == ft_printf("-->|%0*.*%|<--\n", 2, -1));
assert(printf("-->|%0*.*%|<--\n", 2, 0) == ft_printf("-->|%0*.*%|<--\n", 2, 0));
assert(printf("-->|%0*.*%|<--\n", 2, 1) == ft_printf("-->|%0*.*%|<--\n", 2, 1));
assert(printf("-->|%0*.*%|<--\n", 2, 2) == ft_printf("-->|%0*.*%|<--\n", 2, 2));
assert(printf("-->|%0*.*%|<--\n", 2, 3) == ft_printf("-->|%0*.*%|<--\n", 2, 3));
assert(printf("-->|%0*.*%|<--\n", 2, 4) == ft_printf("-->|%0*.*%|<--\n", 2, 4));
assert(printf("-->|%0*.*%|<--\n", 3, -4) == ft_printf("-->|%0*.*%|<--\n", 3, -4));
assert(printf("-->|%0*.*%|<--\n", 3, -3) == ft_printf("-->|%0*.*%|<--\n", 3, -3));
assert(printf("-->|%0*.*%|<--\n", 3, -2) == ft_printf("-->|%0*.*%|<--\n", 3, -2));
assert(printf("-->|%0*.*%|<--\n", 3, -1) == ft_printf("-->|%0*.*%|<--\n", 3, -1));
assert(printf("-->|%0*.*%|<--\n", 3, 0) == ft_printf("-->|%0*.*%|<--\n", 3, 0));
assert(printf("-->|%0*.*%|<--\n", 3, 1) == ft_printf("-->|%0*.*%|<--\n", 3, 1));
assert(printf("-->|%0*.*%|<--\n", 3, 2) == ft_printf("-->|%0*.*%|<--\n", 3, 2));
assert(printf("-->|%0*.*%|<--\n", 3, 3) == ft_printf("-->|%0*.*%|<--\n", 3, 3));
assert(printf("-->|%0*.*%|<--\n", 3, 4) == ft_printf("-->|%0*.*%|<--\n", 3, 4));
assert(printf("-->|%0*.*%|<--\n", 4, -4) == ft_printf("-->|%0*.*%|<--\n", 4, -4));
assert(printf("-->|%0*.*%|<--\n", 4, -3) == ft_printf("-->|%0*.*%|<--\n", 4, -3));
assert(printf("-->|%0*.*%|<--\n", 4, -2) == ft_printf("-->|%0*.*%|<--\n", 4, -2));
assert(printf("-->|%0*.*%|<--\n", 4, -1) == ft_printf("-->|%0*.*%|<--\n", 4, -1));
assert(printf("-->|%0*.*%|<--\n", 4, 0) == ft_printf("-->|%0*.*%|<--\n", 4, 0));
assert(printf("-->|%0*.*%|<--\n", 4, 1) == ft_printf("-->|%0*.*%|<--\n", 4, 1));
assert(printf("-->|%0*.*%|<--\n", 4, 2) == ft_printf("-->|%0*.*%|<--\n", 4, 2));
assert(printf("-->|%0*.*%|<--\n", 4, 3) == ft_printf("-->|%0*.*%|<--\n", 4, 3));
assert(printf("-->|%0*.*%|<--\n", 4, 4) == ft_printf("-->|%0*.*%|<--\n", 4, 4));
assert(printf("-->|%0*.0%|<--\n", -4) == ft_printf("-->|%0*.0%|<--\n", -4));
assert(printf("-->|%0*.0%|<--\n", -3) == ft_printf("-->|%0*.0%|<--\n", -3));
assert(printf("-->|%0*.0%|<--\n", -2) == ft_printf("-->|%0*.0%|<--\n", -2));
assert(printf("-->|%0*.0%|<--\n", -1) == ft_printf("-->|%0*.0%|<--\n", -1));
assert(printf("-->|%0*.0%|<--\n", 0) == ft_printf("-->|%0*.0%|<--\n", 0));
assert(printf("-->|%0*.0%|<--\n", 1) == ft_printf("-->|%0*.0%|<--\n", 1));
assert(printf("-->|%0*.0%|<--\n", 2) == ft_printf("-->|%0*.0%|<--\n", 2));
assert(printf("-->|%0*.0%|<--\n", 3) == ft_printf("-->|%0*.0%|<--\n", 3));
assert(printf("-->|%0*.0%|<--\n", 4) == ft_printf("-->|%0*.0%|<--\n", 4));
assert(printf("-->|%0*.1%|<--\n", -4) == ft_printf("-->|%0*.1%|<--\n", -4));
assert(printf("-->|%0*.1%|<--\n", -3) == ft_printf("-->|%0*.1%|<--\n", -3));
assert(printf("-->|%0*.1%|<--\n", -2) == ft_printf("-->|%0*.1%|<--\n", -2));
assert(printf("-->|%0*.1%|<--\n", -1) == ft_printf("-->|%0*.1%|<--\n", -1));
assert(printf("-->|%0*.1%|<--\n", 0) == ft_printf("-->|%0*.1%|<--\n", 0));
assert(printf("-->|%0*.1%|<--\n", 1) == ft_printf("-->|%0*.1%|<--\n", 1));
assert(printf("-->|%0*.1%|<--\n", 2) == ft_printf("-->|%0*.1%|<--\n", 2));
assert(printf("-->|%0*.1%|<--\n", 3) == ft_printf("-->|%0*.1%|<--\n", 3));
assert(printf("-->|%0*.1%|<--\n", 4) == ft_printf("-->|%0*.1%|<--\n", 4));
assert(printf("-->|%0*.2%|<--\n", -4) == ft_printf("-->|%0*.2%|<--\n", -4));
assert(printf("-->|%0*.2%|<--\n", -3) == ft_printf("-->|%0*.2%|<--\n", -3));
assert(printf("-->|%0*.2%|<--\n", -2) == ft_printf("-->|%0*.2%|<--\n", -2));
assert(printf("-->|%0*.2%|<--\n", -1) == ft_printf("-->|%0*.2%|<--\n", -1));
assert(printf("-->|%0*.2%|<--\n", 0) == ft_printf("-->|%0*.2%|<--\n", 0));
assert(printf("-->|%0*.2%|<--\n", 1) == ft_printf("-->|%0*.2%|<--\n", 1));
assert(printf("-->|%0*.2%|<--\n", 2) == ft_printf("-->|%0*.2%|<--\n", 2));
assert(printf("-->|%0*.2%|<--\n", 3) == ft_printf("-->|%0*.2%|<--\n", 3));
assert(printf("-->|%0*.2%|<--\n", 4) == ft_printf("-->|%0*.2%|<--\n", 4));
assert(printf("-->|%0*.3%|<--\n", -4) == ft_printf("-->|%0*.3%|<--\n", -4));
assert(printf("-->|%0*.3%|<--\n", -3) == ft_printf("-->|%0*.3%|<--\n", -3));
assert(printf("-->|%0*.3%|<--\n", -2) == ft_printf("-->|%0*.3%|<--\n", -2));
assert(printf("-->|%0*.3%|<--\n", -1) == ft_printf("-->|%0*.3%|<--\n", -1));
assert(printf("-->|%0*.3%|<--\n", 0) == ft_printf("-->|%0*.3%|<--\n", 0));
assert(printf("-->|%0*.3%|<--\n", 1) == ft_printf("-->|%0*.3%|<--\n", 1));
assert(printf("-->|%0*.3%|<--\n", 2) == ft_printf("-->|%0*.3%|<--\n", 2));
assert(printf("-->|%0*.3%|<--\n", 3) == ft_printf("-->|%0*.3%|<--\n", 3));
assert(printf("-->|%0*.3%|<--\n", 4) == ft_printf("-->|%0*.3%|<--\n", 4));
assert(printf("-->|%0*.4%|<--\n", -4) == ft_printf("-->|%0*.4%|<--\n", -4));
assert(printf("-->|%0*.4%|<--\n", -3) == ft_printf("-->|%0*.4%|<--\n", -3));
assert(printf("-->|%0*.4%|<--\n", -2) == ft_printf("-->|%0*.4%|<--\n", -2));
assert(printf("-->|%0*.4%|<--\n", -1) == ft_printf("-->|%0*.4%|<--\n", -1));
assert(printf("-->|%0*.4%|<--\n", 0) == ft_printf("-->|%0*.4%|<--\n", 0));
assert(printf("-->|%0*.4%|<--\n", 1) == ft_printf("-->|%0*.4%|<--\n", 1));
assert(printf("-->|%0*.4%|<--\n", 2) == ft_printf("-->|%0*.4%|<--\n", 2));
assert(printf("-->|%0*.4%|<--\n", 3) == ft_printf("-->|%0*.4%|<--\n", 3));
assert(printf("-->|%0*.4%|<--\n", 4) == ft_printf("-->|%0*.4%|<--\n", 4));
assert(printf("-->|%0*%|<--\n", -4) == ft_printf("-->|%0*%|<--\n", -4));
assert(printf("-->|%0*%|<--\n", -3) == ft_printf("-->|%0*%|<--\n", -3));
assert(printf("-->|%0*%|<--\n", -2) == ft_printf("-->|%0*%|<--\n", -2));
assert(printf("-->|%0*%|<--\n", -1) == ft_printf("-->|%0*%|<--\n", -1));
assert(printf("-->|%0*%|<--\n", 0) == ft_printf("-->|%0*%|<--\n", 0));
assert(printf("-->|%0*%|<--\n", 1) == ft_printf("-->|%0*%|<--\n", 1));
assert(printf("-->|%0*%|<--\n", 2) == ft_printf("-->|%0*%|<--\n", 2));
assert(printf("-->|%0*%|<--\n", 3) == ft_printf("-->|%0*%|<--\n", 3));
assert(printf("-->|%0*%|<--\n", 4) == ft_printf("-->|%0*%|<--\n", 4));
assert(printf("-->|%00.%|<--\n") == ft_printf("-->|%00.%|<--\n"));
assert(printf("-->|%00.*%|<--\n", -4) == ft_printf("-->|%00.*%|<--\n", -4));
assert(printf("-->|%00.*%|<--\n", -3) == ft_printf("-->|%00.*%|<--\n", -3));
assert(printf("-->|%00.*%|<--\n", -2) == ft_printf("-->|%00.*%|<--\n", -2));
assert(printf("-->|%00.*%|<--\n", -1) == ft_printf("-->|%00.*%|<--\n", -1));
assert(printf("-->|%00.*%|<--\n", 0) == ft_printf("-->|%00.*%|<--\n", 0));
assert(printf("-->|%00.*%|<--\n", 1) == ft_printf("-->|%00.*%|<--\n", 1));
assert(printf("-->|%00.*%|<--\n", 2) == ft_printf("-->|%00.*%|<--\n", 2));
assert(printf("-->|%00.*%|<--\n", 3) == ft_printf("-->|%00.*%|<--\n", 3));
assert(printf("-->|%00.*%|<--\n", 4) == ft_printf("-->|%00.*%|<--\n", 4));
assert(printf("-->|%00.0%|<--\n") == ft_printf("-->|%00.0%|<--\n"));
assert(printf("-->|%00.1%|<--\n") == ft_printf("-->|%00.1%|<--\n"));
assert(printf("-->|%00.2%|<--\n") == ft_printf("-->|%00.2%|<--\n"));
assert(printf("-->|%00.3%|<--\n") == ft_printf("-->|%00.3%|<--\n"));
assert(printf("-->|%00.4%|<--\n") == ft_printf("-->|%00.4%|<--\n"));
assert(printf("-->|%00%|<--\n") == ft_printf("-->|%00%|<--\n"));
assert(printf("-->|%01.%|<--\n") == ft_printf("-->|%01.%|<--\n"));
assert(printf("-->|%01.*%|<--\n", -4) == ft_printf("-->|%01.*%|<--\n", -4));
assert(printf("-->|%01.*%|<--\n", -3) == ft_printf("-->|%01.*%|<--\n", -3));
assert(printf("-->|%01.*%|<--\n", -2) == ft_printf("-->|%01.*%|<--\n", -2));
assert(printf("-->|%01.*%|<--\n", -1) == ft_printf("-->|%01.*%|<--\n", -1));
assert(printf("-->|%01.*%|<--\n", 0) == ft_printf("-->|%01.*%|<--\n", 0));
assert(printf("-->|%01.*%|<--\n", 1) == ft_printf("-->|%01.*%|<--\n", 1));
assert(printf("-->|%01.*%|<--\n", 2) == ft_printf("-->|%01.*%|<--\n", 2));
assert(printf("-->|%01.*%|<--\n", 3) == ft_printf("-->|%01.*%|<--\n", 3));
assert(printf("-->|%01.*%|<--\n", 4) == ft_printf("-->|%01.*%|<--\n", 4));
assert(printf("-->|%01.0%|<--\n") == ft_printf("-->|%01.0%|<--\n"));
assert(printf("-->|%01.1%|<--\n") == ft_printf("-->|%01.1%|<--\n"));
assert(printf("-->|%01.2%|<--\n") == ft_printf("-->|%01.2%|<--\n"));
assert(printf("-->|%01.3%|<--\n") == ft_printf("-->|%01.3%|<--\n"));
assert(printf("-->|%01.4%|<--\n") == ft_printf("-->|%01.4%|<--\n"));
assert(printf("-->|%01%|<--\n") == ft_printf("-->|%01%|<--\n"));
assert(printf("-->|%02.%|<--\n") == ft_printf("-->|%02.%|<--\n"));
assert(printf("-->|%02.*%|<--\n", -4) == ft_printf("-->|%02.*%|<--\n", -4));
assert(printf("-->|%02.*%|<--\n", -3) == ft_printf("-->|%02.*%|<--\n", -3));
assert(printf("-->|%02.*%|<--\n", -2) == ft_printf("-->|%02.*%|<--\n", -2));
assert(printf("-->|%02.*%|<--\n", -1) == ft_printf("-->|%02.*%|<--\n", -1));
assert(printf("-->|%02.*%|<--\n", 0) == ft_printf("-->|%02.*%|<--\n", 0));
assert(printf("-->|%02.*%|<--\n", 1) == ft_printf("-->|%02.*%|<--\n", 1));
assert(printf("-->|%02.*%|<--\n", 2) == ft_printf("-->|%02.*%|<--\n", 2));
assert(printf("-->|%02.*%|<--\n", 3) == ft_printf("-->|%02.*%|<--\n", 3));
assert(printf("-->|%02.*%|<--\n", 4) == ft_printf("-->|%02.*%|<--\n", 4));
assert(printf("-->|%02.0%|<--\n") == ft_printf("-->|%02.0%|<--\n"));
assert(printf("-->|%02.1%|<--\n") == ft_printf("-->|%02.1%|<--\n"));
assert(printf("-->|%02.2%|<--\n") == ft_printf("-->|%02.2%|<--\n"));
assert(printf("-->|%02.3%|<--\n") == ft_printf("-->|%02.3%|<--\n"));
assert(printf("-->|%02.4%|<--\n") == ft_printf("-->|%02.4%|<--\n"));
assert(printf("-->|%02%|<--\n") == ft_printf("-->|%02%|<--\n"));
assert(printf("-->|%03.%|<--\n") == ft_printf("-->|%03.%|<--\n"));
assert(printf("-->|%03.*%|<--\n", -4) == ft_printf("-->|%03.*%|<--\n", -4));
assert(printf("-->|%03.*%|<--\n", -3) == ft_printf("-->|%03.*%|<--\n", -3));
assert(printf("-->|%03.*%|<--\n", -2) == ft_printf("-->|%03.*%|<--\n", -2));
assert(printf("-->|%03.*%|<--\n", -1) == ft_printf("-->|%03.*%|<--\n", -1));
assert(printf("-->|%03.*%|<--\n", 0) == ft_printf("-->|%03.*%|<--\n", 0));
assert(printf("-->|%03.*%|<--\n", 1) == ft_printf("-->|%03.*%|<--\n", 1));
assert(printf("-->|%03.*%|<--\n", 2) == ft_printf("-->|%03.*%|<--\n", 2));
assert(printf("-->|%03.*%|<--\n", 3) == ft_printf("-->|%03.*%|<--\n", 3));
assert(printf("-->|%03.*%|<--\n", 4) == ft_printf("-->|%03.*%|<--\n", 4));
assert(printf("-->|%03.0%|<--\n") == ft_printf("-->|%03.0%|<--\n"));
assert(printf("-->|%03.1%|<--\n") == ft_printf("-->|%03.1%|<--\n"));
assert(printf("-->|%03.2%|<--\n") == ft_printf("-->|%03.2%|<--\n"));
assert(printf("-->|%03.3%|<--\n") == ft_printf("-->|%03.3%|<--\n"));
assert(printf("-->|%03.4%|<--\n") == ft_printf("-->|%03.4%|<--\n"));
assert(printf("-->|%03%|<--\n") == ft_printf("-->|%03%|<--\n"));
assert(printf("-->|%04.%|<--\n") == ft_printf("-->|%04.%|<--\n"));
assert(printf("-->|%04.*%|<--\n", -4) == ft_printf("-->|%04.*%|<--\n", -4));
assert(printf("-->|%04.*%|<--\n", -3) == ft_printf("-->|%04.*%|<--\n", -3));
assert(printf("-->|%04.*%|<--\n", -2) == ft_printf("-->|%04.*%|<--\n", -2));
assert(printf("-->|%04.*%|<--\n", -1) == ft_printf("-->|%04.*%|<--\n", -1));
assert(printf("-->|%04.*%|<--\n", 0) == ft_printf("-->|%04.*%|<--\n", 0));
assert(printf("-->|%04.*%|<--\n", 1) == ft_printf("-->|%04.*%|<--\n", 1));
assert(printf("-->|%04.*%|<--\n", 2) == ft_printf("-->|%04.*%|<--\n", 2));
assert(printf("-->|%04.*%|<--\n", 3) == ft_printf("-->|%04.*%|<--\n", 3));
assert(printf("-->|%04.*%|<--\n", 4) == ft_printf("-->|%04.*%|<--\n", 4));
assert(printf("-->|%04.0%|<--\n") == ft_printf("-->|%04.0%|<--\n"));
assert(printf("-->|%04.1%|<--\n") == ft_printf("-->|%04.1%|<--\n"));
assert(printf("-->|%04.2%|<--\n") == ft_printf("-->|%04.2%|<--\n"));
assert(printf("-->|%04.3%|<--\n") == ft_printf("-->|%04.3%|<--\n"));
assert(printf("-->|%04.4%|<--\n") == ft_printf("-->|%04.4%|<--\n"));
assert(printf("-->|%04%|<--\n") == ft_printf("-->|%04%|<--\n"));
assert(printf("-->|%--4.%|<--\n") == ft_printf("-->|%--4.%|<--\n"));
assert(printf("-->|%--4.*%|<--\n", -4) == ft_printf("-->|%--4.*%|<--\n", -4));
assert(printf("-->|%--4.*%|<--\n", -3) == ft_printf("-->|%--4.*%|<--\n", -3));
assert(printf("-->|%--4.*%|<--\n", -2) == ft_printf("-->|%--4.*%|<--\n", -2));
assert(printf("-->|%--4.*%|<--\n", -1) == ft_printf("-->|%--4.*%|<--\n", -1));
assert(printf("-->|%--4.*%|<--\n", 0) == ft_printf("-->|%--4.*%|<--\n", 0));
assert(printf("-->|%--4.*%|<--\n", 1) == ft_printf("-->|%--4.*%|<--\n", 1));
assert(printf("-->|%--4.*%|<--\n", 2) == ft_printf("-->|%--4.*%|<--\n", 2));
assert(printf("-->|%--4.*%|<--\n", 3) == ft_printf("-->|%--4.*%|<--\n", 3));
assert(printf("-->|%--4.*%|<--\n", 4) == ft_printf("-->|%--4.*%|<--\n", 4));
assert(printf("-->|%--4.0%|<--\n") == ft_printf("-->|%--4.0%|<--\n"));
assert(printf("-->|%--4.1%|<--\n") == ft_printf("-->|%--4.1%|<--\n"));
assert(printf("-->|%--4.2%|<--\n") == ft_printf("-->|%--4.2%|<--\n"));
assert(printf("-->|%--4.3%|<--\n") == ft_printf("-->|%--4.3%|<--\n"));
assert(printf("-->|%--4.4%|<--\n") == ft_printf("-->|%--4.4%|<--\n"));
assert(printf("-->|%--4%|<--\n") == ft_printf("-->|%--4%|<--\n"));
assert(printf("-->|%--3.%|<--\n") == ft_printf("-->|%--3.%|<--\n"));
assert(printf("-->|%--3.*%|<--\n", -4) == ft_printf("-->|%--3.*%|<--\n", -4));
assert(printf("-->|%--3.*%|<--\n", -3) == ft_printf("-->|%--3.*%|<--\n", -3));
assert(printf("-->|%--3.*%|<--\n", -2) == ft_printf("-->|%--3.*%|<--\n", -2));
assert(printf("-->|%--3.*%|<--\n", -1) == ft_printf("-->|%--3.*%|<--\n", -1));
assert(printf("-->|%--3.*%|<--\n", 0) == ft_printf("-->|%--3.*%|<--\n", 0));
assert(printf("-->|%--3.*%|<--\n", 1) == ft_printf("-->|%--3.*%|<--\n", 1));
assert(printf("-->|%--3.*%|<--\n", 2) == ft_printf("-->|%--3.*%|<--\n", 2));
assert(printf("-->|%--3.*%|<--\n", 3) == ft_printf("-->|%--3.*%|<--\n", 3));
assert(printf("-->|%--3.*%|<--\n", 4) == ft_printf("-->|%--3.*%|<--\n", 4));
assert(printf("-->|%--3.0%|<--\n") == ft_printf("-->|%--3.0%|<--\n"));
assert(printf("-->|%--3.1%|<--\n") == ft_printf("-->|%--3.1%|<--\n"));
assert(printf("-->|%--3.2%|<--\n") == ft_printf("-->|%--3.2%|<--\n"));
assert(printf("-->|%--3.3%|<--\n") == ft_printf("-->|%--3.3%|<--\n"));
assert(printf("-->|%--3.4%|<--\n") == ft_printf("-->|%--3.4%|<--\n"));
assert(printf("-->|%--3%|<--\n") == ft_printf("-->|%--3%|<--\n"));
assert(printf("-->|%--2.%|<--\n") == ft_printf("-->|%--2.%|<--\n"));
assert(printf("-->|%--2.*%|<--\n", -4) == ft_printf("-->|%--2.*%|<--\n", -4));
assert(printf("-->|%--2.*%|<--\n", -3) == ft_printf("-->|%--2.*%|<--\n", -3));
assert(printf("-->|%--2.*%|<--\n", -2) == ft_printf("-->|%--2.*%|<--\n", -2));
assert(printf("-->|%--2.*%|<--\n", -1) == ft_printf("-->|%--2.*%|<--\n", -1));
assert(printf("-->|%--2.*%|<--\n", 0) == ft_printf("-->|%--2.*%|<--\n", 0));
assert(printf("-->|%--2.*%|<--\n", 1) == ft_printf("-->|%--2.*%|<--\n", 1));
assert(printf("-->|%--2.*%|<--\n", 2) == ft_printf("-->|%--2.*%|<--\n", 2));
assert(printf("-->|%--2.*%|<--\n", 3) == ft_printf("-->|%--2.*%|<--\n", 3));
assert(printf("-->|%--2.*%|<--\n", 4) == ft_printf("-->|%--2.*%|<--\n", 4));
assert(printf("-->|%--2.0%|<--\n") == ft_printf("-->|%--2.0%|<--\n"));
assert(printf("-->|%--2.1%|<--\n") == ft_printf("-->|%--2.1%|<--\n"));
assert(printf("-->|%--2.2%|<--\n") == ft_printf("-->|%--2.2%|<--\n"));
assert(printf("-->|%--2.3%|<--\n") == ft_printf("-->|%--2.3%|<--\n"));
assert(printf("-->|%--2.4%|<--\n") == ft_printf("-->|%--2.4%|<--\n"));
assert(printf("-->|%--2%|<--\n") == ft_printf("-->|%--2%|<--\n"));
assert(printf("-->|%--1.%|<--\n") == ft_printf("-->|%--1.%|<--\n"));
assert(printf("-->|%--1.*%|<--\n", -4) == ft_printf("-->|%--1.*%|<--\n", -4));
assert(printf("-->|%--1.*%|<--\n", -3) == ft_printf("-->|%--1.*%|<--\n", -3));
assert(printf("-->|%--1.*%|<--\n", -2) == ft_printf("-->|%--1.*%|<--\n", -2));
assert(printf("-->|%--1.*%|<--\n", -1) == ft_printf("-->|%--1.*%|<--\n", -1));
assert(printf("-->|%--1.*%|<--\n", 0) == ft_printf("-->|%--1.*%|<--\n", 0));
assert(printf("-->|%--1.*%|<--\n", 1) == ft_printf("-->|%--1.*%|<--\n", 1));
assert(printf("-->|%--1.*%|<--\n", 2) == ft_printf("-->|%--1.*%|<--\n", 2));
assert(printf("-->|%--1.*%|<--\n", 3) == ft_printf("-->|%--1.*%|<--\n", 3));
assert(printf("-->|%--1.*%|<--\n", 4) == ft_printf("-->|%--1.*%|<--\n", 4));
assert(printf("-->|%--1.0%|<--\n") == ft_printf("-->|%--1.0%|<--\n"));
assert(printf("-->|%--1.1%|<--\n") == ft_printf("-->|%--1.1%|<--\n"));
assert(printf("-->|%--1.2%|<--\n") == ft_printf("-->|%--1.2%|<--\n"));
assert(printf("-->|%--1.3%|<--\n") == ft_printf("-->|%--1.3%|<--\n"));
assert(printf("-->|%--1.4%|<--\n") == ft_printf("-->|%--1.4%|<--\n"));
assert(printf("-->|%--1%|<--\n") == ft_printf("-->|%--1%|<--\n"));
assert(printf("-->|%-.%|<--\n") == ft_printf("-->|%-.%|<--\n"));
assert(printf("-->|%-.*%|<--\n", -4) == ft_printf("-->|%-.*%|<--\n", -4));
assert(printf("-->|%-.*%|<--\n", -3) == ft_printf("-->|%-.*%|<--\n", -3));
assert(printf("-->|%-.*%|<--\n", -2) == ft_printf("-->|%-.*%|<--\n", -2));
assert(printf("-->|%-.*%|<--\n", -1) == ft_printf("-->|%-.*%|<--\n", -1));
assert(printf("-->|%-.*%|<--\n", 0) == ft_printf("-->|%-.*%|<--\n", 0));
assert(printf("-->|%-.*%|<--\n", 1) == ft_printf("-->|%-.*%|<--\n", 1));
assert(printf("-->|%-.*%|<--\n", 2) == ft_printf("-->|%-.*%|<--\n", 2));
assert(printf("-->|%-.*%|<--\n", 3) == ft_printf("-->|%-.*%|<--\n", 3));
assert(printf("-->|%-.*%|<--\n", 4) == ft_printf("-->|%-.*%|<--\n", 4));
assert(printf("-->|%-.0%|<--\n") == ft_printf("-->|%-.0%|<--\n"));
assert(printf("-->|%-.1%|<--\n") == ft_printf("-->|%-.1%|<--\n"));
assert(printf("-->|%-.2%|<--\n") == ft_printf("-->|%-.2%|<--\n"));
assert(printf("-->|%-.3%|<--\n") == ft_printf("-->|%-.3%|<--\n"));
assert(printf("-->|%-.4%|<--\n") == ft_printf("-->|%-.4%|<--\n"));
assert(printf("-->|%-%|<--\n") == ft_printf("-->|%-%|<--\n"));
assert(printf("-->|%-*.%|<--\n", -4) == ft_printf("-->|%-*.%|<--\n", -4));
assert(printf("-->|%-*.%|<--\n", -3) == ft_printf("-->|%-*.%|<--\n", -3));
assert(printf("-->|%-*.%|<--\n", -2) == ft_printf("-->|%-*.%|<--\n", -2));
assert(printf("-->|%-*.%|<--\n", -1) == ft_printf("-->|%-*.%|<--\n", -1));
assert(printf("-->|%-*.%|<--\n", 0) == ft_printf("-->|%-*.%|<--\n", 0));
assert(printf("-->|%-*.%|<--\n", 1) == ft_printf("-->|%-*.%|<--\n", 1));
assert(printf("-->|%-*.%|<--\n", 2) == ft_printf("-->|%-*.%|<--\n", 2));
assert(printf("-->|%-*.%|<--\n", 3) == ft_printf("-->|%-*.%|<--\n", 3));
assert(printf("-->|%-*.%|<--\n", 4) == ft_printf("-->|%-*.%|<--\n", 4));
assert(printf("-->|%-*.*%|<--\n", -4, -4) == ft_printf("-->|%-*.*%|<--\n", -4, -4));
assert(printf("-->|%-*.*%|<--\n", -4, -3) == ft_printf("-->|%-*.*%|<--\n", -4, -3));
assert(printf("-->|%-*.*%|<--\n", -4, -2) == ft_printf("-->|%-*.*%|<--\n", -4, -2));
assert(printf("-->|%-*.*%|<--\n", -4, -1) == ft_printf("-->|%-*.*%|<--\n", -4, -1));
assert(printf("-->|%-*.*%|<--\n", -4, 0) == ft_printf("-->|%-*.*%|<--\n", -4, 0));
assert(printf("-->|%-*.*%|<--\n", -4, 1) == ft_printf("-->|%-*.*%|<--\n", -4, 1));
assert(printf("-->|%-*.*%|<--\n", -4, 2) == ft_printf("-->|%-*.*%|<--\n", -4, 2));
assert(printf("-->|%-*.*%|<--\n", -4, 3) == ft_printf("-->|%-*.*%|<--\n", -4, 3));
assert(printf("-->|%-*.*%|<--\n", -4, 4) == ft_printf("-->|%-*.*%|<--\n", -4, 4));
assert(printf("-->|%-*.*%|<--\n", -3, -4) == ft_printf("-->|%-*.*%|<--\n", -3, -4));
assert(printf("-->|%-*.*%|<--\n", -3, -3) == ft_printf("-->|%-*.*%|<--\n", -3, -3));
assert(printf("-->|%-*.*%|<--\n", -3, -2) == ft_printf("-->|%-*.*%|<--\n", -3, -2));
assert(printf("-->|%-*.*%|<--\n", -3, -1) == ft_printf("-->|%-*.*%|<--\n", -3, -1));
assert(printf("-->|%-*.*%|<--\n", -3, 0) == ft_printf("-->|%-*.*%|<--\n", -3, 0));
assert(printf("-->|%-*.*%|<--\n", -3, 1) == ft_printf("-->|%-*.*%|<--\n", -3, 1));
assert(printf("-->|%-*.*%|<--\n", -3, 2) == ft_printf("-->|%-*.*%|<--\n", -3, 2));
assert(printf("-->|%-*.*%|<--\n", -3, 3) == ft_printf("-->|%-*.*%|<--\n", -3, 3));
assert(printf("-->|%-*.*%|<--\n", -3, 4) == ft_printf("-->|%-*.*%|<--\n", -3, 4));
assert(printf("-->|%-*.*%|<--\n", -2, -4) == ft_printf("-->|%-*.*%|<--\n", -2, -4));
assert(printf("-->|%-*.*%|<--\n", -2, -3) == ft_printf("-->|%-*.*%|<--\n", -2, -3));
assert(printf("-->|%-*.*%|<--\n", -2, -2) == ft_printf("-->|%-*.*%|<--\n", -2, -2));
assert(printf("-->|%-*.*%|<--\n", -2, -1) == ft_printf("-->|%-*.*%|<--\n", -2, -1));
assert(printf("-->|%-*.*%|<--\n", -2, 0) == ft_printf("-->|%-*.*%|<--\n", -2, 0));
assert(printf("-->|%-*.*%|<--\n", -2, 1) == ft_printf("-->|%-*.*%|<--\n", -2, 1));
assert(printf("-->|%-*.*%|<--\n", -2, 2) == ft_printf("-->|%-*.*%|<--\n", -2, 2));
assert(printf("-->|%-*.*%|<--\n", -2, 3) == ft_printf("-->|%-*.*%|<--\n", -2, 3));
assert(printf("-->|%-*.*%|<--\n", -2, 4) == ft_printf("-->|%-*.*%|<--\n", -2, 4));
assert(printf("-->|%-*.*%|<--\n", -1, -4) == ft_printf("-->|%-*.*%|<--\n", -1, -4));
assert(printf("-->|%-*.*%|<--\n", -1, -3) == ft_printf("-->|%-*.*%|<--\n", -1, -3));
assert(printf("-->|%-*.*%|<--\n", -1, -2) == ft_printf("-->|%-*.*%|<--\n", -1, -2));
assert(printf("-->|%-*.*%|<--\n", -1, -1) == ft_printf("-->|%-*.*%|<--\n", -1, -1));
assert(printf("-->|%-*.*%|<--\n", -1, 0) == ft_printf("-->|%-*.*%|<--\n", -1, 0));
assert(printf("-->|%-*.*%|<--\n", -1, 1) == ft_printf("-->|%-*.*%|<--\n", -1, 1));
assert(printf("-->|%-*.*%|<--\n", -1, 2) == ft_printf("-->|%-*.*%|<--\n", -1, 2));
assert(printf("-->|%-*.*%|<--\n", -1, 3) == ft_printf("-->|%-*.*%|<--\n", -1, 3));
assert(printf("-->|%-*.*%|<--\n", -1, 4) == ft_printf("-->|%-*.*%|<--\n", -1, 4));
assert(printf("-->|%-*.*%|<--\n", 0, -4) == ft_printf("-->|%-*.*%|<--\n", 0, -4));
assert(printf("-->|%-*.*%|<--\n", 0, -3) == ft_printf("-->|%-*.*%|<--\n", 0, -3));
assert(printf("-->|%-*.*%|<--\n", 0, -2) == ft_printf("-->|%-*.*%|<--\n", 0, -2));
assert(printf("-->|%-*.*%|<--\n", 0, -1) == ft_printf("-->|%-*.*%|<--\n", 0, -1));
assert(printf("-->|%-*.*%|<--\n", 0, 0) == ft_printf("-->|%-*.*%|<--\n", 0, 0));
assert(printf("-->|%-*.*%|<--\n", 0, 1) == ft_printf("-->|%-*.*%|<--\n", 0, 1));
assert(printf("-->|%-*.*%|<--\n", 0, 2) == ft_printf("-->|%-*.*%|<--\n", 0, 2));
assert(printf("-->|%-*.*%|<--\n", 0, 3) == ft_printf("-->|%-*.*%|<--\n", 0, 3));
assert(printf("-->|%-*.*%|<--\n", 0, 4) == ft_printf("-->|%-*.*%|<--\n", 0, 4));
assert(printf("-->|%-*.*%|<--\n", 1, -4) == ft_printf("-->|%-*.*%|<--\n", 1, -4));
assert(printf("-->|%-*.*%|<--\n", 1, -3) == ft_printf("-->|%-*.*%|<--\n", 1, -3));
assert(printf("-->|%-*.*%|<--\n", 1, -2) == ft_printf("-->|%-*.*%|<--\n", 1, -2));
assert(printf("-->|%-*.*%|<--\n", 1, -1) == ft_printf("-->|%-*.*%|<--\n", 1, -1));
assert(printf("-->|%-*.*%|<--\n", 1, 0) == ft_printf("-->|%-*.*%|<--\n", 1, 0));
assert(printf("-->|%-*.*%|<--\n", 1, 1) == ft_printf("-->|%-*.*%|<--\n", 1, 1));
assert(printf("-->|%-*.*%|<--\n", 1, 2) == ft_printf("-->|%-*.*%|<--\n", 1, 2));
assert(printf("-->|%-*.*%|<--\n", 1, 3) == ft_printf("-->|%-*.*%|<--\n", 1, 3));
assert(printf("-->|%-*.*%|<--\n", 1, 4) == ft_printf("-->|%-*.*%|<--\n", 1, 4));
assert(printf("-->|%-*.*%|<--\n", 2, -4) == ft_printf("-->|%-*.*%|<--\n", 2, -4));
assert(printf("-->|%-*.*%|<--\n", 2, -3) == ft_printf("-->|%-*.*%|<--\n", 2, -3));
assert(printf("-->|%-*.*%|<--\n", 2, -2) == ft_printf("-->|%-*.*%|<--\n", 2, -2));
assert(printf("-->|%-*.*%|<--\n", 2, -1) == ft_printf("-->|%-*.*%|<--\n", 2, -1));
assert(printf("-->|%-*.*%|<--\n", 2, 0) == ft_printf("-->|%-*.*%|<--\n", 2, 0));
assert(printf("-->|%-*.*%|<--\n", 2, 1) == ft_printf("-->|%-*.*%|<--\n", 2, 1));
assert(printf("-->|%-*.*%|<--\n", 2, 2) == ft_printf("-->|%-*.*%|<--\n", 2, 2));
assert(printf("-->|%-*.*%|<--\n", 2, 3) == ft_printf("-->|%-*.*%|<--\n", 2, 3));
assert(printf("-->|%-*.*%|<--\n", 2, 4) == ft_printf("-->|%-*.*%|<--\n", 2, 4));
assert(printf("-->|%-*.*%|<--\n", 3, -4) == ft_printf("-->|%-*.*%|<--\n", 3, -4));
assert(printf("-->|%-*.*%|<--\n", 3, -3) == ft_printf("-->|%-*.*%|<--\n", 3, -3));
assert(printf("-->|%-*.*%|<--\n", 3, -2) == ft_printf("-->|%-*.*%|<--\n", 3, -2));
assert(printf("-->|%-*.*%|<--\n", 3, -1) == ft_printf("-->|%-*.*%|<--\n", 3, -1));
assert(printf("-->|%-*.*%|<--\n", 3, 0) == ft_printf("-->|%-*.*%|<--\n", 3, 0));
assert(printf("-->|%-*.*%|<--\n", 3, 1) == ft_printf("-->|%-*.*%|<--\n", 3, 1));
assert(printf("-->|%-*.*%|<--\n", 3, 2) == ft_printf("-->|%-*.*%|<--\n", 3, 2));
assert(printf("-->|%-*.*%|<--\n", 3, 3) == ft_printf("-->|%-*.*%|<--\n", 3, 3));
assert(printf("-->|%-*.*%|<--\n", 3, 4) == ft_printf("-->|%-*.*%|<--\n", 3, 4));
assert(printf("-->|%-*.*%|<--\n", 4, -4) == ft_printf("-->|%-*.*%|<--\n", 4, -4));
assert(printf("-->|%-*.*%|<--\n", 4, -3) == ft_printf("-->|%-*.*%|<--\n", 4, -3));
assert(printf("-->|%-*.*%|<--\n", 4, -2) == ft_printf("-->|%-*.*%|<--\n", 4, -2));
assert(printf("-->|%-*.*%|<--\n", 4, -1) == ft_printf("-->|%-*.*%|<--\n", 4, -1));
assert(printf("-->|%-*.*%|<--\n", 4, 0) == ft_printf("-->|%-*.*%|<--\n", 4, 0));
assert(printf("-->|%-*.*%|<--\n", 4, 1) == ft_printf("-->|%-*.*%|<--\n", 4, 1));
assert(printf("-->|%-*.*%|<--\n", 4, 2) == ft_printf("-->|%-*.*%|<--\n", 4, 2));
assert(printf("-->|%-*.*%|<--\n", 4, 3) == ft_printf("-->|%-*.*%|<--\n", 4, 3));
assert(printf("-->|%-*.*%|<--\n", 4, 4) == ft_printf("-->|%-*.*%|<--\n", 4, 4));
assert(printf("-->|%-*.0%|<--\n", -4) == ft_printf("-->|%-*.0%|<--\n", -4));
assert(printf("-->|%-*.0%|<--\n", -3) == ft_printf("-->|%-*.0%|<--\n", -3));
assert(printf("-->|%-*.0%|<--\n", -2) == ft_printf("-->|%-*.0%|<--\n", -2));
assert(printf("-->|%-*.0%|<--\n", -1) == ft_printf("-->|%-*.0%|<--\n", -1));
assert(printf("-->|%-*.0%|<--\n", 0) == ft_printf("-->|%-*.0%|<--\n", 0));
assert(printf("-->|%-*.0%|<--\n", 1) == ft_printf("-->|%-*.0%|<--\n", 1));
assert(printf("-->|%-*.0%|<--\n", 2) == ft_printf("-->|%-*.0%|<--\n", 2));
assert(printf("-->|%-*.0%|<--\n", 3) == ft_printf("-->|%-*.0%|<--\n", 3));
assert(printf("-->|%-*.0%|<--\n", 4) == ft_printf("-->|%-*.0%|<--\n", 4));
assert(printf("-->|%-*.1%|<--\n", -4) == ft_printf("-->|%-*.1%|<--\n", -4));
assert(printf("-->|%-*.1%|<--\n", -3) == ft_printf("-->|%-*.1%|<--\n", -3));
assert(printf("-->|%-*.1%|<--\n", -2) == ft_printf("-->|%-*.1%|<--\n", -2));
assert(printf("-->|%-*.1%|<--\n", -1) == ft_printf("-->|%-*.1%|<--\n", -1));
assert(printf("-->|%-*.1%|<--\n", 0) == ft_printf("-->|%-*.1%|<--\n", 0));
assert(printf("-->|%-*.1%|<--\n", 1) == ft_printf("-->|%-*.1%|<--\n", 1));
assert(printf("-->|%-*.1%|<--\n", 2) == ft_printf("-->|%-*.1%|<--\n", 2));
assert(printf("-->|%-*.1%|<--\n", 3) == ft_printf("-->|%-*.1%|<--\n", 3));
assert(printf("-->|%-*.1%|<--\n", 4) == ft_printf("-->|%-*.1%|<--\n", 4));
assert(printf("-->|%-*.2%|<--\n", -4) == ft_printf("-->|%-*.2%|<--\n", -4));
assert(printf("-->|%-*.2%|<--\n", -3) == ft_printf("-->|%-*.2%|<--\n", -3));
assert(printf("-->|%-*.2%|<--\n", -2) == ft_printf("-->|%-*.2%|<--\n", -2));
assert(printf("-->|%-*.2%|<--\n", -1) == ft_printf("-->|%-*.2%|<--\n", -1));
assert(printf("-->|%-*.2%|<--\n", 0) == ft_printf("-->|%-*.2%|<--\n", 0));
assert(printf("-->|%-*.2%|<--\n", 1) == ft_printf("-->|%-*.2%|<--\n", 1));
assert(printf("-->|%-*.2%|<--\n", 2) == ft_printf("-->|%-*.2%|<--\n", 2));
assert(printf("-->|%-*.2%|<--\n", 3) == ft_printf("-->|%-*.2%|<--\n", 3));
assert(printf("-->|%-*.2%|<--\n", 4) == ft_printf("-->|%-*.2%|<--\n", 4));
assert(printf("-->|%-*.3%|<--\n", -4) == ft_printf("-->|%-*.3%|<--\n", -4));
assert(printf("-->|%-*.3%|<--\n", -3) == ft_printf("-->|%-*.3%|<--\n", -3));
assert(printf("-->|%-*.3%|<--\n", -2) == ft_printf("-->|%-*.3%|<--\n", -2));
assert(printf("-->|%-*.3%|<--\n", -1) == ft_printf("-->|%-*.3%|<--\n", -1));
assert(printf("-->|%-*.3%|<--\n", 0) == ft_printf("-->|%-*.3%|<--\n", 0));
assert(printf("-->|%-*.3%|<--\n", 1) == ft_printf("-->|%-*.3%|<--\n", 1));
assert(printf("-->|%-*.3%|<--\n", 2) == ft_printf("-->|%-*.3%|<--\n", 2));
assert(printf("-->|%-*.3%|<--\n", 3) == ft_printf("-->|%-*.3%|<--\n", 3));
assert(printf("-->|%-*.3%|<--\n", 4) == ft_printf("-->|%-*.3%|<--\n", 4));
assert(printf("-->|%-*.4%|<--\n", -4) == ft_printf("-->|%-*.4%|<--\n", -4));
assert(printf("-->|%-*.4%|<--\n", -3) == ft_printf("-->|%-*.4%|<--\n", -3));
assert(printf("-->|%-*.4%|<--\n", -2) == ft_printf("-->|%-*.4%|<--\n", -2));
assert(printf("-->|%-*.4%|<--\n", -1) == ft_printf("-->|%-*.4%|<--\n", -1));
assert(printf("-->|%-*.4%|<--\n", 0) == ft_printf("-->|%-*.4%|<--\n", 0));
assert(printf("-->|%-*.4%|<--\n", 1) == ft_printf("-->|%-*.4%|<--\n", 1));
assert(printf("-->|%-*.4%|<--\n", 2) == ft_printf("-->|%-*.4%|<--\n", 2));
assert(printf("-->|%-*.4%|<--\n", 3) == ft_printf("-->|%-*.4%|<--\n", 3));
assert(printf("-->|%-*.4%|<--\n", 4) == ft_printf("-->|%-*.4%|<--\n", 4));
assert(printf("-->|%-*%|<--\n", -4) == ft_printf("-->|%-*%|<--\n", -4));
assert(printf("-->|%-*%|<--\n", -3) == ft_printf("-->|%-*%|<--\n", -3));
assert(printf("-->|%-*%|<--\n", -2) == ft_printf("-->|%-*%|<--\n", -2));
assert(printf("-->|%-*%|<--\n", -1) == ft_printf("-->|%-*%|<--\n", -1));
assert(printf("-->|%-*%|<--\n", 0) == ft_printf("-->|%-*%|<--\n", 0));
assert(printf("-->|%-*%|<--\n", 1) == ft_printf("-->|%-*%|<--\n", 1));
assert(printf("-->|%-*%|<--\n", 2) == ft_printf("-->|%-*%|<--\n", 2));
assert(printf("-->|%-*%|<--\n", 3) == ft_printf("-->|%-*%|<--\n", 3));
assert(printf("-->|%-*%|<--\n", 4) == ft_printf("-->|%-*%|<--\n", 4));
assert(printf("-->|%-1.%|<--\n") == ft_printf("-->|%-1.%|<--\n"));
assert(printf("-->|%-1.*%|<--\n", -4) == ft_printf("-->|%-1.*%|<--\n", -4));
assert(printf("-->|%-1.*%|<--\n", -3) == ft_printf("-->|%-1.*%|<--\n", -3));
assert(printf("-->|%-1.*%|<--\n", -2) == ft_printf("-->|%-1.*%|<--\n", -2));
assert(printf("-->|%-1.*%|<--\n", -1) == ft_printf("-->|%-1.*%|<--\n", -1));
assert(printf("-->|%-1.*%|<--\n", 0) == ft_printf("-->|%-1.*%|<--\n", 0));
assert(printf("-->|%-1.*%|<--\n", 1) == ft_printf("-->|%-1.*%|<--\n", 1));
assert(printf("-->|%-1.*%|<--\n", 2) == ft_printf("-->|%-1.*%|<--\n", 2));
assert(printf("-->|%-1.*%|<--\n", 3) == ft_printf("-->|%-1.*%|<--\n", 3));
assert(printf("-->|%-1.*%|<--\n", 4) == ft_printf("-->|%-1.*%|<--\n", 4));
assert(printf("-->|%-1.0%|<--\n") == ft_printf("-->|%-1.0%|<--\n"));
assert(printf("-->|%-1.1%|<--\n") == ft_printf("-->|%-1.1%|<--\n"));
assert(printf("-->|%-1.2%|<--\n") == ft_printf("-->|%-1.2%|<--\n"));
assert(printf("-->|%-1.3%|<--\n") == ft_printf("-->|%-1.3%|<--\n"));
assert(printf("-->|%-1.4%|<--\n") == ft_printf("-->|%-1.4%|<--\n"));
assert(printf("-->|%-1%|<--\n") == ft_printf("-->|%-1%|<--\n"));
assert(printf("-->|%-2.%|<--\n") == ft_printf("-->|%-2.%|<--\n"));
assert(printf("-->|%-2.*%|<--\n", -4) == ft_printf("-->|%-2.*%|<--\n", -4));
assert(printf("-->|%-2.*%|<--\n", -3) == ft_printf("-->|%-2.*%|<--\n", -3));
assert(printf("-->|%-2.*%|<--\n", -2) == ft_printf("-->|%-2.*%|<--\n", -2));
assert(printf("-->|%-2.*%|<--\n", -1) == ft_printf("-->|%-2.*%|<--\n", -1));
assert(printf("-->|%-2.*%|<--\n", 0) == ft_printf("-->|%-2.*%|<--\n", 0));
assert(printf("-->|%-2.*%|<--\n", 1) == ft_printf("-->|%-2.*%|<--\n", 1));
assert(printf("-->|%-2.*%|<--\n", 2) == ft_printf("-->|%-2.*%|<--\n", 2));
assert(printf("-->|%-2.*%|<--\n", 3) == ft_printf("-->|%-2.*%|<--\n", 3));
assert(printf("-->|%-2.*%|<--\n", 4) == ft_printf("-->|%-2.*%|<--\n", 4));
assert(printf("-->|%-2.0%|<--\n") == ft_printf("-->|%-2.0%|<--\n"));
assert(printf("-->|%-2.1%|<--\n") == ft_printf("-->|%-2.1%|<--\n"));
assert(printf("-->|%-2.2%|<--\n") == ft_printf("-->|%-2.2%|<--\n"));
assert(printf("-->|%-2.3%|<--\n") == ft_printf("-->|%-2.3%|<--\n"));
assert(printf("-->|%-2.4%|<--\n") == ft_printf("-->|%-2.4%|<--\n"));
assert(printf("-->|%-2%|<--\n") == ft_printf("-->|%-2%|<--\n"));
assert(printf("-->|%-3.%|<--\n") == ft_printf("-->|%-3.%|<--\n"));
assert(printf("-->|%-3.*%|<--\n", -4) == ft_printf("-->|%-3.*%|<--\n", -4));
assert(printf("-->|%-3.*%|<--\n", -3) == ft_printf("-->|%-3.*%|<--\n", -3));
assert(printf("-->|%-3.*%|<--\n", -2) == ft_printf("-->|%-3.*%|<--\n", -2));
assert(printf("-->|%-3.*%|<--\n", -1) == ft_printf("-->|%-3.*%|<--\n", -1));
assert(printf("-->|%-3.*%|<--\n", 0) == ft_printf("-->|%-3.*%|<--\n", 0));
assert(printf("-->|%-3.*%|<--\n", 1) == ft_printf("-->|%-3.*%|<--\n", 1));
assert(printf("-->|%-3.*%|<--\n", 2) == ft_printf("-->|%-3.*%|<--\n", 2));
assert(printf("-->|%-3.*%|<--\n", 3) == ft_printf("-->|%-3.*%|<--\n", 3));
assert(printf("-->|%-3.*%|<--\n", 4) == ft_printf("-->|%-3.*%|<--\n", 4));
assert(printf("-->|%-3.0%|<--\n") == ft_printf("-->|%-3.0%|<--\n"));
assert(printf("-->|%-3.1%|<--\n") == ft_printf("-->|%-3.1%|<--\n"));
assert(printf("-->|%-3.2%|<--\n") == ft_printf("-->|%-3.2%|<--\n"));
assert(printf("-->|%-3.3%|<--\n") == ft_printf("-->|%-3.3%|<--\n"));
assert(printf("-->|%-3.4%|<--\n") == ft_printf("-->|%-3.4%|<--\n"));
assert(printf("-->|%-3%|<--\n") == ft_printf("-->|%-3%|<--\n"));
assert(printf("-->|%-4.%|<--\n") == ft_printf("-->|%-4.%|<--\n"));
assert(printf("-->|%-4.*%|<--\n", -4) == ft_printf("-->|%-4.*%|<--\n", -4));
assert(printf("-->|%-4.*%|<--\n", -3) == ft_printf("-->|%-4.*%|<--\n", -3));
assert(printf("-->|%-4.*%|<--\n", -2) == ft_printf("-->|%-4.*%|<--\n", -2));
assert(printf("-->|%-4.*%|<--\n", -1) == ft_printf("-->|%-4.*%|<--\n", -1));
assert(printf("-->|%-4.*%|<--\n", 0) == ft_printf("-->|%-4.*%|<--\n", 0));
assert(printf("-->|%-4.*%|<--\n", 1) == ft_printf("-->|%-4.*%|<--\n", 1));
assert(printf("-->|%-4.*%|<--\n", 2) == ft_printf("-->|%-4.*%|<--\n", 2));
assert(printf("-->|%-4.*%|<--\n", 3) == ft_printf("-->|%-4.*%|<--\n", 3));
assert(printf("-->|%-4.*%|<--\n", 4) == ft_printf("-->|%-4.*%|<--\n", 4));
assert(printf("-->|%-4.0%|<--\n") == ft_printf("-->|%-4.0%|<--\n"));
assert(printf("-->|%-4.1%|<--\n") == ft_printf("-->|%-4.1%|<--\n"));
assert(printf("-->|%-4.2%|<--\n") == ft_printf("-->|%-4.2%|<--\n"));
assert(printf("-->|%-4.3%|<--\n") == ft_printf("-->|%-4.3%|<--\n"));
assert(printf("-->|%-4.4%|<--\n") == ft_printf("-->|%-4.4%|<--\n"));
assert(printf("-->|%-4%|<--\n") == ft_printf("-->|%-4%|<--\n"));
	return(0);
}
/*
** charmstr@student.42.fr
**
** 1664 different calls generated automatically according to your options
*/
