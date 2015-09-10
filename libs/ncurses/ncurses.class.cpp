#include "ncurses.class.hpp"

Ncurses::Ncurses(void) {}
Ncurses::~Ncurses(void) {}
Ncurses::Ncurses(const Ncurses &src) { *this = src; }
Ncurses		&Ncurses::operator=(const Ncurses &) { return (*this); }

void		Ncurses::init(size_t width, size_t height)
{
	x = width;
	y = height;

	initscr();
	start_color();
	clear();
	noecho();
	cbreak();
	keypad(stdscr, TRUE);
	curs_set(0);
	init_pair(0, COLOR_WHITE, COLOR_BLACK);
	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_YELLOW, COLOR_BLACK);
	nodelay(stdscr, TRUE);

	startGame();
	endwin();
}

void		Ncurses::startGame()
{
	int key2 = -1;

	for(int i = 10; i >= 0; i--)
	{
		if ((key2 = getch()) > 0)
			break ;
		erase();
		printw("Welcome to the Nibbler game.\n");
		printw("Copyright 2015 | Cyril DAUPHIN & Jae-Zun HYUN | Ecole 42 | Paris, France\n\n\n");
		printw("Please press any key to start.\nTo quit the Game, press \"q\".\n\n\n");
		printw( "You have ");
		attron(COLOR_PAIR(1));
		printw("%d ",i);
		attroff(COLOR_PAIR(1));
		printw( "seconds left until the Game starts automatically!\n\n\n");



		if (i == 10)
		{
		attron(COLOR_PAIR(2));
		printw("                             /^\\//^\\                                         \n");
		printw("                           _|_O_|  O|                                        \n");
		printw("                   \\/    /~     \\_/ \\                                       \n");
		printw("                    \\____|__________/  \\                                     \n");
		printw("                          \\_______      \\                                   \n");
		printw("                                  `\\     \\                 \\                \n");
		printw("                                    |     |                  \\              \n");
		printw("                                   /      /                    \\            \n");
		printw("                                  /     /                       \\          \n");
		printw("                                /      /                         \\ \\        \n");
		printw("                               /     /                            \\  \\      \n");
		printw("                             /     /             _----_            \\   \\    \n");
		printw("                            /     /           _-~      ~-_         |   |    \n");
		printw("                           (      (        _-~    _--_    ~-_     _/   |    \n");
		printw("                            \\      ~-____-~    _-~    ~-_    ~-_-~    /     \n");
		printw("                              ~-_           _-~          ~-_       _-~      \n");
		printw("                                 ~--______-~                ~-___-~         \n");
		attroff(COLOR_PAIR(2));
		}
		else if (i == 9)
		{
		attron(COLOR_PAIR(2));
		printw("                            /^\\//^\\                                         \n");
		printw("                          _|_O_|  O|                                        \n");
		printw("                  \\/    /~     \\_/ \\                                       \n");
		printw("                   \\____|__________/  \\                                     \n");
		printw("                         \\_______      \\                                   \n");
		printw("                                 `\\     \\                 \\                \n");
		printw("                                   |     |                  \\              \n");
		printw("                                  /      /                    \\            \n");
		printw("                                 /     /                       \\          \n");
		printw("                               /      /                         \\ \\        \n");
		printw("                              /     /                            \\  \\      \n");
		printw("                            /     /             _----_            \\   \\    \n");
		printw("                           /     /           _-~      ~-_         |   |    \n");
		printw("                          (      (        _-~    _--_    ~-_     _/   |    \n");
		printw("                           \\      ~-____-~    _-~    ~-_    ~-_-~    /     \n");
		printw("                             ~-_           _-~          ~-_       _-~      \n");
		printw("                                ~--______-~                ~-___-~         \n");
		attroff(COLOR_PAIR(2));
		}
		else if (i == 8)
		{
		attron(COLOR_PAIR(2));
		printw("                           /^\\//^\\                                         \n");
		printw("                         _|_O_|  O|                                        \n");
		printw("                 \\/    /~     \\_/ \\                                       \n");
		printw("                  \\____|__________/  \\                                     \n");
		printw("                        \\_______      \\                                   \n");
		printw("                                `\\     \\                 \\                \n");
		printw("                                  |     |                  \\              \n");
		printw("                                 /      /                    \\            \n");
		printw("                                /     /                       \\          \n");
		printw("                              /      /                         \\ \\        \n");
		printw("                             /     /                            \\  \\      \n");
		printw("                           /     /             _----_            \\   \\    \n");
		printw("                          /     /           _-~      ~-_         |   |    \n");
		printw("                         (      (        _-~    _--_    ~-_     _/   |    \n");
		printw("                          \\      ~-____-~    _-~    ~-_    ~-_-~    /     \n");
		printw("                            ~-_           _-~          ~-_       _-~      \n");
		printw("                               ~--______-~                ~-___-~         \n");
		attroff(COLOR_PAIR(2));
		}
		else if (i == 7)
		{
		attron(COLOR_PAIR(2));
		printw("                          /^\\//^\\                                         \n");
		printw("                        _|_O_|  O|                                        \n");
		printw("                \\/    /~     \\_/ \\                                       \n");
		printw("                 \\____|__________/  \\                                     \n");
		printw("                       \\_______      \\                                   \n");
		printw("                               `\\     \\                 \\                \n");
		printw("                                 |     |                  \\              \n");
		printw("                                /      /                    \\            \n");
		printw("                               /     /                       \\          \n");
		printw("                             /      /                         \\ \\        \n");
		printw("                            /     /                            \\  \\      \n");
		printw("                          /     /             _----_            \\   \\    \n");
		printw("                         /     /           _-~      ~-_         |   |    \n");
		printw("                        (      (        _-~    _--_    ~-_     _/   |    \n");
		printw("                         \\      ~-____-~    _-~    ~-_    ~-_-~    /     \n");
		printw("                           ~-_           _-~          ~-_       _-~      \n");
		printw("                              ~--______-~                ~-___-~         \n");
		attroff(COLOR_PAIR(2));
		}
		else if (i == 6)
		{
		attron(COLOR_PAIR(2));
		printw("                         /^\\//^\\                                         \n");
		printw("                       _|_O_|  O|                                        \n");
		printw("               \\/    /~     \\_/ \\                                       \n");
		printw("                \\____|__________/  \\                                     \n");
		printw("                      \\_______      \\                                   \n");
		printw("                              `\\     \\                 \\                \n");
		printw("                                |     |                  \\              \n");
		printw("                               /      /                    \\            \n");
		printw("                              /     /                       \\          \n");
		printw("                            /      /                         \\ \\        \n");
		printw("                           /     /                            \\  \\      \n");
		printw("                         /     /             _----_            \\   \\    \n");
		printw("                        /     /           _-~      ~-_         |   |    \n");
		printw("                       (      (        _-~    _--_    ~-_     _/   |    \n");
		printw("                        \\      ~-____-~    _-~    ~-_    ~-_-~    /     \n");
		printw("                          ~-_           _-~          ~-_       _-~      \n");
		printw("                             ~--______-~                ~-___-~         \n");
		attroff(COLOR_PAIR(2));
		}
		else if (i == 5)
		{
		attron(COLOR_PAIR(2));
		printw("                        /^\\//^\\                                         \n");
		printw("                      _|_O_|  O|                                        \n");
		printw("              \\/    /~     \\_/ \\                                       \n");
		printw("               \\____|__________/  \\                                     \n");
		printw("                     \\_______      \\                                   \n");
		printw("                             `\\     \\                 \\                \n");
		printw("                               |     |                  \\              \n");
		printw("                              /      /                    \\            \n");
		printw("                             /     /                       \\          \n");
		printw("                           /      /                         \\ \\        \n");
		printw("                          /     /                            \\  \\      \n");
		printw("                        /     /             _----_            \\   \\    \n");
		printw("                       /     /           _-~      ~-_         |   |    \n");
		printw("                      (      (        _-~    _--_    ~-_     _/   |    \n");
		printw("                       \\      ~-____-~    _-~    ~-_    ~-_-~    /     \n");
		printw("                         ~-_           _-~          ~-_       _-~      \n");
		printw("                            ~--______-~                ~-___-~         \n");
		attroff(COLOR_PAIR(2));
		}
		else if (i == 4)
		{
		attron(COLOR_PAIR(2));
		printw("                      /^\\//^\\                                         \n");
		printw("                    _|_O_|  O|                                        \n");
		printw("            \\/    /~     \\_/ \\                                       \n");
		printw("             \\____|__________/  \\                                     \n");
		printw("                   \\_______      \\                                   \n");
		printw("                           `\\     \\                 \\                \n");
		printw("                             |     |                  \\              \n");
		printw("                            /      /                    \\            \n");
		printw("                           /     /                       \\          \n");
		printw("                         /      /                         \\ \\        \n");
		printw("                        /     /                            \\  \\      \n");
		printw("                      /     /             _----_            \\   \\    \n");
		printw("                     /     /           _-~      ~-_         |   |    \n");
		printw("                    (      (        _-~    _--_    ~-_     _/   |    \n");
		printw("                     \\      ~-____-~    _-~    ~-_    ~-_-~    /     \n");
		printw("                       ~-_           _-~          ~-_       _-~      \n");
		printw("                          ~--______-~                ~-___-~         \n");
		attroff(COLOR_PAIR(2));
		}
		else if (i == 3)
		{
		attron(COLOR_PAIR(2));
		printw("                   /^\\//^\\                                         \n");
		printw("                 _|_O_|  O|                                        \n");
		printw("         \\/    /~     \\_/ \\                                       \n");
		printw("          \\____|__________/  \\                                     \n");
		printw("                \\_______      \\                                   \n");
		printw("                        `\\     \\                 \\                \n");
		printw("                          |     |                  \\              \n");
		printw("                         /      /                    \\            \n");
		printw("                        /     /                       \\          \n");
		printw("                      /      /                         \\ \\        \n");
		printw("                     /     /                            \\  \\      \n");
		printw("                   /     /             _----_            \\   \\    \n");
		printw("                  /     /           _-~      ~-_         |   |    \n");
		printw("                 (      (        _-~    _--_    ~-_     _/   |    \n");
		printw("                  \\      ~-____-~    _-~    ~-_    ~-_-~    /     \n");
		printw("                    ~-_           _-~          ~-_       _-~      \n");
		printw("                       ~--______-~                ~-___-~         \n");
		attroff(COLOR_PAIR(2));
		}
		else if (i == 2)
		{
		attron(COLOR_PAIR(2));
		printw("                 /^\\//^\\                                         \n");
		printw("               _|_O_|  O|                                        \n");
		printw("       \\/    /~     \\_/ \\                                       \n");
		printw("        \\____|__________/  \\                                     \n");
		printw("              \\_______      \\                                   \n");
		printw("                      `\\     \\                 \\                \n");
		printw("                        |     |                  \\              \n");
		printw("                       /      /                    \\            \n");
		printw("                      /     /                       \\          \n");
		printw("                    /      /                         \\ \\        \n");
		printw("                   /     /                            \\  \\      \n");
		printw("                 /     /             _----_            \\   \\    \n");
		printw("                /     /           _-~      ~-_         |   |    \n");
		printw("               (      (        _-~    _--_    ~-_     _/   |    \n");
		printw("                \\      ~-____-~    _-~    ~-_    ~-_-~    /     \n");
		printw("                  ~-_           _-~          ~-_       _-~      \n");
		printw("                     ~--______-~                ~-___-~         \n");
		attroff(COLOR_PAIR(2));
		}
		else if (i == 1)
		{
		attron(COLOR_PAIR(2));
		printw("             /^\\//^\\                                         \n");
		printw("           _|_O_|  O|                                        \n");
		printw("   \\/    /~     \\_/ \\                                       \n");
		printw("    \\____|__________/  \\                                     \n");
		printw("          \\_______      \\                                   \n");
		printw("                  `\\     \\                 \\                \n");
		printw("                    |     |                  \\              \n");
		printw("                   /      /                    \\            \n");
		printw("                  /     /                       \\          \n");
		printw("                /      /                         \\ \\        \n");
		printw("               /     /                            \\  \\      \n");
		printw("             /     /             _----_            \\   \\    \n");
		printw("            /     /           _-~      ~-_         |   |    \n");
		printw("           (      (        _-~    _--_    ~-_     _/   |    \n");
		printw("            \\      ~-____-~    _-~    ~-_    ~-_-~    /     \n");
		printw("              ~-_           _-~          ~-_       _-~      \n");
		printw("                 ~--______-~                ~-___-~         \n");
		attroff(COLOR_PAIR(2));
		}
		else if (i == 0)
		{
		attron(COLOR_PAIR(2));
		printw("           /^\\//^\\                                         \n");
		printw("         _|_O_|  O|                                        \n");
		printw(" \\/    /~     \\_/ \\                                       \n");
		printw("  \\____|__________/  \\                                     \n");
		printw("        \\_______      \\                                   \n");
		printw("                `\\     \\                 \\                \n");
		printw("                  |     |                  \\              \n");
		printw("                 /      /                    \\            \n");
		printw("                /     /                       \\          \n");
		printw("              /      /                         \\ \\        \n");
		printw("             /     /                            \\  \\      \n");
		printw("           /     /             _----_            \\   \\    \n");
		printw("          /     /           _-~      ~-_         |   |    \n");
		printw("         (      (        _-~    _--_    ~-_     _/   |    \n");
		printw("          \\      ~-____-~    _-~    ~-_    ~-_-~    /     \n");
		printw("            ~-_           _-~          ~-_       _-~      \n");
		printw("               ~--______-~                ~-___-~         \n");
		attroff(COLOR_PAIR(2));
		}
		usleep(2000000);
	}
	if (key2 == 'q')
		return ;
	timeout(175);
	game_loop();
}

