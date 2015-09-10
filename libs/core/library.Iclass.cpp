#include "library.Iclass.hpp"

Library::Library(void)
{
	return ;
}

Library::Library(const Library &src)
{
	*this = src;
	return ;
}

Library::~Library(void)
{
	return ;
}

Library		&Library::operator=(const Library &src)
{
	static_cast<void>(src);
	return (*this);
}
