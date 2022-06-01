/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4__nums.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaman-s < imaman-s@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:55:17 by imaman-s          #+#    #+#             */
/*   Updated: 2022/05/29 14:55:24 by imaman-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_4_nums(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	int		max;

	max = info->sorted_arr[0];
	if (stack_a->f_element->num == max)
		push(stack_a, stack_b, "pb");
	else if (stack_a->f_element->next->num == max)
	{
		rotate(stack_a, "ra");
		push(stack_a, stack_b, "pb");
	}
	else if (stack_a->f_element->next->next->num == max)
	{
		reverse_rotate(stack_a, "rra");
		reverse_rotate(stack_a, "rra");
		push (stack_a, stack_b, "pb");
	}
	else if (stack_a->f_element->next->next->next->num == max)
	{
		reverse_rotate(stack_a, "rra");
		push (stack_a, stack_b, "pb");
	}
	sort_3_nums(stack_a);
	push(stack_b, stack_a, "pa");
}