void	Ncurses::createGrid()
{
	int colGrid = 0;
	int rowGrid = 0;

	clear();
	attron(COLOR_PAIR(1));
	for (int i = 0; i < x ; i++)
	{
		mvaddch(rowGrid, colGrid, '#');
		colGrid++;
	}
	colGrid = 0;
	rowGrid = y;
	for (int i = 0; i <= x ; i++)
	{
		mvaddch(rowGrid, colGrid, '#');
		colGrid++;
	}
	colGrid = 0;
	rowGrid = 0;
	for (int i = 0; i < y ; i++)
	{
		mvaddch(rowGrid, colGrid, '#');
		rowGrid++;
	}
	colGrid = x;
	rowGrid = 0;
	for (int i = 0; i < y ; i++)
	{
		mvaddch(rowGrid, colGrid, '#');
		rowGrid++;
	}
	attroff(COLOR_PAIR(1));
	printScore(0, (y + 2));
}

void	Ncurses::printScore(int posX, int posY)
{
	--countdown;
	attron(COLOR_PAIR(2));
	if (countdown <= 50)
		attron(COLOR_PAIR(3));
	if (countdown <= 20)
		attron(COLOR_PAIR(1));
	for (int i = 0; i <= countdown; ++i)
		mvprintw((posY - 1 ), (posX + i), "|");
	attroff(COLOR_PAIR(2));
	attroff(COLOR_PAIR(3));
	attroff(COLOR_PAIR(1));
	if (countdown == 0)
	{
		--life;
		countdown = 100;
	}
	if (life >= 0 && life <= 1)
		attron(COLOR_PAIR(1));
	else if (life == 2)
		attron(COLOR_PAIR(3));
	else if (life >= 3)
		attron(COLOR_PAIR(2));
	for (int i = 1; i <= life; ++i)
	{
		mvprintw(posY, posX, "Life  : ");
		mvprintw(posY, (posX + (i + 7)), "*");
	}

	attroff(COLOR_PAIR(3));
	attroff(COLOR_PAIR(2));
	attroff(COLOR_PAIR(1));

	if (score <= 0)
		attron(COLOR_PAIR(1));
	else if (score > 0 && score < 10)
		attron(COLOR_PAIR(3));
	else
		attron(COLOR_PAIR(2));
	mvprintw((posY + 2), posX, "Score : %d", score);
	attroff(COLOR_PAIR(1));
	attroff(COLOR_PAIR(2));
	attroff(COLOR_PAIR(3));


	if (score != 0 && score % 3 == 0)
	{
		--dollarScore;
		attron(COLOR_PAIR(2));
		if (dollarScore <= 30)
			attron(COLOR_PAIR(3));
		if (dollarScore <= 10)
			attron(COLOR_PAIR(1));
		mvprintw((posY + 3), posX, "\"$\"   : %d Score", dollarScore);
		attroff(COLOR_PAIR(2));
		attroff(COLOR_PAIR(3));
		attroff(COLOR_PAIR(1));

		if (lifeCost <= 25)
			attron(COLOR_PAIR(2));
		else if (lifeCost > 26 && lifeCost <= 50)
			attron(COLOR_PAIR(3));
		else
			attron(COLOR_PAIR(1));
		// mvprintw((posY + 4), posX, "\"L\"   : %d Score", lifeCost);
		attroff(COLOR_PAIR(2));
		attroff(COLOR_PAIR(3));
	}

	mvprintw((posY + 6 ), posX,  "Press \"SPACE\" to pause, \"h\" for help or \"q\" to quit the Game.\n");

	if (ch == 'h')
	{
		if (flagHelp == 1)
			flagHelp = 0;
		else
			flagHelp = 1;
	}
	if (flagHelp == 1)
	{
		mvprintw((posY + 10), posX,   "=========================== HELP (h) =========================== ");
		mvprintw((posY + 12), posX,  "1.  A [Apple]          ->   Adds 1  Score");
		mvprintw((posY + 13), posX,  "2.  $ [Big Apple]      ->   Adds / Subtracts +50 ~ -INT Score");
		mvprintw((posY + 14), posX,  "3a. L [Extra Life]     ->   Adds 1  Life ");
		mvprintw((posY + 15), posX,  "3b. L [Extra Life]     ->   Subtracts RAND(100) Score");
		mvprintw((posY + 16), posX,  "4.    [Eat own Body]   ->   Subtracts 1  Life ");
		mvprintw((posY + 17), posX,  "5.  # [MAP]            ->   Subtracts 1  Life ");
		mvprintw((posY + 18), posX,  "6.  # [WALL]           ->   GAME OVER ");
	}

	refresh();
}

void	Ncurses::game_loop()
{
	while (1)
	{
		if (gameOver == 0)
			moveSnake();
		else
		{
			timeout(-1);
			mvprintw(1, 2, "Game Over.");
			mvprintw(2, 2, "Your Score is: %d", score);
			mvprintw(3, 2, "Please press \"q\" to exit");
			refresh();
			if (getch() == 'q')
				return ;
		}
	}
}

void		Ncurses::moveSnake()
{
	std::list<Snake> snakes;
	std::list<Snake>::iterator it;

	snakes.push_front(Snake((x / 2) + 1, (y / 2)));

	int key = 2;

	generateFood();
	generateFood2();
	// generateFood3();

	for (; ;)
	{
		if (gameOver == 1)
			break ;
		ch = getch();
		if (ch == 'q')
		{
			gameOver = 1;
			break ;
		}
		else if (ch == ' ')
		{
			timeout(-1);
			getch();
			timeout(175);
		}
		else
		{
			if (ch == KEY_UP)
			{
				if (key != 1 && key != 3)
					key = 1;
			}
			else if (ch == KEY_RIGHT)
			{
				if (key != 2 && key != 4)
					key = 2;
			}
			else if (ch == KEY_DOWN)
			{
				if (key != 1 && key != 3)
					key = 3;
			}
			else if (ch == KEY_LEFT)
			{
				if (key != 2 && key != 4)
					key = 4;
			}
		}
		Snake logic = snakes.front();

		int xSnake = logic.getX();
		int ySnake = logic.getY();
		if(key == 1)
			ySnake--;
		else if(key == 2)
			xSnake++;
		else if(key == 3)
			ySnake++;
		else if(key == 4)
			xSnake--;

		if (logic.getY() <= 0 || logic.getY() >= y
			|| logic.getX() <= 0 || logic.getX() >= x
			|| life <= 0)
		{
			--life;
			if (life == 0)
				gameOver = 1;
			countdown = 100;
			break ;
		}
		snakes.push_front(Snake(xSnake, ySnake));
		if(xSnake == food_x && ySnake == food_y)
		{
			generateFood();
			beep();
			score++;
			countdown = 100;
			dollarScore = 50;
		}
		else if(xSnake == food_x2 && ySnake == food_y2)
		{
			generateFood2();
			beep();
			score += dollarScore;
			countdown = 100;
			dollarScore = 50;
		}
		else
			snakes.pop_back();
		if(((xSnake == obstacleX) && (ySnake == obstacleY))
			|| ((xSnake == obstacle1X) && (ySnake == obstacle1Y))
			|| ((xSnake == obstacle2X) && (ySnake == obstacle2Y))
			|| ((xSnake == obstacle3X) && (ySnake == obstacle3Y))
			|| ((xSnake == obstacle4X) && (ySnake == obstacle4Y)))
		{
			--life;
			beep();
			if (life == 0)
				gameOver = 1;
			else
				generateObstacle();
			countdown = 100;
			break ;
		}
		// else if (xSnake == food_x3 && ySnake == food_y3 && score >= lifeCost)
		// {
		// 	generateFood3();
		// 	beep();
		// 	++life;
		// 	score -= lifeCost;
		// 	lifeCost = rand() % 100;
		// 	countdown = 100;
		// 	dollarScore = 50;
		// }
		erase();
		createGrid();
		attron(COLOR_PAIR(2));
		mvaddch(food_y, food_x, 'A');
		attroff(COLOR_PAIR(2));
		if (score % 3 != 0)
			obstacleFlag = 0;
		if (score != 0)
		{
			if (score % 3 == 0)
			{
				attron(COLOR_PAIR(2));
				mvaddch(food_y2, food_x2, '$');
				// mvaddch(food_y3, food_x3, 'L');
				attroff(COLOR_PAIR(2));
			}
			if (score % 3 == 0 && obstacleFlag == 0)
			{
				obstacleFlag = 1;
				generateObstacle();
			}
			if (score != 1 && score != 2)
			{
				attron(COLOR_PAIR(1));
				mvaddch(obstacleY, obstacleX, '#');
				mvaddch(obstacle1Y, obstacle1X, '#');
				mvaddch(obstacle2Y, obstacle2X, '#');
				mvaddch(obstacle3Y, obstacle3X, '#');
				mvaddch(obstacle4Y, obstacle4X, '#');
				attroff(COLOR_PAIR(1));
			}
		}
		for(it = snakes.begin(); it != snakes.end(); it++)
		{
			attron(COLOR_PAIR(2));
			mvaddch((*it).getY(),(*it).getX(),'o');
			attroff(COLOR_PAIR(2));
			refresh();
			if((*it).getY() == ySnake && (*it).getX() == xSnake && it != snakes.begin())
			{
				--life;
				if (life == 0)
					printScore(0, (y + 2));
				break ;
			}
		}
	}
}

