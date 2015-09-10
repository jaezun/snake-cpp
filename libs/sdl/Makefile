
NAME = libsdl.so

DIRSRC = ./
DIROBJ = ./objs/

SRC =	sdl.class.cpp

OBJ = $(SRC:.cpp=.o)

DIROBJS = $(addprefix $(DIROBJ), $(OBJ))

CC = clang++
CFLAGS = -Wall -Werror -Wextra

HEAD = -I ./core/includes -I ./sdl/ -I ~/.brew/Cellar/sdl/1.2.15/include/SDL/ -I ~/.brew/Cellar/sdl_ttf/2.0.11/include/SDL/

all: $(NAME)

$(NAME): $(DIROBJS)
	@echo "Création de la librairie libsdl..."
	@$(CC) $(CFLAGS) -shared -o $@ $^ $(HEAD) -L ~/.brew/Cellar/sdl/1.2.15/lib -lSDL -L ~/.brew/Cellar/sdl_ttf/2.0.11/lib -lSDL_ttf

$(DIROBJ)%.o: $(DIRSRC)%.cpp
	@mkdir -p objs
	@mkdir -p objs/sdl
	@$(CC) $(CFLAGS) -fPIC -c $^ $(HEAD) -o $@

clean:
	@rm -rf $(DIROBJ)

fclean: clean
	@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
