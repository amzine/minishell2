#include "libft/libft.h"
#include "include/lexer.h"
#include <stdlib.h>
lexer_t *init_lexer(char *contents)
{
    lexer_t *lexer = malloc(sizeof(struct lexer));
    lexer->content = contents;
    lexer->i = 0;
    lexer->c = contents[lexer->i];
    return lexer;
}

void    lexer_advance(lexer_t *lexer)
{
    if (lexer->c != '\0' && lexer->i < ft_strlen(lexer->content))
    {
        lexer->i += 1;
        lexer->c = lexer->content[lexer->i];
    }
}

void    lexer_skip_whitespace(lexer_t *lexer)
{
    while (lexer->c == ' ' || lexer->c == 10)
    {
        lexer_advance(lexer);
    }
}

token_t *lexer_get_next_token(lexer_t *lexer)
{
    while (lexer->c != '\0' && lexer->i < ft_strlen(lexer->content))
    {
        if (lexer->c == ' ' || lexer->c == 10)
            lexer_skip_whitespace(lexer);
        if (lexer->c == '"')
        {
            return lexer_collect_string(lexer);
        }
            
        if (lexer->c == '=')
        {
            return lexer_advance_with_token(lexer ,init_token(TOKEN_EQUAL ,lexer_get_current_char_as_string(lexer)));
        }
        if (lexer->c == '|')
        {
            return lexer_advance_with_token(lexer, init_token(TOKEN_PIPE, lexer_get_current_char_as_string(lexer)));
        }
        if (lexer->c == '<')
        {
            return lexer_advance_with_token(lexer, init_token(TOKEN_IN , lexer_get_current_char_as_string(lexer)));
        }
        if (lexer->c == '>')
        {
            return lexer_advance_with_token(lexer, init_token(TOKEN_OUT , lexer_get_current_char_as_string(lexer)));
        }
    }
    

}
token_t *lexer_collect_id(lexer_t *lexer)
{
   
}

token_t *lexer_collect_string(lexer_t *lexer)
{
    char *value;
    char *s;
    lexer_advance(lexer);
    value = malloc(sizeof(char));
    value[0] = '\0';

    while (lexer->c != '"')
    {
        s = lexer_get_current_char_as_string(lexer);
        value = malloc(sizeof(char) * ft_strlen(value) + ft_strlen(s) + 1);
        ft_strcat(value, s);
    }
    lexer_advance(lexer);
    return init_token(TOKEN_STR, value);
}


token_t *lexer_advance_with_token(lexer_t *lexer, token_t * token)
{
    lexer_advance(lexer);

    return(token);
}



char *lexer_get_current_char_as_string(lexer_t *lexer)
{
    char *str = malloc(sizeof(char) * 2);
    str[0] = lexer->c;
    str[1] = '\0';

    return str;
}