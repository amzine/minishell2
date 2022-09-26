/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:43:23 by amimouni          #+#    #+#             */
/*   Updated: 2022/09/26 21:53:38 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/parser.h"
#include <stdio.h>
#include "libft/libft.h"

parse_t *initparser(lexer_t *lexer)
{
    parse_t *parser;
    
    parser = malloc(sizeof(parse_t));
    parser->lexer = lexer;
    parser->current_tok = lexer_get_next_token(lexer);
    
    return parser;
    
}
void *parser_expect(parse_t *parser,int token_type)
{
    if (parser->current_tok->type == token_type)
        parser->current_tok = lexer_get_next_token(parser->lexer);
    else
        printf("unexpected token '%s', whith type %d",parser->current_tok->value, parser->current_tok->type);
    exit(1);    
    
}
ast_t *parser_parse(parse_t *parser)
{
    return parser_statment(); 
}
ast_t *parser_statment(parse_t *paser)
{
     
}
ast_t *parser_list_statment(parse_t *parser)
{
    ast_t *compound;
    ast_t *ast_statment;
    compound = init_ast(AST_COMPOUND);
    compound->compound_value = malloc(sizeof(ast_t *));
    ast_statment = parser_statment(parser);
    compound->compound_value[0] = ast_statment;
   
    while (parser->current_tok->type == TOKEN_STR)
    {
        parser_expect(parser, TOKEN_STR);
        ast_statment = parser_statment(parser);
        compound->compound_size += 1;
        compound->compound_value = malloc(sizeof(ast_t *) * compound->compound_size);
        compound->compound_value[compound->compound_size - 1] = ast_statment;
    }
    
}
ast_t *parser_expr(parse_t *parser)
{
    
}
ast_t *parseR_factor(parse_t *parser)
{
    
}
ast_t *parser_term(parse_t *parser)
{
    
}
ast_t *parser_func_call(parse_t *parser)
{
    
}
ast_t *paser_variable(parse_t *parser)
{
    
}
ast_t *parser_string(parse_t *parser)
{
    
}
ast_t *parser_id(parse_t *parser)
{
    if (ft_strcmp(parser->current_tok->value,"")
    {
        
    }
    

}
