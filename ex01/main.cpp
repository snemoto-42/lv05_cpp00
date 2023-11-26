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

		PhoneBook pb;
		if (command == "ADD")
		{
			Contact ct;
			ct.input();
			if (!ct.check())
				std::cout << "Error ADD\n";
			else
				pb.add();
		}
		else if (command == "SEARCH")
		{
			pb.display();
			pb.input();
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

// Once a command has been correctly executed, the program waits for another one. It
// stops when the user inputs EXIT.