/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:03:05 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/16 12:03:08 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	int				j;
	unsigned int	cmp;

	cmp = 0;
	i = 0;
	while (dest[i] != '\0')
		i ++;
	j = 0;
	while (src[j] != '\0' && cmp < nb)
	{
		dest[i + j] = src[j];
		j++;
		cmp ++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int	main()
{
    char dest [] = "Wassup ";
    char src [] = "Youtube";

    printf("%s", ft_strncat(dest, src, 3));
}*/