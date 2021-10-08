#include "./includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	// int a = 0;
	// int *b = &a;
	// ft_printf("z%3c", 'a');
	// printf("z%3c", 'a');
	// ft_printf("z%.1s", "as");
	// printf("z%.1s", "as");
	// ft_printf("|%20p|\n", b);
	// printf("|%20p|\n", b);

	// ft_printf("|%-5.4d|", 123);
	// printf("|%-5.4d|", 123);
	// ft_printf("|%5.0u|", -123);
	// printf("|%5.0u|", -123);

	// ft_printf("|%08x|", 123);
	// printf("|%08x|", 123);

	ft_printf("|%-d|", -2147483648, 123);
	// printf("Return %d", printf("chelsea"));

	// printf("%d\n", printf("|%p|", NULL));                                                                                                                     
    // printf("%d\n", ft_printf("|%p|", NULL));
}
