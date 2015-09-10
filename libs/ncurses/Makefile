
NAME = libncurses.so

DIRSRC = ./
DIROBJ = ./objs/

SRC =	ncurses.class.cpp

OBJ = $(SRC:.cpp=.o)

DIROBJS = $(addprefix $(DIROBJ), $(OBJ))

CC = clang++
CFLAGS = -Wall -Werror -Wextra

HEAD = -I ./../core/includes -I ./

all: $(NAME)

$(NAME): $(DIROBJS)
	@echo "Création de la librairie libncurses..."
	$(CC) $(CFLAGS) -shared -o $@ $^ $(HEAD) -lncurses

$(DIROBJ)%.o: $(DIRSRC)%.cpp
	@mkdir -p objs
	@mkdir -p objs/ncurses
	@$(CC) $(CFLAGS) -fPIC -c $^ $(HEAD) -o $@

clean:
	@rm -rf $(DIROBJ)

fclean: clean
	@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
