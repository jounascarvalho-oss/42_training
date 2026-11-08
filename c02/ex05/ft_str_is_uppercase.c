/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 21:37:17 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/07 21:53:43 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 65 && str[i] <= 90))
            return (0);
        i++;
    }
    return (1);
}

// int main(void)
// {
//     printf("%d\n", ft_str_is_uppercase("ehE"));
//     printf("%d\n", ft_str_is_uppercase("HAHA"));
//     printf("%d\n", ft_str_is_uppercase(""));
//     printf("%d\n", ft_str_is_uppercase("3h3"));
//     printf("%d\n", ft_str_is_uppercase("eh "));
//     return (0);
// }