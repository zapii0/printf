SRCS = ft_printf.c ft_putchar_p.c ft_putdigit_p.c ft_puthex_p.c ft_putstr_p.c \
ft_putUint_p.c
OBJS		= ${SRCS:.c=.o}
NAME		= libftprintf.a
CC			= gcc -Wall -Wextra -Werror

%.o: %.c
	$(CC) -I. -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
