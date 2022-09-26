/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:40:14 by amimouni          #+#    #+#             */
/*   Updated: 2022/09/25 22:08:31 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"include/AST.h"
#include <stdlib.h>
ast_t *init_ast(int type)
{
    ast_t* ast;
    ast = malloc(sizeof(ast_t));
    ast->type = type;
    ast->var_def_name = (void*) 0;
    ast->var_def_value = (void*) 0;
    ast->var_name = (void*) 0;
    ast->func_call_name = (void*) 0;
    ast->fun_call_arg = (void*) 0;
    ast->func_call_arg_size = 0;
    ast->string_value = (void*) 0;
    return ast;
}