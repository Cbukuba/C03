/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 09:06:20 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/16 09:06:23 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				i;
	unsigned int	cmp;

	i = 0;
	cmp = 1;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && cmp < n)
	{
		i ++;
		cmp ++;
	}
	return (s1[i] - s2[i]);
}

/*int main()
{
    char s1[] = "abei";
    char s2[] = "abed";
    int result = ft_strncmp(s1, s2, 5);
    printf("%d", result);
}*/