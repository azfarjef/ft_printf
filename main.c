#include "./example/edithturn/includes/ft_printf.h"
// #include "./example/m3zh/02-ft_printf/includes/ft_printf.h"
// #include "./example/rchallie/includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int n = 0;

	// //- flag
	// ft_printf("%-5d\n", 123);
	// ft_printf("%5d\n", 123);
	// ft_printf("%-5d\n", 1234567);
	// ft_printf("%5d\n", 1234567);
	// printf("------------------------------\n");
	// //0 flag
	// // ft_printf("%+09d\n", 123);
	// ft_printf("%09d\n", 123);
	// ft_printf("%9d\n", 123);
	// printf("------------------------------\n");
	// //. flag
	// ft_printf("%.f\n", 123.0);
	// ft_printf("%.1f\n", 123.0);
	// ft_printf("%.2f\n", 123.0);
	// printf("------------------------------\n");
	// //* flag
	// ft_printf("%*d\n", 5, 123);
	// ft_printf("%-*d\n", 5, 123);
	// ft_printf("%*d\n", 5, 1234567);
	// ft_printf("%-*d\n", 5, 1234567);

	// // ft_printf("%-3d\n", 12);
	// // ft_printf("%03d\n", 12);
	// // printf("%-3d\n", 12);
	// // printf("%03d\n", 12);

	ft_printf("t %c %s %p %d %i %u %x %X\n", 'a', "abc", &n, -123, -123, 123, 123, 123);
	printf("t %c %s %p %d %i %u %x %X\n", 'a', "abc", &n, -123, -123, 123, 123, 123);

	return (0);
}