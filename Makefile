CFILES = ft_printf.c src/print_basic.c src/print_hex.c \
		src/print_num.c src/print_ptr.c

OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES) 

clean:
	rm -f $(OFILES)

fclean:  clean
	rm -f $(NAME)

re: fclean all

.PHONY:  all clean fclean re