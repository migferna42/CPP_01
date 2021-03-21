#include "Pony.hpp"

void	ponyOnTheStack(std::string const name, std::string color, int weight)
{
	Pony my_pony(name, color, weight);
	
	my_pony.hi();
	my_pony.run();
	my_pony.jump();
	my_pony.sound("blah blah");
}

void	ponyOnTheHeap(std::string const name, std::string color, int weight)
{
	Pony *my_pony =  new Pony(name, color, weight);

	my_pony->hi();
	my_pony->run();
	my_pony->jump();
	my_pony->sound("blah blah");
	delete (my_pony);
}

int main(void)
{
	std::string const color = "blue";

	std::cout << "PonyOnTheStack:" << std::endl;
	ponyOnTheStack("PonyStack", color, 21);
	std::cout << "PonyOnTheHeap:" << std::endl;
	ponyOnTheHeap("PonyHeap", color, 42);
	return (0);
}
