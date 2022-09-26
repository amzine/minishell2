#if !defined(AST_H)
#define AST_H

typedef struct ast_struct
{
    enum
    {
        AST_VARIABLE_DEF =  1,
        AST_VARIABLE,
        AST_STR,
        AST_fUN_CALL,
        AST_COMPOUND
    }type;

    char *var_def_name;
    struct AST_STRUCT* var_def_value;
    char *var_name;

    char *func_call_name;
    ast_t **fun_call_arg;
    int func_call_arg_size;
    char string_value;
    ast_t **compound_value;
    int compound_size;
}ast_t;
ast_t *init_ast(int type);

#endif
