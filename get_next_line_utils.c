/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thervieu <thervieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 10:03:44 by thervieu          #+#    #+#             */
/*   Updated: 2019/11/26 17:23:37 by thervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *src)
{
	size_t i;

	i = 0;
	if (!src)
		return (0);
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;

	len = 0;
	while (src[len])
		len++;
	if ((dest = malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	len = 0;
	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*s3;
	int		i;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup((char *)s2));
	if (!s2)
		return (ft_strdup((char *)s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	if ((s3 = malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
		s3[i++] = *s1++;
	while (*s2 != '\0')
		s3[i++] = *s2++;
	s3[i] = '\0';
	return (s3);
}
