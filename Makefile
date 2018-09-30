NAME = libftprintf.a
INCLUDES = -I includes
FLAGS = -Wall -Wextra -Werror 
SRCS = ./b_printf.c ./srcs/utils/*.c ./srcs/conversion/*.c

$(NAME): 
	gcc $(FLAGS) $(SRCS) $(INCLUDES) -c
	ar rc $(NAME) *.o
	ranlib $(NAME)

all: $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
