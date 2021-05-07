#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

size_t ft_strlen(const char *str);
int ft_strcmp(char *dst, char *str);
char *ft_strcpy(char *dst, char *str);
char *ft_strdup(char *str);
int ft_write(int fd, char *cbuf, ssize_t nbyte);
int ft_read(int fildes, void *buf, size_t nbyte);

int	main(void)
{
	char	s[] = "Hola buenas";
	char	ls[] = "/l4KlhDg6JMI+djNN5JaciFYYLhif2ymwHCtaZFxM9ZS7N4/sAmQlVeW2qjhzmGJLXdN4ZKg7tJwUAZaTbW1xuawhXJtEezXAPbINVre30g3F1E99HNg/+WnQJrAqR1mC1elI47JLnXFgVPU1yLEvLsAW2N4K2SRoxmmB4oFsni+uyBdYME2Efjb2qgdQwdSMc0SXusQfZ35r6eJB+JuvkPR6bbvb1MQjBrQNlF+URCqlwShyQ3cv0NdluIH0kVKfuUslseUCpA/QPMhclFTk8xmxaFmnUrUg9vA4AtKchzEzU9z7/9kDwJKvN/BIP0lYjNaqg4FL6dI6xZZt";
	char	es[] = " ";
	char *mem;
	char *i;
	int j;
	int fd;
	char *aux;
	char *aux2;


	printf("\n\t\033[0;33m- [*] LIBASM TEST [*] -\033[0m\n\n");


	// STRLEN TEST
	printf("  \033[0;35m[*] Strlen [*]\033[0m \033[0;36m---->\033[0m");

	(ft_strlen(s) == strlen(s)) ? printf(" \033[0;32m[OK]\033[0m") : printf(" \033[0;31m[KO]\033[0m");
	(ft_strlen(ls) == strlen(ls)) ? printf("\033[0;32m[OK]\033[0m") : printf("\033[0;31m[KO]\033[0m");
	(ft_strlen(es) == strlen(es)) ? printf("\033[0;32m[OK]\033[0m\n\n") : printf("\033[0;31m[KO]\033[0m\n\n");

	/*printf("\033[0;36m-[Ft_strlen]\033[0m\n\n");
	printf("'%s' = %lu\n", s, ft_strlen(s));
	printf("'%s' = %lu\n", ls, ft_strlen(ls));
	printf("'%s' = %lu\n\n", es, ft_strlen(es));

	printf("\033[0;36m-[Strlen]\033[0m\n\n");
	printf("'%s' = %lu\n", s, strlen(s));
	printf("'%s' = %lu\n", ls, strlen(ls));
	printf("'%s' = %lu\n\n", es, strlen(es));*/

	
	// STRCPY TEST
	printf("  \033[0;35m[*] Strcpy [*]\033[0m \033[0;36m---->\033[0m");

	(ft_strcpy(ls, s) == strcpy(ls, s)) ? printf(" \033[0;32m[OK]\033[0m") : printf(" \033[0;31m[KO]\033[0m");
	(ft_strcpy(s, ls) == strcpy(s, ls)) ? printf("\033[0;32m[OK]\033[0m") : printf("\033[0;31m[KO]\033[0m");
	printf("\033[0;32m[42]\033[0m\n\n");

	//printf("\033[0;36m-[Ft_strcpy]\033[0m\n\n");

	//printf("\033[0;36m-[Strcpy]\033[0m\n\n");

	// STRCMP TEST
	printf("  \033[0;35m[*] Strcmp [*]\033[0m \033[0;36m---->\033[0m");

	/*printf("\033[0;36m-[Ft_strcmp]\033[0m\n\n");
	printf("'%s' , '%s'= %d\n", s, ls, ft_strcmp(s, ls));
	printf("'%s' , '%s'= %d\n", s, s, ft_strcmp(s, s));
	printf("'%s' , '%s'= %d\n", es, s, ft_strcmp(s, es));

	printf("\033[0;36m-[Strcmp]\033[0m\n\n");
	printf("'%s' , '%s'= %d\n", s, ls, strcmp(s, ls));
	printf("'%s' , '%s'= %d\n", s, s, strcmp(s, s));
	printf("'%s' , '%s'= %d\n", es, s, strcmp(s, es));*/

	(ft_strcmp(s, ls) == strcmp(s, ls)) ? printf(" \033[0;32m[OK]\033[0m") : printf(" \033[0;31m[KO]\033[0m");
	(ft_strcmp(s, s) == strcmp(s, s)) ? printf("\033[0;32m[OK]\033[0m") : printf("\033[0;31m[KO]\033[0m");
	(ft_strcmp(s, es) == strcmp(s, es)) ? printf("\033[0;32m[OK]\033[0m\n\n") : printf("\033[0;31m[KO]\033[0m\n\n");

	// STRDUP TEST
	printf("  \033[0;35m[*] Strdup [*]\033[0m \033[0;36m---->\033[0m");

	/*printf("\033[0;36m-[Ft_strdup]\033[0m\n\n");
	printf("'%s' = '%s'\n", s, ft_strdup(s));
	printf("'%s' = '%s'\n", s, strdup(s));
	//printf("'%s' = '%s'\n", ls, ft_strdup(ls));
	//printf("'%s' = '%s'\n", es, ft_strdup(es));

	printf("\033[0;36m-[Strdup]\033[0m\n\n");
	printf("'%s' = '%s'\n", s, strdup(s));
	printf("'%s' = '%s'\n", ls, strdup(ls));
	printf("'%s' = '%s'\n", es, strdup(es));*/

	//aux = strdup(s);
	//aux2= ft_strdup(s);

	//(aux[0] == aux2[0]) ? printf(" \033[0;32m[OK]\033[0m") : printf(" \033[0;31m[ok]\033[0m");

	(strcmp(ft_strdup(s), strdup(s)) == 0) ? printf(" \033[0;32m[OK]\033[0m") : printf(" \033[0;31m[KO]\033[0m");
	(strcmp(ft_strdup(ls), strdup(ls)) == 0) ? printf("\033[0;32m[OK]\033[0m") : printf("\033[0;31m[KO]\033[0m");
	(strcmp(ft_strdup(es), strdup(es)) == 0) ? printf("\033[0;32m[OK]\033[0m\n\n") : printf("\033[0;31m[KO]\033[0m\n\n");
	
	// WRITE TEST
	printf("  \033[0;35m[*]  Write [*]\033[0m \033[0;36m---->\033[0m");

	(ft_write(4, s, ft_strlen(s)) == write(4, s, strlen(s))) ? printf(" \033[0;32m[OK]\033[0m") : printf(" \033[0;31m[KO]\033[0m");
	(ft_write(10, ls, ft_strlen(ls)) == write(10, ls, strlen(ls))) ? printf("\033[0;32m[OK]\033[0m") : printf("\033[0;31m[KO]\033[0m");
	(ft_write(-2, es, ft_strlen(es)) == write(-2, es, strlen(es))) ? printf("\033[0;32m[OK]\033[0m\n\n") : printf("\033[0;31m[KO]\033[0m\n\n");
	// READ TEST
	printf("  \033[0;35m[*]  Read  [*]\033[0m \033[0;36m---->\033[0m");

	fd = open("../texts/dracula.txt", O_RDONLY);
	(ft_read(fd, mem, 4096) == read(fd, mem, 4096)) ? printf(" \033[0;32m[OK]\033[0m") : printf(" \033[0;31m[KO]\033[0m");
	close(fd);
	fd = open("../texts/one_big_fat_line.txt", O_RDONLY);
	(ft_read(fd, mem, 4096) == read(fd, mem, 4096)) ? printf("\033[0;32m[OK]\033[0m") : printf("\033[0;31m[KO]\033[0m");
	close(fd);
	fd = open("../texts/some_lines.txt", O_RDONLY);
	(ft_read(fd, mem, 4096) == read(fd, mem, 4096)) ? printf("\033[0;32m[OK]\033[0m\n\n") : printf("\033[0;31m[KO]\033[0m\n\n");
	close(fd);
}