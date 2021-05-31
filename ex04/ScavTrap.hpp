#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "FragTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap();
	ScavTrap(ScavTrap const& to_copy);
	~ScavTrap();
	ScavTrap& operator=(ScavTrap const& to_copy);
    void challengeNewcomer();
};
std::ostream & operator<<(std::ostream &out, ScavTrap const &ct);
#endif