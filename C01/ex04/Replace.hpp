/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:12:34 by hyenam            #+#    #+#             */
/*   Updated: 2022/01/21 21:46:26 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class Replace
{
private:
	std::string fname;
	std::string str1;
	std::string str2;
	std::string res;
public:
	Replace(std::string fname, std::string str1, std::string str2);
	bool checkString();
	bool readFileData();
	void replaceString();
	bool makeReplaceFile();
};

#endif