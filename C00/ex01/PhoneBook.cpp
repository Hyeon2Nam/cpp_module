/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:14:52 by hyenam            #+#    #+#             */
/*   Updated: 2022/01/18 18:41:48 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

void Contact::AddContact()
{
	std::cin.ignore(CHAR_MAX, '\n');
	std::cout << "Input first name:";
	std::cin >> first_name;
	std::cout << "Input last name:";
	std::cin >> last_name;
	std::cout << "Input nickname:";
	std::cin >> nickname;
	std::cout << "Input phone number:";
	std::cin >> phone_number;
	std::cout << "Input darkest secret:";
	std::cin >> darkest_secret;
}

void Contact::ShowContact()
{
	if (first_name.length() > 10)
		std::cout << std::setw(9) << first_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << first_name << '|';
	if (last_name.length() > 10)
		std::cout << std::setw(9) << last_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << last_name << '|';
	if (nickname.length() > 10)
		std::cout << std::setw(9) << nickname.substr(0, 9) << ".|" << std::endl;
	else
		std::cout << std::setw(10) << nickname << '|' << std::endl;
}

void Contact::ShowAllInfo()
{
	std::cout << "first name    :" << first_name << std::endl;
	std::cout << "last name     :" << last_name << std::endl;
	std::cout << "nickname      :" << nickname << std::endl;
	std::cout << "phone number  :" << phone_number << std::endl;
	std::cout << "darkest secret:" << darkest_secret << std::endl;
}

PhoneBook::PhoneBook()
{
	index = 0;
	old = 0;
}

void PhoneBook::AddPhoneBook()
{
	if (index == 8)
	{
		phonebook[old].AddContact();
		old++;
		if (old == 8)
			old = 0;
	}
	else
	{
		phonebook[index].AddContact();
		index++;
	}
}

void PhoneBook::ShowPhonebook()
{
	int i;

	if (index == 0)
	{
		std::cout << "No contact" << std::endl;
		return ;
	}
	i = -1;
	while (++i < index)
	{
		std::cout << std::setw(10) << i + 1 << '|';
		phonebook[i].ShowContact();
	}
	std::cout << "Input index:";
	std::cin >> i;
	if (i > index || i > 8 || i <= 0 || std::cin.fail())
	{
		std::cout << "Invalid input value." << std::endl;
		return;
	}
	phonebook[i - 1].ShowAllInfo();
}