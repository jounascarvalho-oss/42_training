/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:55:08 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/06 11:15:05 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int n;

    n = 5;
    printf("Antes: %d\n", n);
    ft_ft(&n);
    printf("depois: %d\n", n);
    return (0);
}