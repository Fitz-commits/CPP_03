#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{   
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap& operator =(FragTrap const& to_copy);
    FragTrap(FragTrap const& to_copy);
    void vaulthunter_dot_exe(std::string const & target);
    void meleeAttack(std::string const & target);
    ~FragTrap();
};

std::ostream & operator<<(std::ostream &out, FragTrap const &ct);

#endif