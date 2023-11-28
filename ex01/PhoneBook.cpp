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

void	PhoneBook::add(unsigned int index, Contact c){
	ct[index] = c;
}

// It has an array of contacts.
// It can store a maximum of 8 contacts.
// If the user tries to add a 9th contact, replace the oldest one by the new one.

void	PhoneBook::display(void) {
	;
}

// Display the saved contacts as a list of 4 columns: index, first name, last name and nickname.
// Each column must be 10 characters wide. A pipe character (’|’) separates them.
// The text must be right-aligned. If the text is longer than the column, it must be truncated and the last displayable character must be replaced by a dot (’.’).

void	PhoneBook::search(void) {
	unsigned int	i;

	std::cin >> i;
	if (i > 7)
		std::cout << "index is out of range\n";
	else
	{
		std::cout << "\n";
	}
}

// Then, prompt the user again for the index of the entry to display.
// If the index is out of range or wrong, define a relevant behavior.
// Otherwise, display the contact information, one field per line.
