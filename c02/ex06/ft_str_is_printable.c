/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 21:43:13 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/07 21:53:36 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 32 && str[i] <= 126))
            return (0);
        i++;
    }
    return (1);
}

// int main (void)
// {
//     printf("%d\n", ft_str_is_printable(""));
//     printf("%d\n", ft_str_is_printable("s456./ T'`"));
//     printf("%d\n", ft_str_is_printable("\nasdFA234 "));
//     return (0);
// }