#if !defined(TOKEN_H)
#define TOKEN_H
typedef struct token_struct
{
    enum
    {
        TOKEN_STR,
        TOKEN_PIPE,
        TOKEN_IN,
        TOKEN_OUT,
        TOKEN_HRDOC,
        TOEKN_APPEND
    }type;
    char *value;
}token_t;



token_t *init_token(int type, char *value);
#endif
