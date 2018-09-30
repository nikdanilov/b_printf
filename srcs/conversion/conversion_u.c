/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 19:37:01 by ndanilov          #+#    #+#             */
/*   Updated: 2018/09/16 19:37:02 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	conversion_u(va_list arg)
{
	unsigned int n;

	n = va_arg(arg, unsigned int);
	ft_putstr(ft_itoa_base(n, 10));
}
