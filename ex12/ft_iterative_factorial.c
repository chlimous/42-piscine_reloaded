/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlimous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:50:44 by chlimous          #+#    #+#             */
/*   Updated: 2023/10/30 18:16:53 by chlimous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	res = nb;
	while (nb > 1)
	{
		nb--;
		res = res * nb;
	}
	return (res);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
}
*/
