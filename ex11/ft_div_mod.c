/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlimous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:33:52 by chlimous          #+#    #+#             */
/*   Updated: 2023/10/30 13:38:28 by chlimous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int main()
{
	int div;
	int mod;
	ft_div_mod(10, 2, &div, &mod);
	printf("div : %d, mod : %d\n", div, mod);
}
*/
