/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 16:26:48 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/08 19:56:07 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

// int main(void)
// {
//     printf("%d\n", ft_strcmp("ABC", "AB"));
//     printf("%d\n", ft_strcmp("AB", "AB"));
//     printf("%d\n", ft_strcmp("AB", "ABc"));
//     printf("%d\n", ft_strcmp("AB", "AAC"));
//     return (0);
// }