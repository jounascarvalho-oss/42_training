/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 11:41:06 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/08 12:25:05 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_alphanum(char c)
{
    return((c >= '0' && c <= '9')
        || (c >= 'A' && c <= 'Z')
        || (c >= 'a' && c <= 'z'));
}

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!((str[i] >= '0' && str[i] <= '9')
        || (str[i] >= 'A' && str[i] <= 'Z')
        || (str[i] >= 'a' && str[i] <= 'z')))
            i++;
            
        else
            i++;
    }
    return (str);
}

int main(void)
{
    char str[] = "hi, hoW aRe you? 42w0Rds fORTY-two; fifty+and+one";
    printf("%s", ft_strcapitalize(str));
    return (0);
}