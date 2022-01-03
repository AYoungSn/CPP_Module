#include "Brain.hpp"

Brain::Brain()
{
	std::string buf[] = {
		"🐶",
		"🐱",
		"🐹",
		"🐰",
		"🦊",
		"🐙",
		"🐤",
		"🐯",
		"🐳",
		"🌈"
	};
	std::cout << "Brain Constructor\n";
	for (int i = 0;i < 100;i++)
		ideas[i] = buf[rand() % (sizeof(buf) / sizeof(std::string))];
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain Copy Constructor\n";
	operator=(src);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor\n";
}

Brain &Brain::operator=(Brain const & b)
{
	for(int i =0;i < 100;i++) {
		this->ideas[i] = b.ideas[i];
	}
	return *this;
}

std::string const &Brain::getIdeas(size_t index)const
{
	return this->ideas[index];
}