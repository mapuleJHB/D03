/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapule <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 13:36:48 by mapule            #+#    #+#             */
/*   Updated: 2020/07/12 16:03:59 by mapule           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
 
 void	ft_ultimate_div_mod(int *a, int *b);

 int *m;
 int *n;

{
	*m= *a;
	*a= *m/ *b;
	*n= *b;
	*b= *m/ *n;
}
