#include "get_next_line.h"

void	free_null(char **ptr)
{
	if (*ptr != NULL)
	{
		free(*ptr);
		ptr = NULL;
	}
}

char	*read_sort (int new_line_position, char **tmp)
{
	char	*res;
	char	*hold;

	if (new_line_position <= 0)
	{
		if (**tmp == '\0')
		{
			free (*tmp);
			*tmp = NULL;
			return (NULL);
		}
		res = *tmp;
		*tmp = NULL;
		return (res);
	}
	hold = ft_substr(*tmp, new_line_position, BUFFER_SIZE);
	res = *tmp;
	res[new_line_position] = 0;
	*tmp = hold;
	return(res);
}

char	*read_content(int fd, char *content, char **tmp)
{
	size_t	num_bytes;
	char	*new_line;
	char	*hold;
	
	new_line = ft_strchr(*tmp, '\n');
	hold = NULL;
	num_bytes = 0;
	while (new_line == NULL)
	{
		num_bytes = read(fd, content, BUFFER_SIZE);
		if (!num_bytes)
		{
			return (read_sort(num_bytes, tmp));
		}
		content[num_bytes] = '\0';
		hold = ft_strjoin(*tmp, content);
		free(*tmp);
		*tmp = hold;
		new_line = ft_strchr(*tmp, '\n');
	}
	return (read_sort(new_line - *tmp + 1, tmp));
}

char	*get_next_line(int fd)
{
	char		*read_content_return;
	char		*reservoir;
	static char *tmp[256 + 1];
	
	if (fd < 0 || BUFFER_SIZE <= 0 || fd > (256 + 1))
	{
	return (NULL);
	}
	reservoir = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (reservoir == NULL)
	{
		return (NULL);
	}
	if (tmp[fd] == NULL)
	{
		tmp[fd] = ft_strdup("");
	}
	read_content_return = read_content(fd, reservoir, &tmp [fd]);
	free_null(&reservoir);
	return (read_content_return);
}
