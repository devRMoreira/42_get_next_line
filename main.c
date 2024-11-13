/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:18:13 by rimagalh          #+#    #+#             */
/*   Updated: 2024/11/13 17:30:53 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"
#include <stdio.h>

int main()
{
	int fd = open("test.txt", O_RDONLY | O_CREAT);
	char *toprint;
	int times;

	if(fd < 0)
	{
		printf("error");
		return (1);
	}
	times = 0;
	toprint = get_next_line(fd);
	while(toprint != NULL)
	{
		printf("%d - ", times);
		printf("%s", toprint);
		toprint = get_next_line(fd);
		times++;
	}
	free(toprint);
	close(fd);
	return (0);
}
