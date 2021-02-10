/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:33:40 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/10 16:43:38 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;

	while(str[i])
	{
		i++;
	}
	return i;
}

int main()
{
	char phrase[] = "bibi n'en peux pu\n";
	printf("%d", ft_strlen(phrase));
	return (0);
}
