/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 14:49:57 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/09 14:58:28 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main()
{
	int a;
	int b;
	a = 10;
	b = 20;
	printf("a = %d et b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d et b = %d\n", a, b);
	return (0);
}
