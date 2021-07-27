#include "./includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int a = 0;
	int *b = &a;
	// ft_printf("z%3c", 'a');
	// printf("z%3c", 'a');
	// ft_printf("z%.1s", "as");
	// printf("z%.1s", "as");
	ft_printf("|%20p|\n", b);
	printf("|%20p|\n", b);
}
