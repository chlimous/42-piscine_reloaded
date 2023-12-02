/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: chlimous <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/30 15:45:31 by chlimous	       #+#    #+#	      */
/*   Updated: 2023/10/30 16:00:47 by chlimous         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (max <= min)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/*
#include <stdio.h>
#include <stdlib.h>
void	ft_print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_print_tab(ft_range(atoi(argv[1]), atoi(argv[2])),
				atoi(argv[2]) - atoi(argv[1]));
}
*/
