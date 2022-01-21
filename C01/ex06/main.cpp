/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:05:02 by hyenam            #+#    #+#             */
/*   Updated: 2022/01/21 23:48:35 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		if (argc > 2)
			std::cout << "Error. Too many argument value." << std::endl;
		if (argc < 2)
			std::cout << "Error. Too few argument value." << std::endl;
		return (1);
	}

	Karen karen;

	karen.complain(argv[1]);
	return (0);
}