/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:50:37 by molasz-a          #+#    #+#             */
/*   Updated: 2024/01/02 12:08:32 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int				i;
	unsigned int	result;

	if (nb < 0)
		return (0);
	i = 0;
	result = 1;
	while (i < nb)
	{
		result *= i + 1;
		if (result >= 2147483647)
			return (0);
		i++;
	}
	return (result);
}
