/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_tests.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:20:27 by cyril             #+#    #+#             */
/*   Updated: 2024/06/01 16:00:46 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "push_swap.h"

int init_suite(void);
int clean_suite(void); 
int add_lists_tests(void);
int add_instructions_tests(void);
int add_index_tests(void);
int add_sort_tests(void);
int add_parsing_tests(void);
