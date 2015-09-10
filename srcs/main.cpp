#include "../incs/game.class.hpp"
#include <dlfcn.h>
#include <iostream>

int main(int ac, char *av[])
{
	srand(time(NULL));
	if (ac != 2 && ac != 4)
	{
		std::cout << "Usage : ./snake <library> <width> <height> OR ./snake <library> With lib : 1 = Ncurses, 2 = SDL" << std::endl;
		return (0);
	}

	if (ac == 2)
	{
		Game *game = new Game(50, 25);
		game->start(std::atoi(av[1]));
	}
	else if (ac == 4)
	{
		Game *game = new Game(std::atoi(av[2]), std::atoi(av[3]));
		game->start(std::atoi(av[1]));
	}
	return 0;
}
