#include "./includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	// ft_printf("z%3c", 'a');
	// printf("z%3c", 'a');
	ft_printf("z%.1s", "as");
	printf("z%.1s", "as");

}
