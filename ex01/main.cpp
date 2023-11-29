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
	unsigned int	index = 0;
	PhoneBook		pb;
	Contact			ct[8];
	std::string		command;

	while (1)
	{
		std::cout << "Enter Command : ";
		std::getline(std::cin, command);

		if (command == "ADD")
		{
			if (!ct[index].input())
				std::cout << "Error ADD\n";
			else
			{
				pb.add(index, ct[index]);
				std::cout << "---Finish ADD---\n";
				++index;
				if (index == 8)
					index = 0;
			}
		}
		else if (command == "SEARCH")
		{
			pb.display();
			pb.search();
			std::cout << "---Finish SEARCH---\n";
		}
		else if (command == "EXIT")
		{
			std::cout << "---Good Bye---\n";
			break ;	
		}
		else
		{
			std::cout << "---Error Command---\n";
		}
		std::cin.clear();
	}
	return (0);
}
