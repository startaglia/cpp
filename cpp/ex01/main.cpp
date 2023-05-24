/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:50:57 by startagl          #+#    #+#             */
/*   Updated: 2023/05/24 15:15:19 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int main (void)
{
	phonebook rubrica = phonebook();
	std:: string cmd;
	while (cmd != "EXIT")
	{
		getline(std::cin, cmd);
		if (cmd == "ADD")
			rubrica.add();
		else if (cmd == "SEARCH")
			rubrica.search();	
		else
		{
			std::cout << "ERROR" << std::endl;
		}
	}
	
	// rubrica.add();


	// std::cout << "first Contact's name " << rubrica._phonebook[0] << std:: endl;
	// std::cout << "third Contact's name " << _phonebook[2] << std:: endl;

	// rubrica.add();
	
	// std::cout<< "New contact's name: " << this->_phonebook[0] << std::endl;
	// std::cout<< "New contact's surname: " << newContact.getSurname() << std::endl;
	// std::cout<< "New contact's nickname: " << newContact.getNickName() << std::endl;
	// std::cout<< "New contact's number: " << newContact.getNumber() << std::endl;
	// std::cout<< "New contact's secret: " << newContact.getSecret() << std::endl;



}