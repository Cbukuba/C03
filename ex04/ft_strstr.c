/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:36:32 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/16 12:36:35 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{	
		j = 0;
		if (str[i + j] == to_find[j])
		{
			j ++;
			return (to_find);
		}
		i ++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int main()
{
	char s1[] = "Youtube Wassup";
	char s2[] = "Wassup";

	printf("%s", ft_strstr(s1, s2));
}*/