/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:26:36 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 16:29:57 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	;
}

PhoneBook::~PhoneBook(void) {
	;
}

void	PhoneBook::add(unsigned int index, Contact ct){
	c[index] = ct;
}

void	PhoneBook::display(void) {

	unsigned int	i = 0;

	std::cout << std::setw(10) << std::right << "index" << "|"; 
	std::cout << std::setw(10) << std::right << "firstname" << "|"; 
	std::cout << std::setw(10) << std::right << "lastname" << "|"; 
	std::cout << std::setw(10) << std::right << "nickname" << "\n";
	while (c[i].added == true && i < 8)
	{

		pb_firstname = c[i].firstname;
		pb_lastname = c[i].lastname;
		pb_nickname = c[i].nickname;

		std::cout << std::setw(10) << std::right << i + 1 << "|";
		if (pb_firstname.length() > 10)
			pb_firstname.replace(9,pb_firstname.length() - 9,".");
		std::cout << std::setw(10) << std::right << pb_firstname << "|";
		if (pb_lastname.length() > 10)
			pb_lastname.replace(9,pb_lastname.length() - 9,".");
		std::cout << std::setw(10) << std::right << pb_lastname << "|";
		if (pb_nickname.length() > 10)
			pb_nickname.replace(9,pb_nickname.length() - 9,".");
		std::cout << std::setw(10) << std::right << pb_nickname << "\n";
		++i;
	}
}

void	PhoneBook::search(void) {

	std::string		str;
	unsigned int	i;

	std::cout << "Enter Index : ";
	std::getline(std::cin, str);
	i = std::atoi(str.c_str());
	if(i < 1 || 8 < i || c[i - 1].added == false)
	{
		std::cout << "index is out of range\n";
		return ;
	}
	std::cout << "firstname : " << c[i - 1].firstname << "\n";
	std::cout << "lastname : " << c[i - 1].lastname << "\n";
	std::cout << "nickname : "<< c[i - 1].nickname << "\n";
	std::cout << "phonenumber : " << c[i - 1].phonenumber << "\n";
	std::cout << "secret : " << c[i - 1].secret << "\n";
}
