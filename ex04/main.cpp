#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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
void test_ninja_shoebox(NinjaTrap &test)
{
	ScavTrap Scav = ScavTrap("Scav");
	FragTrap Frag = FragTrap("Frag");
	ClapTrap Clap = ClapTrap("Clap");

	test.ninjaShoebox(Scav);
	test.ninjaShoebox(Frag);
	test.ninjaShoebox(Clap);
	test.ninjaShoebox(test);
}

void test_super_shoebox(SuperTrap &test)
{
	ScavTrap Scav = ScavTrap("Scav");
	FragTrap Frag = FragTrap("Frag");
	ClapTrap Clap = ClapTrap("Clap");

	test.ninjaShoebox(Scav);
	test.ninjaShoebox(Frag);
	test.ninjaShoebox(Clap);
	test.ninjaShoebox(test);
}

void test_ninja_tp()
{
	std::cout << RED << "Calling Constructor" << RESET << std::endl;
    NinjaTrap test = NinjaTrap("Frank");
	std::cout << RED << "Calling Copy Constructor" << RESET << std::endl;
	NinjaTrap Copy = test;
	std::cout << RED << "Assignation operator called" << RESET << std::endl;
	NinjaTrap test2;
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
	make_test_header("Ninja Shoebox");
	test_ninja_shoebox(test);
	make_test_tail();
	std::cout << RED << "Destructor being called" << RESET << std::endl;
}

void test_super_tp()
{
	std::cout << RED << "Calling Constructor" << RESET << std::endl;
    SuperTrap test = SuperTrap("Frank");
	std::cout << RED << "Calling Copy Constructor" << RESET << std::endl;
	SuperTrap Copy = test;
	std::cout << RED << "Assignation operator called" << RESET << std::endl;
	SuperTrap test2;
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
	make_test_header("Super Shoebox");
	test_super_shoebox(test);
	make_test_tail();
	test.vaulthunter_dot_exe("John");
	std::cout << RED << "Destructor being called" << RESET << std::endl;
}

int     main()
{
	make_test_header("FRAG-TP");
	test_frag_tp();
	make_test_tail();

	make_test_header("SC4V-TP");
	test_scav_tp();
	make_test_tail();

	make_test_header("NINJ4-TP");
	test_ninja_tp();
	make_test_tail();

	make_test_header("SUPER-TP");
	test_super_tp();
	make_test_tail();
    
}