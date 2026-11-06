/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:51:58 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/06 15:09:29 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int ft_strlen(char *str)
{
    int strlen;

    strlen = 0;
    while (*str != '\0')
    {
        str++;
        strlen++;
    }
    return (strlen);
}

// int main(void)
// {
//     printf("%d\n", ft_strlen("Fuja Gohan!"));
//     printf("%d\n", ft_strlen("123423546789087876543245678654"));
//     printf("%d\n", ft_strlen(""));
//     return (0);
// }