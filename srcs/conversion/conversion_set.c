/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 16:35:48 by ndanilov          #+#    #+#             */
/*   Updated: 2018/09/16 16:35:50 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"

void	conversion_set(char c, va_list arg)
{
	int		i;
	char	*cnv_characters;
	void	(*cnv_functions[9])(va_list);

	cnv_characters = "scdipoux%";
	cnv_functions[0] = &conversion_s;
	cnv_functions[1] = &conversion_c;
	cnv_functions[2] = &conversion_d;
	cnv_functions[3] = &conversion_i;
	cnv_functions[4] = &conversion_p;
	cnv_functions[5] = &conversion_o;
	cnv_functions[6] = &conversion_u;
	cnv_functions[7] = &conversion_x;
	cnv_functions[8] = &conversion_percent;
	i = 0;
	while (cnv_characters[i])
	{
		if (cnv_characters[i] == c)
			cnv_functions[i](arg);
		i++;
	}
}
