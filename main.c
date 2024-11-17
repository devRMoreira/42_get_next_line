/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:18:13 by rimagalh          #+#    #+#             */
/*   Updated: 2024/11/17 12:57:33 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>


int main(void)
{
    int     fd;
    char    *fn = "test.txt";
    char    *buffer;
    fd = open(fn, O_RDONLY);
    if (fd == -1)
        return (0);
    buffer = get_next_line(fd);
    printf("%s", buffer);
	buffer = get_next_line(fd);
    printf("%s", buffer);
	buffer = get_next_line(fd);
    printf("%s", buffer);
	close(fd);
    buffer = get_next_line(fd);
    printf("[%s]", buffer);
	buffer = get_next_line(fd);
    printf("[%s]", buffer);
	buffer = get_next_line(fd);
    printf("[%s]", buffer);
	fd = open (fn, O_RDONLY);
	buffer = get_next_line(fd);
    printf("%s", buffer);
	buffer = get_next_line(fd);
    printf("%s", buffer);
    buffer = get_next_line(fd);
    printf("%s", buffer);
    buffer = get_next_line(fd);
    printf("%s", buffer);
    buffer = get_next_line(fd);
    printf("%s", buffer);
    close(fd);
    free (buffer);
    return (0);
}
