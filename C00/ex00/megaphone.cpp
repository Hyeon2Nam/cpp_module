/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:50:00 by hyenam            #+#    #+#             */
/*   Updated: 2022/01/18 13:07:43 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 0;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
			std::cout << static_cast<char>(std::toupper(argv[i][j]));
	}
	std::cout << std::endl;
	return (0);
}