/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:47:10 by snemoto           #+#    #+#             */
/*   Updated: 2023/11/30 21:20:25 by snemoto          ###   ########.fr       */
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
	_firstname = check_input("Enter firstname : ");
	if (!check_str(_firstname))
		return (false);
	_lastname = check_input("Enter lastname : ");
	if (!check_str(_lastname))
		return (false);
	_nickname = check_input("Enter nickname : ");
	if (!check_str(_nickname))
		return (false);
	_phonenumber = check_input("Enter phonenumber : ");
	if (!check_str(_phonenumber))
		return (false);
	_secret = check_input("Enter secret : ");
	if (!check_str(_secret))
		return (false);
	added = true;
	return (true);
}

void	Contact::display(void)
{
	if (_firstname.length() > 10)
		_firstname.replace(9,_firstname.length() - 9,".");
	std::cout << std::setw(10) << std::right << _firstname << "|";
	if (_lastname.length() > 10)
		_lastname.replace(9,_lastname.length() - 9,".");
	std::cout << std::setw(10) << std::right << _lastname << "|";
	if (_nickname.length() > 10)
		_nickname.replace(9,_nickname.length() - 9,".");
	std::cout << std::setw(10) << std::right << _nickname << "\n";
}

void	Contact::search(void)
{
	std::cout << "firstname : " << _firstname << "\n";
	std::cout << "lastname : " << _lastname << "\n";
	std::cout << "nickname : "<< _nickname << "\n";
	std::cout << "phonenumber : " << _phonenumber << "\n";
	std::cout << "secret : " << _secret << "\n";	
}
