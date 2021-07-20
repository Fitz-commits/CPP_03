#include "ClapTrap.hpp"

void	make_test_header(std::string msg)
{
	std::cout << "-------------- ";
	std::cout << msg;
	std::cout << " --------------" << std::endl;
}

void	make_test_tail()
{
	std::cout << "--------------------------------" << std::endl;
}

void	test_clap_tp()
{
	std::cout << RED << "Calling Constructor" << RESET << std::endl;
    ClapTrap test = ClapTrap("Frank");
	std::cout << RED << "Calling Copy Constructor" << RESET << std::endl;
	ClapTrap Copy = test;
	std::cout << RED << "Assignation operator called" << RESET << std::endl;
	ClapTrap test2;
	test2 = test;
	std::cout << RED << "Testing melee attack" << RESET << std::endl;
	test.attack("Bidon");
	std::cout << RED << "Testing taking damages" << RESET << std::endl;
    test.takeDamage(20);
	std::cout << RED << "Testing being repaired" << RESET << std::endl;
	test.beRepaired(20);
}
int     main()
{
	make_test_header("CL4P-TP");
	test_clap_tp();
	make_test_tail();
}