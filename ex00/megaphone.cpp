/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:23:42 by snemoto           #+#    #+#             */
/*   Updated: 2023/09/03 16:22:37 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char *argv[])
{
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int idx = 1; idx < argc; idx++) {
		std::string str = argv[idx];
		for (unsigned long n = 0; n < str.length(); n++) {
			char c = toupper(argv[idx][n]);
			std::cout << c;
		}
	}
	std::cout << std::endl;
	return (0);
}
