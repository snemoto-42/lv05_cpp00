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

	while (1)
	{
		std::cout << "Enter Command : ";
		std::string command;
		std::cin >> command;

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
			std::cout << "Error Command\n";
		}
	}
	return (0);
}

// マニピュレータの活用

// cin
// 矢印キーなど入力を受け付けない
// Enter Command : Error Comand の無限ループ
// 空行はcinの終了
// A saved contact can’t have empty fields.

// cout
// 課題要件