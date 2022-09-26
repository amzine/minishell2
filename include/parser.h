#if !defined(PARSER_H)
#define PARSER_H

# include "lexer.h"
# include "AST.h"
# include <stdlib.h>
typedef struct parser_struct
{
    lexer_t *lexer;
    token_t *current_tok;
}parse_t;

parse_t *initparser(lexer_t *lexer);
void *parser_expect(parse_t *parser,int token_type);
ast_t *parser_parse(parse_t *parser);
ast_t *parser_statment(parse_t *paser);
ast_t *parser_list_statment(parse_t *parser);
ast_t *parser_expr(parse_t *parser);
ast_t *parseR_factor(parse_t *parser);
ast_t *parser_term(parse_t *parser);
ast_t *parser_func_call(parse_t *parser);
ast_t *paser_variable(parse_t *parser);
ast_t *parser_var_def(parse_t *parser);
ast_t *parser_string(parse_t *parser);
ast_t *parser_id(parse_t *parser);

#endif 
