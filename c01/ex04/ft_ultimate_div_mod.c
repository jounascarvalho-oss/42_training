/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:16:18 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/06 15:29:06 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int rmdr;
    
    div = *a / *b;
    rmdr = *a % *b;

    *a = div;
    *b = rmdr;
}

// int main(void)
// {
//     int i;
//     int j;

//     i = 41;
//     j = 10;
//     ft_ultimate_div_mod(&i, &j);
//     printf("i = %d\nj = %d\n", i, j); // output: i = 4 \n j = 1
//     return (0);
// }