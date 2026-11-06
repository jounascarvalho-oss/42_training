/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:15:45 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/05 13:21:40 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Allowed functions: write

void ft_print_reverse_alphabet(void)
{
    char c;

    c = 122; // ascii again. 122 = 'z'
    while (c >= 'a') //and here using the char instead of the ascii
    {
        write(1, &c, 1);
        c--;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}