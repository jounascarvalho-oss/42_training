/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 19:56:48 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/08 20:21:16 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i; //dest index
    unsigned int j; //src index

    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] !='\0' && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}


int main(void)
{
    char str[50] = "Hehe Boyyy";
    char str1[] = "Fala agora agora Gohan";
    char str2[50] = "Hehe Boyyy";
    char str4[50] = "";
    char str5[] = "";
    char str6[50] = "";

    printf("FT: %s\n", ft_strncat(str, str1, 1));
    printf("OG: %s\n", strncat(str2, str1, 1));
    printf("FT: %s\n", ft_strncat(str4, str5, 5));
    printf("OG: %s\n", strncat(str6, str5, 5));
    return (0);
}