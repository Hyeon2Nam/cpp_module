/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:32:48 by hyenam            #+#    #+#             */
/*   Updated: 2022/01/22 15:23:43 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name)
{
	z_name = name;
}

Zombie::~Zombie()
{
	std::cout << "<" + z_name + ">" + " die..." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" + z_name + ">" " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	z_name = name;
}
