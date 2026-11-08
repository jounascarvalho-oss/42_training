/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 19:37:32 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/08 19:55:45 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char *ft_strcat(char *dest, char *src)
{
    int i; //dest index
    int j; //src index

    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

// int main(void)
// {
//     char str[50] = "Hehe Boyyy";
//     char str1[] = "Fala agora agora Gohan";
//     char str2[50] = "Hehe Boyyy";
//     char str3[] = "Fala agora agora Gohan";
//     char str4[50] = "";
//     char str5[] = "";

//     printf("FT: %s\n", ft_strcat(str, str1));
//     printf("OG: %s\n", strcat(str2, str3));
//     printf("FT: %s\n", ft_strcat(str4, str5));
//     printf("OG: %s\n", strcat(str4, str5));
//     return (0);
// }