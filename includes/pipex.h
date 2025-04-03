/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:49:24 by tlize             #+#    #+#             */
/*   Updated: 2025/04/03 18:27:57 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/wait.h>
# include <unistd.h>
# include "libft.h"

int		main(int argc, char **argv, char **envp);
void	exec_pipe(char *argv, char **envp);
void	print_error(char *s);
void	check_all(int argc, char **argv);

#endif
