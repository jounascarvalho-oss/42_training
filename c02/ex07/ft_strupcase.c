/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 21:54:44 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/07 22:07:28 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
        i++;
    }
    return (str);
}

// int main(void)
// {
//     char str[] = "";
//     char str1[] = "asdfdsf s123daASDdas";
//     printf("%s\n", ft_strupcase(str));
//     printf("%s\n", ft_strupcase(str1));
//     return (0);
// }