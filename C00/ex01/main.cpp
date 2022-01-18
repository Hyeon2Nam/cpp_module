/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:14:52 by hyenam            #+#    #+#             */
/*   Updated: 2022/01/18 14:05:01 by hyenam           ###   ########.fr       */
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
			break ;
		else if (cmd == "ADD")
			pb.AddPhoneBook();
		else if (cmd == "SEARCH")
			pb.ShowPhonebook();
		else
			std::cout << "Invalid command." << std::endl;
	}
	return (0);
}