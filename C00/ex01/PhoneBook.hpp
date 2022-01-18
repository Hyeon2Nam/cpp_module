/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:19:45 by hyenam            #+#    #+#             */
/*   Updated: 2022/01/18 16:18:55 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
public:
	void AddContact();
	void ShowContact();
	void ShowAllInfo();
};

class PhoneBook
{
private:
	Contact phonebook[8];
	int index;
	int old;
public:
	PhoneBook();
	void AddPhoneBook();
	void ShowPhonebook();
};

#endif