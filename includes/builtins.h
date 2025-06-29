/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 23:44:20 by pleblond          #+#    #+#             */
/*   Updated: 2025/06/28 23:44:20 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "minishell.h"

// ft_echo
void	ft_echo(char **argv);
int		is_n_option(const char *arg);

// ft_pwd
void	ft_pwd(char **envp);

// ft_env
void	ft_env(char **envp);