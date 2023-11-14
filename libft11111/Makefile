CC = gcc
CFLAGS = -Wall -Werror -Wextra


SRCS = ft_isalnum.c	ft_memchr.c	ft_memset.c	ft_strlen.c	ft_tolower.c \
	ft_atoi.c	ft_isalpha.c	ft_memcmp.c	ft_strchr.c	ft_strncmp.c	ft_toupper.c \
	ft_bzero.c	ft_isascii.c	ft_memcpy.c	ft_strlcat.c	ft_strnstr.c \
	ft_digit.c	ft_isprint.c	ft_memmove.c	ft_strlcpy.c	ft_strrchr.c \
	ft_strdup.c	ft_calloc.c	ft_substr.c	ft_strjoin.c ft_strtrim.c	ft_split.c \
	ft_itoa.c	ft_striteri.c	ft_strmapi.c	ft_putchar_fd.c	ft_putstr_fd.c \
	ft_putendl_fd.c	ft_putnbr_fd.c	
BSRC = ft_lstnew.c	ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c	ft_lstadd_back.c\
	ft_lstdelone.c	ft_lstclear.c	ft_lstiter.c	ft_lstmap.c

OBJS = $(SRCS:.c=.o)
BOBJ = $(BSRC:.c=.o)
NAME = libft.a

.PHONY:all bonus clean fclean re

all: $(NAME)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c  $< -o $@

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

re: fclean all

clean:
	rm -f $(OBJS) $(BOBJ)

fclean : clean
	rm -rf $(NAME)

bonus: $(BOBJ) $(OBJS)
	ar rc $(NAME) $(BOBJ) $(OBJS)

