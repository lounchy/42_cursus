/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:57:18 by dbelinsk          #+#    #+#             */
/*   Updated: 2019/11/06 16:29:51 by dbelinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					is_max_len(int neg, int *count)
{
	if (*count == 20 && neg < 0)
		*count = 0;
	else if (*count == 20 && neg > 0)
		*count = -1;
	else
		*count += 1;
	return (*count);
}

int					is_neg(char c)
{
	if ((c < '0' || c > '9') && c != '-' && c != '+')
		return (0);
	else if (c == '-')
		return (-1);
	else
		return (1);
}

int					ft_atoi(const char *str)
{
	int			neg;
	int			res;
	int			count;

	res = -1;
	while (*str == '\t' || *str == '\n' || *str == '\v' ||
			*str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if ((neg = is_neg(*str)) == -1 || *str == '+')
		str++;
	if (*str < '0' || *str > '9')
		return (0);
	count = 0;
	while (*str && *str >= '0' && *str <= '9')
	{
		if (res == -1)
			res = *str - '0';
		else
			res = res * 10 + *str - '0';
		str++;
		if (is_max_len(neg, &count) < 1)
			return (count);
	}
	return (res * neg);
}
