#include "../incs/game.class.hpp"

Game::~Game()
{}


Game::Game(size_t width, size_t height) : _width(width), _height(height)
{
}

void	Game::start(int flag)
{
	try
	{
		typedef		Library* create_t();

		if (flag == 1)
		{
			void		*dl_handle = dlopen("./libs/ncurses/libncurses.so", RTLD_LAZY | RTLD_LOCAL);
			this->_graph = (create_t*) dlsym(dl_handle, "createNcurses");
		}
		else if (flag == 2)
		{
			void		*dl_handle = dlopen("./libs/sdl/libsdl.so", RTLD_LAZY | RTLD_LOCAL);
			this->_graph = (create_t*) dlsym(dl_handle, "createSDL");
		}
		else if (flag == 3)
		{
			void		*dl_handle = dlopen("./libs/sfml/libsfml.so", RTLD_LAZY | RTLD_LOCAL);
			this->_graph = (create_t*) dlsym(dl_handle, "createSFML");
		}
		else
			std::cout << "Error : Unknown library" << std::endl;
		if (this->_graph)
			this->_graph()->init(this->_width, this->_height);
		else
		{
			throw std::exception();
		}
	}
	catch (std::exception e)
	{
		std::cout << "Coucou" << std::endl;
	}

}
