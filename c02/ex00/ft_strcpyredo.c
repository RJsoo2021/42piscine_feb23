
char *ft_strcpy(char *src, char *dest)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int main()
{
	char src[] = "list";
	char dest[50];

	printf("%s", ft_strcpy(src, dest));
}