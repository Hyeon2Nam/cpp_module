/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:05:02 by hyenam            #+#    #+#             */
/*   Updated: 2022/02/15 17:49:51 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	{
		DiamondTrap a;
		a.whoAmI();
	}
	{
		std::cout << "================================================================" << std::endl;
		ClapTrap a("Bob");
		DiamondTrap b("John");

		b.attack(a.getName());
	}
	return 0;
}