#ifndef SUPER_TRAP_HPP
#define SUPER_TRAP_HPP

#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
private:
public:
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const& to_copy);
	~SuperTrap();
	SuperTrap& operator=(SuperTrap const& to_copy);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	//assignation operator missing
};
std::ostream & operator<<(std::ostream &out, SuperTrap const &ct);
#endif
