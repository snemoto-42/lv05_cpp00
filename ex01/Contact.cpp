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

static void	input(void) {
	;
}

static bool	check(void) {
	;
}

// If the user enters this command, they are prompted to input the information
// of the new contact one field at a time. Once all the fields have been completed,
// add the contact to the phonebook.
// The contact fields are: first name, last name, nickname, phone number, and
// darkest secret. A saved contact can’t have empty fields.