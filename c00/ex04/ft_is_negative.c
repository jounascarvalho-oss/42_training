/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:46:20 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/05 14:11:14 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//allowed funtions: write()
#include <unistd.h>

void ft_is_negative(int n)
{
    if (n >= 0)
        write(1, "P\n", 2);
    else
        write(1, "N\n", 2);
}

int main(void)
{
    ft_is_negative(42);
    ft_is_negative(0);
    ft_is_negative(-32456789);
    return (0);
}