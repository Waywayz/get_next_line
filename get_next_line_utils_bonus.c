/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:40:51 by rovillar          #+#    #+#             */
/*   Updated: 2022/01/18 16:42:12 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == (char) c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *save, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!save)
	{
		save = malloc(sizeof(char) * 1);
		if (!save)
			return (0);
		save[0] = '\0';
	}
	if (!buff)
		return (0);
	str = malloc(sizeof(char) * ((ft_strlen(save) + ft_strlen(buff)) + 1));
	if (!str)
		return (0);
	i = -1;
	j = 0;
	while (save[++i] != '\0')
		str[i] = save[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(save) + ft_strlen(buff)] = '\0';
	free(save);
	return (str);
}
