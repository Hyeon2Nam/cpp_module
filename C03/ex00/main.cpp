/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:05:02 by hyenam            #+#    #+#             */
/*   Updated: 2022/02/12 20:23:17 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	{
		ClapTrap a;
		ClapTrap b(a);
	}
	{
		std::cout << "================================================================" << std::endl;
		ClapTrap a("BoB");
		ClapTrap b("John");

		a.setDamage(1);
		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
		b.beRepaired(b.getEnergyPoints());
		a.setDamage(10);
		b.takeDamage(a.getAttackDamage());
	}

	return 0;
}