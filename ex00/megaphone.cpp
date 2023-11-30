/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:23:42 by snemoto           #+#    #+#             */
/*   Updated: 2023/11/30 21:04:33 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int idx = 1; idx < argc; idx++)
	{
		unsigned int len = std::strlen(argv[idx]);
		for (unsigned int n = 0; n < len; n++)
			std::cout << static_cast<char>(std::toupper(argv[idx][n]));
	}
	std::cout << "\n";
	return (0);
}
