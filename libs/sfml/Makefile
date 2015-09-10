NAME = libsfml.so

DIRSRC = ./
DIROBJ = ./objs/

SRC =	sfml.class.cpp

OBJ = $(SRC:.cpp=.o)

DIROBJS = $(addprefix $(DIROBJ), $(OBJ))

CC = clang++
CFLAGS = -Wall -Werror -Wextra -fpic -std=c++11 -g

HEAD = -I ./core/includes -I ./sfml/ -I ~/.brew/include

all: $(NAME)

$(NAME): $(DIROBJS)
	@echo "Création de la librairie libsfml..."
	$(CC) $(CFLAGS) -shared -o $@ $^ $(HEAD) -L ~/.brew/lib -lGLEW -framework OpenGL -lglfw3 -lsfml-system -lsfml-window -lsfml-graphics -lsfml-audio

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


# brew update
# brew install sfml
# export LD_LIBRARY_PATH=$HOME/.brew/lib
