/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 21:58:27 by hyenam            #+#    #+#             */
/*   Updated: 2022/01/21 23:39:04 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::changeStr(std::string &str)
{
	for (int i = 0; i < str.length(); i++)
		str[i] = static_cast<char>(std::toupper(str[i]));
}

void Karen::complain(std::string level)
{
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*ptr[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	Karen::changeStr(level);
	for (int i = 0; i < str->size(); i++)
	{
		if (level == str[i])
			(*this.*ptr[i])();
	}
	
}