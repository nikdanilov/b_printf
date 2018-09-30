/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_printf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 16:35:19 by ndanilov          #+#    #+#             */
/*   Updated: 2018/09/19 17:25:21 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putnbr(int nbr);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_itoa_base(long long value, int base);

#endif
