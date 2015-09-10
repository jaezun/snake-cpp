#ifndef GAME_CLASS_HPP
# define GAME_CLASS_HPP
# include "unistd.h"
# include "../libs/ncurses/ncurses.class.hpp"
# include <cstdlib>
# include <dlfcn.h>
# include <iostream>
# include <list>

typedef	Library* create_lib();

class Library;
class Ncurses;

class Game
{
private:
	size_t						_width;
	size_t						_height;
	create_lib					*_graph;
	size_t						_currentLibrary;

	Game();
	Game(const Game &src);
	Game	&operator=(const Game &src);

public:
	Game(size_t width, size_t height);
	virtual ~Game();

	void	start(int flag);
};

#endif
