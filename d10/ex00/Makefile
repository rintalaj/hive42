NAME = libft.a

HEADER = ./includes

FLAGS = -Wall -Wextra -Werror

SRC = ./srcs/ft_putchar.c \
	  ./srcs/ft_putstr.c \
	  ./srcs/ft_strcmp.c \
	  ./srcs/ft_strlen.c \
	  ./srcs/ft_swap.c \

all: $(NAME)

$(NAME):
	gcc -c $(FlAGS) $(SRC) $(HEADER)
	ar rc $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean: 
	/bin/rm -f $(NAME)

re: fclean all
