/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:32:51 by hyenam            #+#    #+#             */
/*   Updated: 2022/01/20 22:02:52 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:

public:
	std::string z_name;
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce(void);
};
	Zombie *zombieHorde(int n, std::string name);


#endif