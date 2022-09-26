/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:21:39 by amimouni          #+#    #+#             */
/*   Updated: 2022/09/25 19:21:40 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/token.h"
#include <stdlib.h>

token_t *init_token(int type, char *value)
{
    token_t *token;
    token = malloc(sizeof(token_t));
    token->type = type;
    token->value = value;
    return token;
}