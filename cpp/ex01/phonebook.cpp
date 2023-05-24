/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:09:49 by startagl          #+#    #+#             */
/*   Updated: 2023/05/24 12:27:42 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

phonebook::phonebook()
{
	i = 0;
}

phonebook::~phonebook()
{
}

void	phonebook::search()
{
	int j = -1;
	while (++j < this->i)
	{
		std::cout << "\n";
		std::cout << j << std::endl;
		std::cout << "name: " << _phonebook[j].getName() << std::endl;
		std::cout << "surname: " << _phonebook[j].getSurname() << std::endl;
		std::cout << "nickname: " << _phonebook[j].getNickname() << std::endl;
		std::cout << "number: " << _phonebook[j].getNumber() << std::endl;
		std::cout << "secret: " << _phonebook[j].getSecret() << std::endl;
	}

	// std::cout << "\n";
	// std::cout << i << std::endl;
	// std::cout << "name: " << _phonebook[1].getName() << std::endl;
	// std::cout << "surname: " << _phonebook[1].getSurname() << std::endl;
	// std::cout << "nickname: " << _phonebook[1].getNickname() << std::endl;
	// std::cout << "number: " << _phonebook[1].getNumber() << std::endl;
	// std::cout << "secret: " << _phonebook[1].getSecret() << std::endl;
	// std::cout << this->_phonebook[2].getName() << std::endl;
}

void	phonebook::add()
{
	if (this->i == 8)
		i = 0;
	if (i < 9)
	{
		std::cout << "index: " << i << std::endl;
		//*NAME
		std::string name;
		std::cout << "Insert name: ";
		std::getline(std::cin, name);
		this->_phonebook[i].setName(name);
		// std::cout << "New contact's name: " << _phonebook[i].getName() << std::endl;
		
		//*SURNAME
		std::string surname;
		std::cout << "Insert surname: ";
		std::getline(std::cin, surname);
		this->_phonebook[i].setSurname(surname);
		// std::cout << "New contact's surname: " << _phonebook[i].getSurname() << std::endl;
		
		//*NICKNAME
		std::string nickname;
		std::cout << "Insert nickname: ";
		std::getline(std::cin, nickname);
		this->_phonebook[i].setNickName(nickname);
		// std::cout << "New contact's nickname: " << _phonebook[i].getNickname() << std::endl;

		//*NUMBER
		std::string number;
		std::cout << "Insert number: ";
		std::getline(std::cin, number);
		this->_phonebook[i].setNumber(number);
		// std::cout << "New contact's number: " << _phonebook[i].getNumber() << std::endl;

		//*SECRET
		std::string secret;
		std::cout << "Insert secret: ";
		std::getline(std::cin, secret);
		this->_phonebook[i].setSecret(secret);
		// std::cout << "New contact's secret: " << _phonebook[i].getSecret() << std::endl;
		
		i++;
	}
}
// contact	phonebook::add()
// {
// 	contact newContact;
	
// 	std::string name;
// 	std::cout<<"insert name: "<<std::endl;
// 	std::cin >> name;
// 	newContact.setName(name);
// 	std::cout << newContact.getName()<<std::endl;
// 	return (newContact);
// }
