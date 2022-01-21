/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:05:02 by hyenam            #+#    #+#             */
/*   Updated: 2022/01/21 21:47:34 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char *argv[])
{
	if (argc > 4 || argc < 4)
	{
		if (argc > 4)
			std::cout << "Error. Too many argument value." << std::endl;
		if (argc < 4)
			std::cout << "Error. Too few argument value." << std::endl;
		return (1);
	}

	Replace re(argv[1], argv[2], argv[3]);

	if (!re.checkString())
	{
		std::cout << "Error. Empty string." << std::endl;
		return (1);
	}

	if (re.readFileData())
	{
		re.replaceString();
		if (!re.makeReplaceFile())
			return (1);
	}
	else
		return (1);
	return (0);
}