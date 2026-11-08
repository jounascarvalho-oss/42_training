/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 21:20:02 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/07 21:53:58 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 48 && str[i] <= 57))
            return (0);
        i++;
    }
    return (1);
}

// int main(void)
// {
//     printf("%d", ft_str_is_numeric("Heh"));
//     printf("%d", ft_str_is_numeric(""));
//     printf("%d", ft_str_is_numeric("123"));
//     printf("%d", ft_str_is_numeric("H3h"));
//     printf("%d", ft_str_is_numeric("0 "));
//     return (0);
// }