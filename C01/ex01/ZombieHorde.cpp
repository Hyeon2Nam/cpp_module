/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:42:24 by hyenam            #+#    #+#             */
/*   Updated: 2022/01/20 22:03:05 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	Zombie *z = new Zombie[n];
	int i;

	i = -1;
	while (++i < n)
	{
		z[i].z_name = name;
		z[i].announce();
	}
	return (z);
}
