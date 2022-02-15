/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:05:02 by hyenam            #+#    #+#             */
/*   Updated: 2022/02/14 15:17:58 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	{
		ClapTrap a("Bob");
		ScavTrap b("John");
		std::cout << a.getName() << std::endl;
		std::cout << b.getName() << std::endl;
	}
	{
		std::cout << "================================================================" << std::endl;
		ClapTrap a("Bob");
		ScavTrap b("John");

		a.setDamage(20);
		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
		b.beRepaired(b.getEnergyPoints());

		b.guardGate();
		b.attack(a.getName());
		a.takeDamage(b.getAttackDamage());
	}

	return 0;
}