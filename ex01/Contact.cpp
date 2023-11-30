/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:47:10 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 16:30:00 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	added = false;
}

Contact::~Contact(void) {
	;
}

static std::string	check_and_input(std::string msg)
{
	std::string str;

	std::cout << msg;
	std::getline(std::cin, str);
	if (std::cin.eof() || std::cin.bad())
	{
		std::cout << "\n---Error Input---\n";
		std::exit(0);
	}
	return (str);
}

bool	Contact::input(void)
{
	this->firstname = check_and_input("Enter firstname : ");
	if (this->firstname.empty())
		return (false);
	this->lastname = check_and_input("Enter lastname : ");
	if (this->lastname.empty())
		return (false);
	this->nickname = check_and_input("Enter nickname : ");
	if (this->nickname.empty())
		return (false);
	this->phonenumber = check_and_input("Enter phonenumber : ");
	if (this->phonenumber.empty())
		return (false);
	this->secret = check_and_input("Enter secret : ");
	if (this->secret.empty())
		return (false);
	added = true;
	return (true);
}