void		Ncurses::generateFood()
{
	while (1)
	{
		food_x = rand() % x;
		food_y = rand() % y;
		if (food_x == 0 || food_y == 0
			|| food_x == x || food_y == y
			|| food_x == obstacleX || food_y == obstacleY
			|| food_x == obstacle1X || food_y == obstacle1Y
			|| food_x == obstacle2X || food_y == obstacle2Y
			|| food_x == obstacle3X || food_y == obstacle3Y
			|| food_x == obstacle4X || food_y == obstacle4Y)
			continue ;
		else
			break ;
	}
}

void		Ncurses::generateFood2()
{
	while (1)
	{
		food_x2 = rand() % x;
		food_y2 = rand() % y;
		if (food_x2 == 0 || food_y2 == 0
			|| food_x2 == x || food_y2 == y
			|| food_x2 == obstacleX || food_y2 == obstacleY
			|| food_x2 == obstacle1X || food_y2 == obstacle1Y
			|| food_x2 == obstacle2X || food_y2 == obstacle2Y
			|| food_x2 == obstacle3X || food_y2 == obstacle3Y
			|| food_x2 == obstacle4X || food_y2 == obstacle4Y)
			continue ;
		else
			break ;
	}
}

void		Ncurses::generateFood3()
{
	while (1)
	{
		food_x3 = rand() % x;
		food_y3 = rand() % y;
		if (food_x3 == 0 || food_y3 == 0
			|| food_x3 == x || food_y3 == y
			|| food_x3 == obstacleX || food_y3 == obstacleY
			|| food_x3 == obstacle1X || food_y3 == obstacle1Y
			|| food_x3 == obstacle3X || food_y3 == obstacle3Y
			|| food_x3 == obstacle3X || food_y3 == obstacle3Y
			|| food_x3 == obstacle4X || food_y3 == obstacle4Y)
			continue ;
		else
			break ;
	}
}

void		Ncurses::generateObstacle()
{
	while (1)
	{
		obstacleX = rand() % x;
		obstacleY = rand() % y;

		obstacle1X = rand() % x;
		obstacle1Y = rand() % y;

		obstacle2X = rand() % x;
		obstacle2Y = rand() % y;

		obstacle3X = rand() % x;
		obstacle3Y = rand() % y;

		obstacle4X = rand() % x;
		obstacle4Y = rand() % y;

		if (obstacleX == 0 || obstacleY == 0 || obstacleX == x || obstacleY == y
			|| obstacle1X == 0 || obstacle1Y == 0 || obstacle1X == x || obstacle1Y == y
			|| obstacle2X == 0 || obstacle2Y == 0 || obstacle2X == x || obstacle2Y == y
			|| obstacle3X == 0 || obstacle3Y == 0 || obstacle3X == x || obstacle3Y == y
			|| obstacle4X == 0 || obstacle4Y == 0 || obstacle4X == x || obstacle4Y == y)
			continue;
		else
			break ;
	}
}

Ncurses		*createNcurses()
{
	return (new Ncurses());
}

void		deleteNcurses(Ncurses *Ncurses)
{
	delete Ncurses;
}
