#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const& to_copy);
	~FragTrap();
	FragTrap& operator=(FragTrap const& to_copy);
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void highFivesGuys(void);
};

#endif