#include <stdio.h>

int	main(void)
{
	//- flag
	printf("%-5d\n", 123);
	printf("%5d\n", 123);
	printf("%-5d\n", 1234567);
	printf("%5d\n", 1234567);
	printf("------------------------------\n");
	//0 flag
	printf("%+09d\n", 123);
	printf("%09d\n", 123);
	printf("%9d\n", 123);
	// printf("%-09d\n", 123);
	printf("------------------------------\n");
	//. flag
	printf("%.f\n", 123.0);
	printf("%.1f\n", 123.0);
	printf("%.2f\n", 123.0);
	printf("------------------------------\n");
	//* flag
	printf("%*d\n", 5, 123);
	printf("%-*d\n", 5, 123);
	printf("%*d\n", 5, 1234567);
	printf("%-*d\n", 5, 1234567);
}