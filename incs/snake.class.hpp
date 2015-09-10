#ifndef SNAKE_CLASS_HPP
# define SNAKE_CLASS_HPP
# include <list>

class Snake
{
private:
	int	xSnakes;
	int	ySnakes;

public:
	Snake(int a, int b)
	{
		xSnakes = a;
		ySnakes = b;
	};
	~Snake(){}
	;
	// Snake(const Snake & copy);
	// Snake & operator=(const Snake &);

	int		getX(){ return xSnakes;};
	int		getY(){ return ySnakes;};
};

#endif
