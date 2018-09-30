/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 19:36:45 by ndanilov          #+#    #+#             */
/*   Updated: 2018/09/16 19:36:46 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	conversion_p(va_list arg)
{
	char	*str;

	str = ft_itoa_base(va_arg(arg, long long int), 16);
	ft_putstr("0x");
	ft_putstr(str);
}
