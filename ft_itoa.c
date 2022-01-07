/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trozain <trozain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:29:06 by trozain           #+#    #+#             */
/*   Updated: 2022/01/07 01:50:54 by trozain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calcul(int nbr);

char	*ft_itoa(int n)
{
	char		*p;
	size_t		ns;
//	size_t		i;

//	i = 0;
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	ns = calcul(n);
	p = malloc(sizeof(char *) * (ns + 1));
	if (p == 0)
		return (0);
	p[ns] = 0;
	if (n < 0)
	{
		p[0] = '-';
		n *= -1;
	}
	while (0 < ns--)
	{
		p[ns] = (n % 10) + '0';
		n /= 10;
	}
	return (p);
}

int	calcul(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < i)
		i++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}
