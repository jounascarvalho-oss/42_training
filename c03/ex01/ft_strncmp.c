/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 18:10:43 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/08 19:55:59 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while ((i < n - 1 && s1[i] != '\0') && (s1[i] == s2[i]))
        i++;
    return (s1[i] - s2[i]);
}

// int main(void)
// {
//     printf("%d\n", ft_strncmp("ABC", "AAC", 2));
//     printf("%d\n", ft_strncmp("ABCD", "ABCDE", 5));
//     printf("%d\n", ft_strncmp("ABC", "AAC", 1));

//     return (0);
// }