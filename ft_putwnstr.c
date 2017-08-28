#include "libft.h"

void		ft_putwnstr(wchar_t const *ws, size_t len)
{
	size_t	i;

	i = -1;
	while(*ws && ++i < len)
		ft_putwchar(*ws++);
}
