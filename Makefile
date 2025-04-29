NAME = libftprintf.a

SOURCES = ft_printf.c	ft_putchar.c	ft_putstr.c		ft_putnmb.c		ft_unsignmb.c	ft_puthexa.c	ft_putpointer.c\

OBJECTS = $(SOURCES:.c=.o)

FLAGS += -Wall -Werror -Wextra

RM += rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
		ar -r $(NAME)  $(OBJECTS)

.c.o:
	cc $(FLAGS) -c $< -o ${<:.c=.o}

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re