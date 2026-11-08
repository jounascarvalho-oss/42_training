/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 20:45:30 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/06 23:40:05 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] != '\0' && i < n)// i < n because of cases where src > n. it will copy the whole src without this step
    {
        dest[i] = src [i];
        i++;
    }
    while (i < n)
        {
            dest[i] = '\0';
            i++;
        }
    return (dest);
}

int main(void)
{
    char a[50] = "asdfdhdjghhdfgf3245467887kfjcgffb";
    char b[50] = "asdfdhdjghhdfgf3245467887kfjcgffb";
    char str1[] = "ABCDEF";
    printf("ft: %s\n", ft_strncpy(a, str1, 20));
    printf("OG: %s\n", strncpy(b, str1, 20));
    

    return (0);
}