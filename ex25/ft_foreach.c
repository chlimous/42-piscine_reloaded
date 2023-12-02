/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: chlimous <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/30 16:18:06 by chlimous	       #+#    #+#	      */
/*   Updated: 2023/10/30 16:27:55 by chlimous         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

/*
#include <stdio.h>
void	print_nb(int nb)
{
	printf("%d\n", nb);
}

int main()
{
	int tab[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_foreach(tab, 9, &print_nb);

}
*/
