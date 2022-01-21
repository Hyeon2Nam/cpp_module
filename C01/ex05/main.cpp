/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:05:02 by hyenam            #+#    #+#             */
/*   Updated: 2022/01/21 23:18:34 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char *argv[])
{
	Karen karen;

	karen.complain("debug");
	karen.complain("INFO");
	karen.complain("warning");
	karen.complain("ERROR");
	return (0);
}