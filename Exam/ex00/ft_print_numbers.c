#include <unistd.h>

void	ft_print_numbers(void)
{
	write(1, "01234567890\n", 11);
}
