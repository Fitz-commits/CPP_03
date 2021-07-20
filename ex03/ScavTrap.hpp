#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const& to_copy);
	~ScavTrap();
	ScavTrap& operator=(ScavTrap const& to_copy);
	void guardGate();
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif