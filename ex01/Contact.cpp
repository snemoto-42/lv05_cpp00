/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:47:10 by snemoto           #+#    #+#             */
/*   Updated: 2023/11/30 20:03:43 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	added = false;
}

Contact::~Contact(void) {
	;
}

static std::string	check_input(std::string msg)
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

static bool	check_str(std::string str)
{
	if (str.empty())
		return (false);
	for (unsigned long idx = 0; idx < str.length(); idx++)
		if (!std::isprint(str[idx]))
			return (false);
	return (true);
}

bool	Contact::input(void)
{
	this->firstname = check_input("Enter firstname : ");
	if (!check_str(this->firstname))
		return (false);
	this->lastname = check_input("Enter lastname : ");
	if (!check_str(this->lastname))
		return (false);
	this->nickname = check_input("Enter nickname : ");
	if (!check_str(this->nickname))
		return (false);
	this->phonenumber = check_input("Enter phonenumber : ");
	if (!check_str(this->phonenumber))
		return (false);
	this->secret = check_input("Enter secret : ");
	if (!check_str(this->secret))
		return (false);
	added = true;
	return (true);
}
