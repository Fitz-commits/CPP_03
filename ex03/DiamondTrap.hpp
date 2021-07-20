#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

class DiamondTrap;

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string Name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const& to_copy);
	~DiamondTrap();
	DiamondTrap& operator=(DiamondTrap const& to_copy);
	void attack(std::string const& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void whoAmI();
	//getter
	std::string getName() const;
	

};


#endif