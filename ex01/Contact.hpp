/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:47:14 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 16:28:30 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__

# include <iostream>

class Contact {

	public:
		Contact( void );
		~Contact( void );
		
		bool	input( void );

		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string secret;

		bool		added;

	private:

};

#endif /* __CONTACT_H__ */
