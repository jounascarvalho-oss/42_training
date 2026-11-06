/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:23:12 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/06 14:31:38 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

// int main(void)
// {
//     int i;
//     int j;

//     i = 11;
//     j = 55;
//     printf("i antes = %d\nj antes = %d\n", i, j);
//     ft_swap(&i, &j);
//     printf("i depois = %d\nj depois = %d\n", i, j);
//     return (0);
// }
