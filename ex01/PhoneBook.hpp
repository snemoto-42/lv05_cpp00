/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:26:28 by snemoto           #+#    #+#             */
/*   Updated: 2023/11/30 21:19:14 by snemoto          ###   ########.fr       */
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
		Contact		_c[8];
};

#endif /* __PHONEBOOK_H__ */
