/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_more.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:31:16 by ebronzin          #+#    #+#             */
/*   Updated: 2023/04/13 14:28:18 by ebronzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

int ps_isdouble(char *a, char *b)
{
	int i;
	int j;

	i = 0;
	j = 0;

	if(a[i] == '+' && b[j] != '+')
	{
		i++;
	}
	else
	{
		if (b[j] == '+')
			j++;
	}
	while (a[i] != '\0' && b[j] != '\0' && a[i] == b[j])
	{
		i++;
		j++;
	}
	return ((unsigned char)a[i] - (unsigned char)b[j]);
}
