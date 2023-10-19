/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:23:44 by sasalama          #+#    #+#             */
/*   Updated: 2023/01/12 14:33:43 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	in_dred_finder(int	*tak)
{
	int	i;

	i = 0;
	while (tak[i] >= 0)
	{
		if (tak[i] == 1)
			return (1);
		i++;
	}
	return (0);
}

void	ft_not_built2(t_general_data *gen_data)
{
	if (gen_data->n_pipes == 0)
	{
		gen_data->sort[0] = '1';
		gen_data->sort[1] = '\0';
	}
}

void	reset_table_pipes(int *t)
{
	t[0] = 0;
	t[1] = 0;
}
