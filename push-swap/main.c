/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 04:39:23 by marvin            #+#    #+#             */
/*   Updated: 2024/11/12 04:39:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a; //pointer stack A
	t_stack_node	*b; //pointer stack B

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0])) //check argument count (2 ou mais) (primeiro arg -> nome do executavel; segundo argument -> numero)
		return (1);
	else if (argc == 2) //segundo argumento deve ser string, entao chamamos o split para extrair os numeros da string
		argv = split(argv[1], ' ');
	init_stack_a(&a, argv + 1); //argv + 1 porque queremos comecar do segundo argumento porque o primeiro é o nome do programa
	if (!stack_sorted(a)) //verificamos se esta organizado, e se nao usamos o algoritmo
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sort_stacks(&a, &b);
	}
	free_stack(&a); //limpamos o stack
	return (0);