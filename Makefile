NAME	=	libft

SRCS	=	ft_memset.c

OBJS	=	$(patsubst %.c, %.o, $(SRCS))

CC	=	clang

FLAGS	=	-Wall -Werror -Wextra

HEADERS	=	libft.h

all:	$(NAME).a

$(NAME).a:	$(OBJS)
	ar rc $(NAME).a $(OBJS)
	ranlib $(NAME).a

%.o: %.c $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@
	@echo "$a added!"

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME).a

re:	fclean all
