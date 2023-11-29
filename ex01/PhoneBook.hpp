/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:26:28 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 16:28:38 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook {

	public:
		PhoneBook( void );
		~PhoneBook( void );

		void add( unsigned int, Contact );
		void display( void );
		void search( void );

	private:
		Contact		c[8];
		std::string pb_firstname;
		std::string pb_lastname;
		std::string pb_nickname;
};

#endif /* __PHONEBOOK_H__ */
