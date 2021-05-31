#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	make_test_header(std::string msg)
{
	std::cout << "-------------- ";
	std::cout << msg;
	std::cout << " --------------" << std::endl;
}

void	make_test_tail()
{
	std::cout << "------------------------------------" << std::endl;
}

void	test_frag_tp()
{
	std::cout << RED << "Calling Constructor" << RESET << std::endl;
    FragTrap test = FragTrap("Frank");
	std::cout << RED << "Calling Copy Constructor" << RESET << std::endl;
	FragTrap Copy = test;
	std::cout << RED << "Assignation operator called" << RESET << std::endl;
	FragTrap test2;
	test2 = test;
	std::cout << RED << "Testing melee attack" << RESET << std::endl;
	test.meleeAttack("Bidon");
	std::cout << RED << "Testing taking damages" << RESET << std::endl;
    test.takeDamage(20);
	std::cout << RED << "Testing being repaired" << RESET << std::endl;
	test.beRepaired(20);
	std::cout << RED << "Testing ranged attack" << RESET << std::endl;
	test.rangedAttack("Debbie");
	std::cout << RED << "Testing special attack" << RESET << std::endl;
	test.vaulthunter_dot_exe("John");
	std::cout << RED << "Destructor being called" << RESET << std::endl;
}

void	test_scav_tp()
{
	std::cout << RED << "Calling Constructor" << RESET << std::endl;
    ScavTrap test = ScavTrap("Frank");
	std::cout << RED << "Calling Copy Constructor" << RESET << std::endl;
	ScavTrap Copy = test;
	std::cout << RED << "Assignation operator called" << RESET << std::endl;
	ScavTrap test2;
	test2 = test;
	std::cout << RED << "Testing melee attack" << RESET << std::endl;
	test.meleeAttack("Bidon");
	std::cout << RED << "Testing taking damages" << RESET << std::endl;
    test.takeDamage(20);
	std::cout << RED << "Testing being repaired" << RESET << std::endl;
	test.beRepaired(20);
	std::cout << RED << "Testing ranged attack" << RESET << std::endl;
	test.rangedAttack("Debbie");
	std::cout << RED << "Testing special attack" << RESET << std::endl;
	test.challengeNewcomer();
	std::cout << RED << "Destructor being called" << RESET << std::endl;
}

int     main()
{
    /*ClapTrap pal = ClapTrap("pal");
    FragTrap test = FragTrap("Frank");
    ScavTrap tes2 = ScavTrap("Pierre");
    NinjaTrap ninja = NinjaTrap("ninja");
    SuperTrap super = SuperTrap("suoer");
    ninja.ninjaShoebox(pal);
    ninja.ninjaShoebox(test);
    ninja.ninjaShoebox(tes2);
    ninja.ninjaShoebox(ninja);
    pal.takeDamage(20);
    super.meleeAttack("Bidon");*/
    // FRAG-TP TESTS
	make_test_header("FRAG-TP");
	test_frag_tp();
	make_test_tail();

	make_test_header("SC4V-TP");
	test_scav_tp();
	make_test_tail();
	// TO DO FIXING ALL COPY OPERATOR

    
}