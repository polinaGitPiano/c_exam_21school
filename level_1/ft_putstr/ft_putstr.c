#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{	
		ft_putchar(str[i]);
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	char i[] = "mama papa i";
	printf("%d", (ft_putstr(i)));
	return (0);
}
