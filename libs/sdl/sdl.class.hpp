#ifndef SDL_CLASS_HPP
# define SDL_CLASS_HPP
# include "../core/library.Iclass.hpp"
# include "../../incs/snake.class.hpp"
# include <list>
# include <string>
# include <cstdlib>
# include <unistd.h>
# include <iostream>
# include <SDL.h>
# include <SDL_ttf.h>

class SDL : public Library
{

private:
	SDL(const SDL &);
	int						_x;
	int						_y;
	SDL_Surface				*_screen;
	// std::list<SDL_Surface>	*_snake;

public:
	SDL();
	virtual ~SDL();
	SDL		&operator=(const SDL &);

	void	init(size_t width, size_t height);
	void	startGame(SDL_Surface *borders, SDL_Surface *inside, SDL_Surface *text, TTF_Font *font);
	void	pause(SDL_Surface *borders, SDL_Surface *inside, SDL_Surface *text);
	// void	createGrid();
	// void	printScore(int posX, int posY);
	// void	game_loop();
	// void	moveSnake();
	// void	generateFood();
	// void	generateFood2();
	// void	generateFood3();
	// void	generateObstacle();
};

extern "C"
{
	SDL		*createSDL();
	void	deleteSDL(SDL *SDL);
}

static int score = 0;
static int gameOver = 0;
static int food_x;
static int food_y;
static int food_x2;
static int food_y2;
static int food_x3;
static int food_y3;
static int countdown = 100;
static int life = 2;
static int lifeCost = rand() % 10;

static int obstacleX;
static int obstacleY;
static int obstacle1X;
static int obstacle1Y;
static int obstacle2X;
static int obstacle2Y;
static int obstacle3X;
static int obstacle3Y;
static int obstacle4X;
static int obstacle4Y;
static int obstacleFlag = 0;
static int dollarScore;
static int ch = -1;
static int flagHelp = 0;

#endif
