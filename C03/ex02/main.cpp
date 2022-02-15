/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:05:02 by hyenam            #+#    #+#             */
/*   Updated: 2022/02/15 16:24:39 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	{
		ClapTrap a("Bob");
		FragTrap b("John");
		std::cout << a.getName() << std::endl;
		std::cout << b.getName() << std::endl;
	}
	{
		std::cout << "================================================================" << std::endl;
		ClapTrap a("Bob");
		FragTrap b("John");

		a.setDamage(20);
		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
		b.beRepaired(b.getEnergyPoints());

		b.highFivesGuys();
		b.attack(a.getName());
	}

	return 0;
}