/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 21:29:40 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/07 21:53:51 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if(!(str[i] >= 97 && str[i] <= 122))
            return (0);
        i++;
    }
    return (1);
}

// int main(void)
// {
//     printf("%d", ft_str_is_lowercase("eh"));
//     printf("%d", ft_str_is_lowercase(""));
//     printf("%d", ft_str_is_lowercase("123"));
//     printf("%d", ft_str_is_lowercase("Heh"));
//     printf("%d", ft_str_is_lowercase("z a"));
//     return (0);
// }