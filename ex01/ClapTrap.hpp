#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define HP GREEN << this->HitPoints << RESET

class ClapTrap
{
protected:
	std::string Name;
	int EnergyPoints;
	int HitPoints;
	int AttackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const& to_copy);
	~ClapTrap();
	ClapTrap& operator=(ClapTrap const& to_copy);
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif