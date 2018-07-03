#include "Federation.hh"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
	this->_length = length;
	this->_width = width;
	this->_name = name;
	this->_maxWarp = maxWarp;
	this->_core = NULL;
	std::cout << "The ship USS " << name << " has been finished. It is ";
	std::cout << length << " m in length and " << width;
	std::cout << " m in width." << '\n';
	std::cout << "It can go to Warp " << maxWarp << "!\n";
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
	this->_core = core;
	std::cout << "USS " << this->_name << ": The core is set.\n";
}

void Federation::Starfleet::Ship::checkCore()
{
	std::cout << "USS " << this->_name << ": The core is ";
	if (this->_core->checkReactor()->isStable() == true) 
	{
		std::cout << "stable";
	}
	else 
	{
		std::cout << "unstable";
	}
	std::cout << " at the time.\n";
}

Federation::Ship::Ship(int length , int width, std::string name)
{
	this->_length = length;
	this->_width = width;
	this->_name = name;
	this->_maxWarp = 1;
	std::cout << "The independant ship " << name;
	std::cout << " just finished its construction. It is ";
	std::cout << length << " m in length and " << width;
	std::cout << " m in width." << '\n';
}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
	this->_core = core;
	std::cout << this->_name << ": The core is set.\n";
}

void Federation::Ship::checkCore()
{
	std::cout << this->_name << ": The core is ";
	if (this->_core->checkReactor()->isStable() == true) 
	{
		std::cout << "stable";
	}
	else 
	{
		std::cout << "unstable";
	}
	std::cout << " at the time.\n";
}
