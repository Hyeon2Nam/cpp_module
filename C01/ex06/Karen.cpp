/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 21:58:27 by hyenam            #+#    #+#             */
/*   Updated: 2022/01/22 00:05:21 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
			  << std::endl
			  << "just love it!" << std::endl
			  << std::endl;
}

void Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money."
			  << std::endl
			  << "You don’t put enough!"
			  << std::endl
			  << "If you did I would not have to ask for it!" << std::endl
			  << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
			  << std::endl
			  << "I’ve been coming here for years and you just started working here last month." << std::endl
			  << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl
			  << std::endl;
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
	int flag;

	Karen::changeStr(level);
	flag = 4;
	for (int i = 0; i < str->size() - 1; i++)
		if (level == str[i])
			flag = i;
	switch (flag)
	{
	case 0:
		(*this.*ptr[0])();
	case 1:
		(*this.*ptr[1])();
	case 2:
		(*this.*ptr[2])();
	case 3:
		(*this.*ptr[3])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}