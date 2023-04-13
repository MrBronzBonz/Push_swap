/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 08:59:40 by ebronzin          #+#    #+#             */
/*   Updated: 2023/04/13 14:30:28 by ebronzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

int main(int argc, char **argv)
{
	if (argc > 2)
	{
		if (!ps_checkarg(argv))
			return (0);
	}
	else
	{
		if (argc == 2)
			printf("qui ci andrá roba");
		else
			printf ("troppi pochi elementi");
	}
	return (1);
}
