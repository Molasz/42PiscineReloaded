/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:35:48 by molasz-a          #+#    #+#             */
/*   Updated: 2024/01/02 11:24:15 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;

	srclen = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (srclen);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*str;

	src_len = ft_strlen(src);
	str = (char *)malloc((src_len + 1) * sizeof (char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, src, src_len + 1);
	return (str);
}
