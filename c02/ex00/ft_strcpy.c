/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 18:51:18 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/06 20:44:46 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src [i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

// int main(void)
// {
//     char str[70] = "ABCDEFGgsdgGH";
//     char str1[] = "____?sfddg35465urj67tk34wsgr";
//     printf("ft: %s\n", ft_strcpy(str, str1));
//     printf("OG: %s\n", strcpy(str, str1));

//     return (0);
// }
