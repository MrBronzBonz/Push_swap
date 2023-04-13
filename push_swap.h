/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:05:22 by ebronzin          #+#    #+#             */
/*   Updated: 2023/04/13 11:49:27 by ebronzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>

/*struct s_stacks {
	int	stacka;
	int	stackb;
	int	top1;
	int	top2;
};*/

int	ps_checkarg(char **argv);
int ps_isdouble(char *a, char *b);
#endif
