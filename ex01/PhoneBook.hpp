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

# include <iostream>

class PhoneBook {

	public:
		PhoneBook( void );
		~PhoneBook( void );

		static void add( void );
		static void display( void );
		static void input( void );

	private:
		std::string index;
		std::string firstname;
		std::string lastname;
		std::string nickname;

};

#endif /* __PHONEBOOK_H__ */
