/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 22:08:28 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/08 12:54:25 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
        i++;
    }
    return (str);
}

// int main(void)
// {
//     char str[] = "";
//     char str1[] = "aASDFDFDSGdsSDFf s123daASDdas";
//     printf("%s\n", ft_strlowcase(str));
//     printf("%s\n", ft_strlowcase(str1));
//     return (0);
// }