/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: chlimous <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/30 16:33:10 by chlimous	       #+#    #+#	      */
/*   Updated: 2023/10/30 16:43:23 by chlimous         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

/*
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	test(char *str)
{
	return (ft_strlen(str) > 1 ? 1 : 0);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc > 2)
		printf("%d\n", ft_count_if(argv + 1, &test));
}
*/
