/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dnm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:03:20 by mtemel            #+#    #+#             */
/*   Updated: 2022/04/06 17:12:17 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    static char *a;

    a = "5harf";

    printf("%s",a);

    //free(a);

    //printf("%s",a);

    return 0;
}
