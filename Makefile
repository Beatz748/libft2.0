NAME	=	libft

SRCS	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
		ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
		ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
		ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c

SRCSB	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c

OBJS	=	$(patsubst %.c, %.o, $(SRCS))

OBJSB	=	$(patsubst %.c, %.o, $(SRCSB))

CC	=	clang

FLAGS	=	-Wall -Werror -Wextra

HEADERS	=	libft.h

all:	$(NAME).a

bonus:	$(OBJSB)
	ar rc $(NAME).a $(OBJSB)
	ranlib $(NAME).a

$(NAME).a:	$(OBJS)
	ar rc $(NAME).a $(OBJS)
	ranlib $(NAME).a

%.o: %.c $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@
	@echo "$< added!"

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME).a

re:	fclean all
