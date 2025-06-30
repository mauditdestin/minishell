/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:54:16 by pleblond          #+#    #+#             */
/*   Updated: 2025/06/30 11:54:16 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_shell *shell(char **envp)
{
	t_shell *shell;

	shell = malloc(sizeof(t_shell));
	if (!shell)
	{
		ft_putstr_fd("Error allocation shell structure.", 2);
		exit(EXIT_FAILURE);
	}
	shell->envp = envp;
	shell->cmd = NULL;
	shell->exit_code = 0;
	return (shell);
}