#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*ptr;

	ptr = ft_calloc(3, 2);
	
	// ptr[3] = 2;
	// ptr[4] = 3;
	// ptr[5] = 4;

	for (int i = 0; i < 8; i++)
	{
		printf("%d\n", ptr[i]);
	}
	
	free(ptr);
	return (0);
}