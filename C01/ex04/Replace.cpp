/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:12:21 by hyenam            #+#    #+#             */
/*   Updated: 2022/01/21 21:47:53 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string fname, std::string str1, std::string str2)
	: fname(fname), str1(str1), str2(str2){};

bool Replace::checkString()
{
	if (str1.empty() || str2.empty())
		return (false);
	return (true);
}

bool Replace::readFileData()
{
	std::ifstream f(fname);
	std::ostringstream temp;

	if (f.is_open())
	{
		temp << f.rdbuf();
		res = temp.str();
	}
	else
	{
		std::cout << "Error. No such file." << std::endl;
		return (false);
	}
	f.close();
	return (true);
}

void Replace::replaceString()
{
	int n;
	while (res.find(str1) != std::string::npos)
	{
		n = res.find(str1);
		res.erase(n, str1.length());
		res.insert(n, str2);
	}
}

bool Replace::makeReplaceFile()
{
	fname += ".replace";
	std::ofstream out(fname);
	if (out.is_open())
		out << res;
	else
	{
		std::cout << "Error. Failed to make a file." << std::endl;
		return (false);
	}
	out.close();
	return (true);
}
