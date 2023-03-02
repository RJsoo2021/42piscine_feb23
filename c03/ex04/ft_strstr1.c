

char *ft_strstr(char *to_find, char *str)
{
	int i = 0;
	while (str[i])
	{
		int j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j] == '\0')
				return (to_find);
			j++;
		}
		i++;
	}
	return (0);
}

# include <stdio.h>
int main()
{
	char str[] = "ababac";
	char to_find[] = "abac";

	printf("%s", ft_strstr(to_find, str));
}