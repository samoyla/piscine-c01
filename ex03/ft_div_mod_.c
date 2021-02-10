/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:29:14 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/09 16:20:08 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{

	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a;
	int b;
	int div;
	int mod;
		
	a = 32;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("division = %d modulo =  %d", div, mod);
	return (0);
}
