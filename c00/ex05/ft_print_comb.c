/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:17:17 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/11/05 14:46:55 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//allowed functions: write()
#include <unistd.h>

void ft_print_chars(char a, char b, char c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
    if (a != '7' || b != '8' || c != '9')
        write(1, ", ", 2);
    else
        write(1, "\n", 1);
}

void ft_print_comb(void)
{
    int a; //1st num
    int b; //2nd num
    int c; //3rd num

    a = '0';
    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')
        {
            c = b + 1;
            while (c <= '9')
            {
                ft_print_chars(a, b, c);
                c++;
            }
            b++;
        }
        a++;    
    }
}

int main(void)
{
    ft_print_comb();
    return (0);
}
