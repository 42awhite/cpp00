/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pc <pc@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:53:29 by ablanco-          #+#    #+#             */
/*   Updated: 2024/10/01 14:48:50 by pc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//std::cout -> lanza por terminal
//std::endl -> Salto de línea

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int n_arg = 1; n_arg < argc; n_arg++)
		{
			for (int idx = 0; argv[n_arg][idx]; idx++)
				std::cout << (char)toupper(argv[n_arg][idx]);
		}
		std::cout << std::endl;
	}
    return(0);
}
