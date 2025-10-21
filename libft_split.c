#include "push_swap.h"
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i++] = s[start++];
	}
	sub[i] = '\0';
	return (sub);
}

static int	ft_word_long(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	ft_word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char **ft_free(char **new)
{
    int i = 0;
    if (!new)
        return (NULL);
    while (new[i])
        free(new[i++]);
    free(new);
    return (NULL);
}
   

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	i;
	int		j;

	new = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			new[j] = ft_substr(s, i, ft_word_long(s + i, c));
			if (!new[j])
				return (ft_free(new));
			i = i + ft_word_long(s + i, c);
			j++;
		}
	}
	new[j] = NULL;
	return (new);
}
