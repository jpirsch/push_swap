/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpirsch <jpirsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/05 17:02:32 by jpirsch           #+#    #+#             */
/*   Updated: 2015/09/28 19:02:13 by jpirsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!(alst))
		return ;
	if (!(*alst) || !(new))
		return ;
	new->next = (*alst);
	(*alst) = new;
}

void	ft_lstaddend(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!(alst))
		return ;
	if (!(*alst) || !(new))
		return ;
	tmp = (*alst);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
