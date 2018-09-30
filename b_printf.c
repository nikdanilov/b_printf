/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 16:34:44 by ndanilov          #+#    #+#             */
/*   Updated: 2018/09/19 17:01:35 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "global.h"
#include "conversion.h"

int		run(const char *str, va_list arg)
{
	int		i;

	i = 0;
	while (str[i])
	{
		while (str[i] != '\0' && str[i] != '%')
			ft_putchar(str[i++]);
		if (str[i] == '%')
		{
			i++;
			while (str[i] == ' ')
				i++;
			if (str[i] == '\0')
				return (g_strlen);
			conversion_set(str[i++], arg);
		}
	}
	return (0);
}

int		b_printf(const char *restrict format, ...)
{
	va_list	arg;

	g_strlen = 0;
	va_start(arg, format);
	run(format, arg);
	va_end(arg);
	return (g_strlen);
}
