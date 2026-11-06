/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:35:29 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/06 18:47:20 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i; // initial int of the array
    int f; // final int of the array
    int temp;
    
    i = 0;
    f = size - 1; // final int positioned in the array
    while (&tab[i] < &tab[f]) // while (i < f) also works - because the index is the position in the array.
    {
        temp = tab[f];
        tab[f] = tab [i];
        tab [i] = temp;
        i++;
        f--;
    }    
}

// int main(void)
// {
//     int i;
//     int tab[] = {11, 22, 33, 44, 555};

//     i = 0;
//     ft_rev_int_tab(tab, 5);
//     while (i < 5)
//     {
//         printf("%d ", tab[i]);
//         i++;
//     }
//     printf("\n");
//     return (0);
// }