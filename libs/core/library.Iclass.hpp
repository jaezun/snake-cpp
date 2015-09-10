#ifndef LIBRARY_ICLASS_HPP
# define LIBRARY_ICLASS_HPP
# include <unistd.h>

class Library
{
public:
	virtual void	init(size_t width, size_t height) = 0;
};

#endif
