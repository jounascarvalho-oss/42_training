/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:55:11 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/05 13:03:33 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//functions allowed: write()

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

/*int main(void)
{
    char c;

    c = 67; //using ascii values for funzies. 67 = 'C'
    ft_putchar(c);
    return (0);
}*/
