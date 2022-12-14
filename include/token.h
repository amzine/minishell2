/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:21:43 by amimouni          #+#    #+#             */
/*   Updated: 2022/09/25 19:21:44 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(TOKEN_H)
#define TOKEN_H
typedef struct token_struct
{
    enum
    {
        TOKEN_ID = 1,
        TOKEN_STR,
        TOKEN_EQUAL,
        TOKEN_PIPE,
        TOKEN_IN,
        TOKEN_OUT,
        TOKEN_HRDOC,
        TOKEN_APPEND
    }type;
    char *value;
}token_t;



token_t *init_token(int type, char *value);
#endif
