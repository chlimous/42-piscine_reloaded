/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlimous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:22:50 by chlimous          #+#    #+#             */
/*   Updated: 2023/10/30 14:29:50 by chlimous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	if (argc == 3)
		printf("strcmp : %d, ft_strcmp : %d\n", strcmp(argv[1], argv[2]),
		ft_strcmp(argv[1], argv[2]));
}
*/
