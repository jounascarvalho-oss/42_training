/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:45:39 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/06 14:51:05 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// functions allowed: write()
#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_putstr("Fuja Gohan!");
    return (0);
}