/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:32:22 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/06 14:44:56 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;

}

// int main(void)
// {
//     int div, mod;
    
//     div = 17;
//     mod = -4;
//     printf("div antes = %d\nmod antes = %d\n", div, mod);
//     ft_div_mod(41, 10, &div, &mod);
//     printf("div depois = %d\nmod depois = %d\n", div, mod);
//     return (0);
// }