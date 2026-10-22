/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-ubuntu <joao-ubuntu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:11:50 by joao-ubuntu       #+#    #+#             */
/*   Updated: 2026/09/29 17:22:45 by joao-ubuntu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

int	main(void)
{
	// we will only be reading a value, not writing into a var. So I send literal ints.
	ft_is_negative(-2);
	ft_is_negative(0);
	ft_is_negative(500);
	return (0);
}