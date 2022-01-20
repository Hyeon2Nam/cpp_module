/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:32:47 by hyenam            #+#    #+#             */
/*   Updated: 2022/01/20 21:27:00 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string name;

	name = "ZOMBIE";
	Zombie z1(name.append(std::to_string(1)));
	z1.announce();
	name = "ZOMBIE";
	Zombie *z2 = newZombie(name.append(std::to_string(2)));
	z2->announce();
	delete z2;
	name = "ZOMBIE";
	randomChump(name.append(std::to_string(3)));
	return (0);
}