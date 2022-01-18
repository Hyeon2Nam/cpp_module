/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:14:52 by hyenam            #+#    #+#             */
/*   Updated: 2022/01/18 18:12:04 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

int main(void)
{
	PhoneBook pb;
	std::string cmd;

	while (1)
	{
		std::cout << "Input Command:";
		std::cin >> cmd;
		if (cmd == "EXIT")
			return (0);
		else if (cmd == "ADD")
			pb.AddPhoneBook();
		else if (cmd == "SEARCH")
			pb.ShowPhonebook();
		else
			std::cout << "Invalid command." << std::endl;
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		if (std::cin.eof())
			return (0);
	}
	return (0);
}