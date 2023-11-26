/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:56:11 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 16:26:40 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	while (1)
	{
		std::string command;
		std::cin >> command;

		Contact ct;
		PhoneBook pb;

		if (command == "ADD")
		{
			ct.input();
			if (!ct.check())
				std::cout << "Error add\n";
			else
				ct.add();
		}
		else if (command == "SEARCH")
		{
			pb.input();
			pb.display();
		}
		else if (command == "EXIT")
		{
			break ;
		}
		else
			std::cout << "Error Command\n";
	}
	return (0);
}
