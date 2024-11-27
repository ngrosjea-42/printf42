NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =	ft_printf.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putnbrbase.c\
		ft_print0x.c\
		ft_unsputnbrbase.c


OBJ = $(SRC:.c=.o)


# Cible pour créer l'archive
$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Cible principale pour tout générer
all : $(NAME)

# Nettoyage des fichiers objets
clean :
	rm -f $(OBJ)

# Nettoyage complet (fichiers objets et archive)
fclean: clean
	rm -f $(NAME)

# Recompilation complète
re : fclean all

# Spécifie que ces cibles ne sont pas des fichiers
.PHONY : all clean fclean re