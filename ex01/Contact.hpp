/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:47:14 by snemoto           #+#    #+#             */
/*   Updated: 2023/11/30 21:22:43 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <iostream>
#include <iomanip>

class Contact {

	public:
		Contact( void );
		~Contact( void );
		
		bool	input( void );
		void	display( void );
		void	search( void );
		bool	added;

	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phonenumber;
		std::string _secret;
};

#endif /* __CONTACT_H__ */
