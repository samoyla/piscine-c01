/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:02:55 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/10 14:32:54 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;

		while(str[i])
			i++;
		write(1, str, i);
}

int main()
{
	char phrase[] = "WTF je sature\n";
	ft_putstr(phrase);
	return (0);
}
