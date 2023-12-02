/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlimous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:04:05 by chlimous          #+#    #+#             */
/*   Updated: 2023/10/30 15:19:41 by chlimous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n", ft_sqrt(atoi(argv[1])));
}
*/
