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

	while (1)
	{
		std::cout << "Enter Comand : ";
		std::string command;
		std::cin >> command;

		PhoneBook pb;

		if (command == "ADD")
		{
			Contact ct;

			if (!ct.input())
				std::cout << "Error ADD\n";
			else
			{
				++index;
				pb.add(index, ct);
				std::cout << "---Finish ADD---\n";
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
			std::cout << "Error Command\n";
	}
	return (0);
}
