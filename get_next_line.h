/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thervieu <thervieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 10:36:45 by thervieu          #+#    #+#             */
/*   Updated: 2019/11/26 17:33:45 by thervieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		get_next_line(int const fd, char **line);
size_t	ft_strlen(const char *src);
char	*ft_strdup(char *src);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
