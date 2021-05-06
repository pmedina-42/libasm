SRC_BASE	=	./code/
SRCS		=   ft_strlen.s \
				ft_strcpy.s \
				ft_strcmp.s \
				ft_strdup.s \
				ft_write.s 	\
				ft_read.s

SRCS 		:=	$(addprefix $(SRC_BASE), $(SRCS))
OBJS		=	$(SRCS:.s=.o)
CC			=	gcc
NASM		=	nasm -f macho64
RM			=	rm -f
NAME		=	libasm.a
EXEC		=	libasm

%.o	: %.s
	$(NASM) $< -o $@

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)

all:	$(NAME)


re: fclean all

clean:
	@$(RM) $(OBJS)

fclean: clean
		@$(RM) $(NAME) $(EXEC)
		clear

cc:
	@$(CC) $(SRC_BASE)main.c $(NAME) -o $(EXEC)

exe:
	clear
	@./$(EXEC)
