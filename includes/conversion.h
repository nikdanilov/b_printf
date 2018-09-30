/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 16:35:31 by ndanilov          #+#    #+#             */
/*   Updated: 2018/09/19 17:03:02 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H

# include <stdarg.h>

void	conversion_set(char c, va_list arg);
void	conversion_s(va_list arg);
void	conversion_c(va_list arg);
void	conversion_d(va_list arg);
void	conversion_i(va_list arg);
void	conversion_p(va_list arg);
void	conversion_o(va_list arg);
void	conversion_u(va_list arg);
void	conversion_x(va_list arg);
void	conversion_percent(va_list arg);

#endif
