NAME = ft_display_file
FILE = ft_display_file.c

all: $(NAME)

($NAME):
	gcc -c -Wall -Wextra -Werror $(FILE)
	gcc -o $(NAME) ft_display_file.o
clean:
	/bin/rm -f $(NAME).o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
