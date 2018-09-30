/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 19:36:52 by ndanilov          #+#    #+#             */
/*   Updated: 2018/09/16 19:36:53 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	conversion_s(va_list arg)
{
	char	*s;

	s = va_arg(arg, char *);
	if (s != NULL)
		ft_putstr(s);
	else
		ft_putstr("(null)");
}
