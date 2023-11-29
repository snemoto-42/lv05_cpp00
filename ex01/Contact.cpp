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

bool	Contact::input(void) {

	std::cout << "Enter firstname : ";
	std::getline(std::cin, firstname);
	if (firstname.empty())
		return (false);

	std::cout << "Enter lastname : ";
	std::getline(std::cin, lastname);
	if (lastname.empty())
		return (false);

	std::cout << "Enter nickname : ";
	std::getline(std::cin, nickname);
	if (nickname.empty())
		return (false);

	std::cout << "Enter phonenumber : ";
	std::getline(std::cin, phonenumber);
	if (phonenumber.empty())
		return (false);

	std::cout << "Enter secret : ";
	std::getline(std::cin, secret);
	if (secret.empty())
		return (false);	

	added = true;
	return (true);
}
