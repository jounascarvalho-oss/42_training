/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:22:58 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/05 13:44:23 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//allowed functions: write()
#include <unistd.h>

void ft_print_numbers(void)
{
    char n; //why char? because the function write doesn't use ints
   
    n = '0';
    while (n <= '9')
    {
        write(1, &n, 1);
        n++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_numbers();
    return (0);
}