/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:26:36 by snemoto           #+#    #+#             */
/*   Updated: 2023/11/30 21:22:11 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	;
}

PhoneBook::~PhoneBook(void) {
	;
}

void	PhoneBook::add(unsigned int i, Contact ct){
	_c[i] = ct;
}

void	PhoneBook::display(void) {

	unsigned int	i = 0;

	std::cout << std::setw(10) << std::right << "index" << "|"; 
	std::cout << std::setw(10) << std::right << "firstname" << "|"; 
	std::cout << std::setw(10) << std::right << "lastname" << "|"; 
	std::cout << std::setw(10) << std::right << "nickname" << "\n";

	while (_c[i].added == true && i < 8)
	{
		std::cout << std::setw(10) << std::right << i + 1 << "|";
		_c[i].display();
		++i;
	}
}

void	PhoneBook::search(void) {

	std::string		str;
	unsigned int	i;

	std::cout << "Enter Index : ";
	std::getline(std::cin, str);
	if (std::cin.eof() || std::cin.bad())
	{
		std::cout << "\n---Error Input---\n";
		std::exit(0);
	}

	i = std::atoi(str.c_str());
	if (i < 1 || 8 < i || _c[i - 1].added == false)
	{
		std::cout << "index is out of range\n";
		return ;
	}
	_c[i - 1].search();
}
