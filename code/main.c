#include <stdio.h>
#include <string.h>

int ft_strlen(const char *str);
int ft_strcmp(char *dst, char *str);
char *ft_strcpy(char *dst, char *str);
char *ft_strdup(char *str);
ssize_t ft_write(int fd, char *cbuf, ssize_t nbyte);

int	main(void)
{
	char	s2[] = "Hola buenas";
	char	s1[] = "Hola que tal";
	char *i;

	/*printf("\033[0;32m[*] Strcpy [*]\033[0m\n");
	printf("S1: %s\n", s1);
	printf("S2: %s\n", s2);
	printf("Cpy S1 to S2...\n");
	i = ft_strdup(s2, s1);
	printf("i: %s\n", i);
	return 0;*/
	i = ft_strdup(s2);
	printf("%s", i);
}