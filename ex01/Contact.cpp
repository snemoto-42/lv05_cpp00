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
	;
}

Contact::~Contact(void) {
	;
}

bool	Contact::input(void) {

	std::cout << "Enter firstname : ";
	std::cin >> firstname;
	std::cout << "Enter lastname : ";
	std::cin >> lastname;
	std::cout << "Enter nickname : ";
	std::cin >> nickname;
	std::cout << "Enter phonenumber : ";
	std::cin >> phonenumber;
	std::cout << "Enter secret : ";
	std::cin >> secret;

	if (firstname.empty() || \
		lastname.empty() || \
		nickname.empty() || \
		phonenumber.empty() || \
		secret.empty())
		return (false);
	added = true;
	return (true);
}
