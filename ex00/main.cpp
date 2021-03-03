#include "Pony.hpp"

void	ponyOnTheStack(std::string const name, std::string color, int weight, int age)
{
	Pony pony_default;
	Pony my_pony(name, color, weight, age);
	
	pony_default.hi();
	pony_default.sound("blah blah");
	my_pony.hi();
	my_pony.sound("blah blah");
}

void	ponyOnTheHeap(std::string const name, std::string color, int weight, int age)
{
	Pony *pony_default = new Pony();
	Pony *my_pony =  new Pony(name, color, weight, age);

	pony_default->hi();
	pony_default->sound("blah blah");
	my_pony->hi();
	my_pony->sound("blah blah");
	delete (pony_default);
	delete (my_pony);
}

int main(void)
{
	std::string const name = "Rainbow";
	std::string const color = "blue";
	int weight;
	int age;

	weight = 42;
	age = 10;
	std::cout << "PonyOnTheStack:" << std::endl;
	ponyOnTheStack(name, color, weight, age);
	std::cout << "PonyOnTheHeap:" << std::endl;
	ponyOnTheHeap(name, color, weight, age);
	return (0);
}
