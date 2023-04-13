/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:01:48 by ebronzin          #+#    #+#             */
/*   Updated: 2023/04/13 14:28:22 by ebronzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

int ps_checkdouble(char **mtrx)
{
	int i;
	int j;

	i = 1;

	while (mtrx[i])
	{
		j = 1;
		while (mtrx[j])
		{
			if ( j != i && ps_isdouble(mtrx[i], mtrx[j]) == '0')
				printf("errore presenza numeri doppi");
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ps_checkarg(char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while(argv[i][j] != '\0')
			{
				if(!((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == ' ' ||
				argv[i][j] == '-' || argv[i][j] == '+' || argv[i][j] == '\0'))
				{
					printf("errore presenza argomenti non numerici");
					return (0);
				}
				else
					j++;
			}
		i++;
		j = 0;
	}
	if (!ps_checkdouble(argv))
	{
		printf("niente doppioni");
		return (0);
	}
	printf("tutto ok");
	return (1);
}
