#include "sfml.class.hpp"

SFML::SFML(void) {}
SFML::~SFML(void) {}
SFML::SFML(const SFML &src) { *this = src; }
SFML		&SFML::operator=(const SFML &) { return (*this); }

void		generateFood()
{
	while (1)
	{
		food_x = rand() % x;
		food_y = rand() % y;
		// if (food_x == 0 || food_y == 0
		// 	|| food_x == x || food_y == y
		// 	|| food_x == obstacleX || food_y == obstacleY
		// 	|| food_x == obstacle1X || food_y == obstacle1Y
		// 	|| food_x == obstacle2X || food_y == obstacle2Y
		// 	|| food_x == obstacle3X || food_y == obstacle3Y
		// 	|| food_x == obstacle4X || food_y == obstacle4Y)
		// 	continue ;
		// else
			break ;
	}
}

void					SFML::init(size_t width, size_t height)
{
	width *= 10;
	height *= 10;
	x = width;
	y = height;
	sf::RenderWindow	window(sf::VideoMode(width, height), "Nibbler!");
	sf::RectangleShape	shape(sf::Vector2f((width - 100), (height - 100)));
	sf::Text			text;
	sf::Text			atext;
	sf::Text			food;
	sf::Text			snake;
	sf::Font			font;
	sf::SoundBuffer		soundBuffer;
	sf::Sound			sound;
	sf::Event			Event;

	std::ostringstream ss;


	std::list<Snake> snakes;
	std::list<Snake>::iterator it;
	snakes.push_front(Snake((x / 2) + 1, (y / 2)));
	int xSnake = 2;
	int ySnake = 2;
	// if(key == 1)
	// 	ySnake--;
	// else if(key == 2)
	// 	xSnake++;
	// else if(key == 3)
	// 	ySnake++;
	// else if(key == 4)
	// 	xSnake--;
	snakes.push_front(Snake(xSnake, ySnake));


	shape.setFillColor(sf::Color(0, 0, 0));
	shape.setOutlineThickness(5);
	shape.setOutlineColor(sf::Color(250, 150, 100));
	shape.move(50, 50);

	if (!font.loadFromFile("libs/fonts/arial.ttf"))
	{
		throw std::exception();
	}
	text.setFont(font);

	text.setString("Score: ");
	text.setCharacterSize(15);
	text.setColor(sf::Color::Green);
	text.setStyle(sf::Text::Bold);
	text.move(50, (height - 30));

	if (!soundBuffer.loadFromFile("libs/sounds/sound.wav"))
	{
		throw std::exception();
	}

	sound.setBuffer(soundBuffer);
	// sound.pause();
	sound.play();
	generateFood();
	food.setFont(font);

	food.setString("X");
	food.setCharacterSize(15);
	food.setColor(sf::Color::Green);
	food.setStyle(sf::Text::Bold);
	food.move(food_x, food_y);


	snake.setFont(font);
	snake.setString("o");
	snake.setCharacterSize(15);
	snake.setColor(sf::Color::Green);
	snake.setStyle(sf::Text::Bold);
	snake.move(food_x, food_y);
	while (window.isOpen())
	{
		while (window.pollEvent(Event))
		{
			if (Event.type == sf::Event::Closed)
				window.close();

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				window.close();


			counter++;
			ss << counter;
			atext.setFont(font);
			atext.setCharacterSize(15);
			atext.setColor(sf::Color::Green);
			atext.setStyle(sf::Text::Bold);
			atext.setString(ss.str());
			atext.move(110, (height - 30));

			window.clear();
			window.draw(shape);
			window.draw(text);
			window.draw(atext);
			window.draw(food);
			for(it = snakes.begin(); it != snakes.end(); it++)
			{
				snake.move((*it).getY(),(*it).getX());
				window.draw(snake);
			}
			window.display();
		}
	}
}



SFML		*createSFML()
{
	return (new SFML());
}

void		deleteSFML(SFML *SFML)
{
	delete SFML;
}
