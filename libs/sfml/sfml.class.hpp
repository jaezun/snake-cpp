#ifndef SFML_CLASS_HPP
# define SFML_CLASS_HPP
# include "../core/library.Iclass.hpp"
# include "../../incs/snake.class.hpp"
# include <list>
# include <string>
# include <cstdlib>
# include <unistd.h>
# include <iostream>
# include <sstream>
# include <SFML/Graphics.hpp>
# include <SFML/OpenGL.hpp>
# include <SFML/Audio.hpp>
# include "../../incs/snake.class.hpp"

// # include <SFML/Keyboard.hpp>
// # include "/nfs/zfs-student-2/users/2013/jhyun/.brew/Cellar/sfml/2.2_1/include/SFML/Config.hpp"
// # include "/nfs/zfs-student-2/users/2013/jhyun/.brew/Cellar/sfml/2.2_1/include/SFML/System.hpp"
// # include "/nfs/zfs-student-2/users/2013/jhyun/.brew/Cellar/sfml/2.2_1/include/SFML/Window.hpp"
// # include "/nfs/zfs-student-2/users/2013/jhyun/.brew/Cellar/sfml/2.2_1/include/SFML/Graphics.hpp"

class SFML : public Library
{

private:

public:
	SFML();
	SFML(SFML const &);
	virtual ~SFML();
	SFML		&operator=(const SFML &);

	void	init(size_t width, size_t height);
};

static int		counter = 0;
static int		food_x;
static int		food_y;
static int		x;
static int		y;

extern "C"
{
	SFML	*createSFML();
	void	deleteSFML(SFML *SFML);
}

#endif
