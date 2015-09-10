#ifndef NCURSES_CLASS_HPP
# define NCURSES_CLASS_HPP
# include "../core/library.Iclass.hpp"
# include "../../incs/snake.class.hpp"
# include <list>
# include <string>
# include <cstdlib>
# include <unistd.h>
# include <iostream>
# include <ncurses.h>

class Ncurses : public Library
{

private:
	Ncurses(const Ncurses &);

public:
	Ncurses();
	virtual ~Ncurses();
	Ncurses		&operator=(const Ncurses &);

	void	init(size_t width, size_t height);
	void	startGame();
	void	createGrid();
	void	printScore(int posX, int posY);
	void	game_loop();
	void	moveSnake();
	void	generateFood();
	void	generateFood2();
	void	generateFood3();
	void	generateObstacle();
	int		x;
	int		y;
};

extern "C"
{
	Ncurses		*createNcurses();
	void		deleteNcurses(Ncurses *Ncurses);
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
static int life = 3;
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
