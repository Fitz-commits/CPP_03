#ifndef NINJA_TRAP_HPP
#define NINJA_TRAP_HPP

class SuperTrap;

#include "ScavTrap.hpp"



class NinjaTrap : virtual public ClapTrap
{
private:
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const& to_copy);
	~NinjaTrap();
	NinjaTrap& operator=(NinjaTrap const& to_copy);
	void ninjaShoebox(ClapTrap const& target);
	void ninjaShoebox(FragTrap const& target);
	void ninjaShoebox(NinjaTrap const& target);
	void ninjaShoebox(ScavTrap const& target);
	void ninjaShoebox(SuperTrap const& target);
	std::string getName() const;

};

std::ostream & operator<<(std::ostream &out, NinjaTrap const &ct);

#include "SuperTrap.hpp"
#endif
