/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:05:26 by gde-matt          #+#    #+#             */
/*   Updated: 2020/01/31 16:26:22 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_words(char const *s, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			words++;
		}
	}
	return (words);
}

char	**fill_cols(char **matrix, char const *s, char c)
{
	int row;
	int i;
	int letters;

	row = 0;
	i = 0;
	while (s[i] != '\0')
	{
		letters = 0;
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i] != '\0')
			{
				i++;
				letters++;
			}
			if (!(matrix[row] = (char *)malloc(letters * sizeof(char) + 1)))
				return (NULL);
			row++;
		}
	}
	return (matrix);
}

char	**fill_matrix(char **matrix, char const *s, char c)
{
	int row;
	int i;
	int col;

	row = 0;
	i = 0;
	while (s[i] != '\0')
	{
		col = 0;
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i] != '\0')
			{
				matrix[row][col] = s[i];
				col++;
				i++;
			}
			matrix[row][col] = '\0';
			row++;
		}
	}
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**mat;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	if (!(mat = (char **)malloc((words + 1) * sizeof(char*))))
		return (NULL);
	fill_cols(mat, s, c);
	fill_matrix(mat, s, c);
	mat[words] = 0;
	return (mat);
}
