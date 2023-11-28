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

	while (c[i].added == true && i < 8)
	{
		std::cout << i << "|" << c[i].firstname << "|" << c[i].lastname << "|" << c[i].nickname << "\n";
		++i;
	}
}

// Display the saved contacts as a list of 4 columns: index, first name, last name and nickname.
// Each column must be 10 characters wide. A pipe character (’|’) separates them.
// The text must be right-aligned. If the text is longer than the column, it must be truncated and the last displayable character must be replaced by a dot (’.’).

void	PhoneBook::search(void) {

	unsigned int	i;

	std::cout << "Enter Index : ";
	std::cin >> i;
	if (i < 8)
	{
		std::cout << "firstname : " << c[i].firstname << "\n";
		std::cout << "lastname : " << c[i].lastname << "\n";
		std::cout << "nickname : "<< c[i].nickname << "\n";
		std::cout << "phonenumber : " << c[i].phonenumber << "\n";
		std::cout << "secret : " << c[i].secret << "\n";
	}
	else
		std::cout << "index is out of range\n";
}
