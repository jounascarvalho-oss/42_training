/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 19:28:36 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/07 21:19:30 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)))
            return (0);
        i++;
    }
    return (1);
}

// int main(void)
// {
//     printf("%d\n", ft_str_is_alpha("Gohan"));
//     printf("%d\n", ft_str_is_alpha("Fuja Gohan!"));
//     printf("%d\n", ft_str_is_alpha(""));
//     printf("%d\n", ft_str_is_alpha("1234"));
//     return (0);
// }