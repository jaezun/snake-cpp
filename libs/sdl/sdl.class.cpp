#include "sdl.class.hpp"

SDL::SDL(void) {}
SDL::~SDL(void) {}
SDL::SDL(const SDL &src) { *this = src; }
SDL		&SDL::operator=(const SDL &) { return (*this); }

void		SDL::init(size_t width, size_t height)
{
	SDL_Surface	*borders;
	SDL_Surface	*inside;
	SDL_Surface	*text;
	SDL_Color	blackFont = {0, 0, 0, 0};
	SDL_Color	bgFont = {89, 152, 47, 0};
	TTF_Font	*font = NULL;

	this->_x = (width * 10) + 20;
	this->_y = (height * 10) + 160;

	SDL_Init(SDL_INIT_EVERYTHING);
	this->_screen = SDL_SetVideoMode(this->_x, this->_y, 32, SDL_HWSURFACE);
	if (!this->_screen)
	{
		std::cout << "SDL_SetVideoMode error : " << SDL_GetError() << std::endl;
		return ;
	}

	SDL_WM_SetCaption("Nibbler", NULL);
	SDL_FillRect(this->_screen, NULL, SDL_MapRGB(this->_screen->format, 89, 152, 47));

	borders = SDL_CreateRGBSurface(SDL_HWSURFACE, this->_x - 10, this->_y - 150, 32, 0, 0, 0, 0);
	SDL_FillRect(borders, NULL, SDL_MapRGB(this->_screen->format, 90, 76, 23));

	inside = SDL_CreateRGBSurface(SDL_HWSURFACE, this->_x - 20, this->_y - 160, 32, 0, 0, 0, 0);
	SDL_FillRect(inside, NULL, SDL_MapRGB(this->_screen->format, 152, 89, 47));

	if (TTF_Init() == -1)
	{
		std::cout << "TTF_Init error : " << TTF_GetError() << std::endl;
		return ;
	}

	font = TTF_OpenFont("libs/sdl/assets/orange juice 2.0.ttf", 20);
	text = TTF_RenderText_Shaded(font, "Score : ", blackFont, bgFont);

	startGame(borders, inside, text, font);

	SDL_FreeSurface(borders);
	TTF_CloseFont(font);
	TTF_Quit();
	SDL_Quit();
}

void		SDL::startGame(SDL_Surface *borders, SDL_Surface *inside, SDL_Surface *text, TTF_Font *font)
{
	int			score = 0;
	int			flag = 1;
	SDL_Event	event;
	SDL_Rect	pos;
	SDL_Surface	*textScore;
	SDL_Color	blackFont = {0, 0, 0, 0};
	SDL_Color	bgFont = {89, 152, 47, 0};

	while (flag)
	{
		while (SDL_PollEvent(&event))
		{
			textScore = TTF_RenderText_Shaded(font, std::to_string(score).c_str(), blackFont, bgFont);
			// if (event.type == SDL_QUIT)
			// {
			// 	flag = 0;
			// }
			// else if (event.type == SDL_KEYDOWN)
			// {
			// 	if (event.key.keysym.sym == SDLK_ESCAPE)
			// 		flag = 0;
			// 	else if (event.key.keysym.sym == SDLK_UP)
			// 		std::cout << "Up !" << std::endl;
			// }

			switch(event.type)
			{
				std::cout << "<" << event.key.keysym.sym << ">" << std::endl;
				case SDL_QUIT:
					flag = 0;
					break;
				case SDL_KEYDOWN:
				{
					std::cout << "Keypress !" << std::endl;
					// switch (event.key.keysym.sym)
					// {
					// 	case SDLK_ESCAPE:
					// 		flag = 0;
					// 		break;
					// 	case SDLK_UP:
					// 		std::cout << "Up !" << std::endl;
					// 		break;
					// 	case SDLK_DOWN:
					// 		std::cout << "Down !" << std::endl;
					// 		break;
					// 	case SDLK_RIGHT:
					// 		std::cout << "Right !" << std::endl;
					// 		break;
					// 	case SDLK_LEFT:
					// 		std::cout << "Left !" << std::endl;
					// 		break;
					// 	default:
					// 		;
					// }
					break;
				}
				case SDL_KEYUP:
				{
					std::cout << "Keyrelease !" << std::endl;
					break;
				}
			}

			SDL_FillRect(this->_screen, NULL, SDL_MapRGB(this->_screen->format, 89, 152, 47));

			pos.x = 5;
			pos.y = 5;
			SDL_BlitSurface(borders, NULL, this->_screen, &pos);

			pos.x = 10;
			pos.y = 10;
			SDL_BlitSurface(inside, NULL, this->_screen, &pos);

			pos.x = 10;
			pos.y = this->_y - 140;
			SDL_BlitSurface(text, NULL, this->_screen, &pos);

			pos.x = 70;
			pos.y = this->_y - 140;
			SDL_BlitSurface(textScore, NULL, this->_screen, &pos);

			SDL_Flip(this->_screen);
			// SDL_Delay(500);
			score++;
		}
	}
}

SDL		*createSDL()
{
	return (new SDL());
}

void		deleteSDL(SDL *SDL)
{
	delete SDL;
}
