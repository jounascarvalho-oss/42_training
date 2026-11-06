/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:07:26 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/05 13:14:17 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//functions allowed: write()

void ft_print_alphabet(void)
{
    char c;

    c = 'a';
    while (c <= 'z')
    {
        write(1, &c, 1);
        c++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_alphabet();
    return (0);
}
