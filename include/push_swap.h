/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:15:43 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/09/08 18:36:38 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*
**                              HEADERS
*/
# include "../libft/libft.h"
# include <stddef.h>
# include <stdlib.h> //malloc,free, exit + rand
# include <string.h> //strerror
# include <unistd.h> //read, write
# include <stdbool.h> // for bool
# include <limits.h>
/*
**                              CONSTANTS
*/
# define SA 1
# define SB 2
# define PA 3
# define PB 4
# define RA 5
# define RB 6
# define RRA 7
# define RRB 8

typedef struct s_stack
{
    int nbr;
    int idx;
    int pcost;    
    bool cheap;
    bool abobe_median;

    struct s_stack  *next;
    struct s_stack  *prev; 
}   t_stack;


/*
**                              PROTOTYPES
*/


//erros
int error_syntax(char *str_nbr);
int error_nbr_repet(t_stack *a, int nbr);
void ft_error(t_stack **a);

//free
void free_stack(t_stack **stack);

//stack
void stack_init(t_stack **a, char **av);


//list funcitions
t_stack	*stack_new(int content);
t_stack	*ft_stack_new(void *content);
t_stack	*stack_new_node(t_stack *node, int content);

//utils
long	ft_atol(const char *str);
void	print_stacks(t_stack *stack1, t_stack *stack2);

#endif