
NAME = nibbler

SRC =	game.class.cpp \
		main.cpp \
		snake.class.cpp


OBJ = $(SRC:.cpp=.o)

DIRSRC = ./srcs/
DIROBJ = ./objs/
DIROBJS = $(addprefix $(DIROBJ), $(OBJ))

CC = clang++
CFLAGS = -Wall -Werror -Wextra -g
HEAD = -I .libs/ncurses/ -I .incs/game.class.hpp

all: $(NAME) libs

$(NAME): $(DIROBJS)
	@make -C libs/ncurses/
	@make -C libs/sdl/
	@make -C libs/sfml/
	@echo "Création de l'executable "nibbler" ..."
	$(CC) $(CFLAGS) -g -o $@ $^ $(HEAD) $(LIB) -ldl

$(DIROBJ)%.o: $(DIRSRC)%.cpp
	@mkdir -p objs
	$(CC) $(CFLAGS) -c $^ $(HEAD) -o $@

clean:
	@make clean -C libs/ncurses
	@make clean -C libs/sdl
	@make clean -C libs/sfml
	@rm -rf $(DIROBJ)

fclean: clean
	@make fclean -C libs/ncurses
	@make fclean -C libs/sdl
	@make fclean -C libs/sfml
	@rm -rf $(NAME)

libs:	libs/ncurses/libncurses.so \
		libs/sdl/libsdl.so \
		libs/sfml/libsfml.so

re : fclean all

.PHONY: all clean fclean re
