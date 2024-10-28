/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:31:29 by ael-azha          #+#    #+#             */
/*   Updated: 2024/10/28 16:33:38 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_empty_str(void)
{
	char    *empty;

	empty = (char *)malloc(1);
	if (empty)
		empty[0] = '\0';
	return (empty);
}
size_t  strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t  i;
	size_t  str_len;
	char    *new;
	
	str_len = strlen(s);
	if (!s)
		return (NULL);
	if (start >= str_len || len == 0)
		return (ft_empty_str());
	if (start + len > str_len)
		len = str_len - start;
	i = 0;
	new = (char *)malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}