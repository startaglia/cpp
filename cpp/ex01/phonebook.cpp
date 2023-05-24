/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:09:49 by startagl          #+#    #+#             */
/*   Updated: 2023/05/24 17:03:18 by startagl         ###   ########.fr       */
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
		
		//*SURNAME
		std::string surname;
		std::cout << "Insert surname: ";
		std::getline(std::cin, surname);
		this->_phonebook[i].setSurname(surname);
		
		//*NICKNAME
		std::string nickname;
		std::cout << "Insert nickname: ";
		std::getline(std::cin, nickname);
		this->_phonebook[i].setNickName(nickname);

		//*NUMBER
		std::string number;
		std::cout << "Insert number: ";
		std::getline(std::cin, number);
		this->_phonebook[i].setNumber(number);

		//*SECRET
		std::string secret;
		std::cout << "Insert secret: ";
		std::getline(std::cin, secret);
		this->_phonebook[i].setSecret(secret);
		
		i++;
	}
}

void	phonebook::search()
{
	int j = -1;

	this->printTitleTab();
	while (++j < this->i)
	{

		this->printContact(j);
		// std::cout << "name: " << _phonebook[j].getName() << std::endl;
		// std::cout << "surname: " << _phonebook[j].getSurname() << std::endl;
		// std::cout << "nickname: " << _phonebook[j].getNickname() << std::endl;
		// std::cout << "number: " << _phonebook[j].getNumber() << std::endl;
		// std::cout << "secret: " << _phonebook[j].getSecret() << std::endl;
	}
}
void	phonebook::printTitleTab()
{
	std::cout << "|" << std::left << std::setw(10) << "INDEX";
    std::cout << "|" << std::left << std::setw(10) << "FIRSTNAME";
    std::cout << "|" << std::left << std::setw(10) << "LASTNAME";
    std::cout << "|" << std::left << std::setw(10) << "NICKNAME";
    std::cout << "|" << std::endl;
}
//! TO DO
	//! *COLORARE LA TABELLA
	//! *INSERIRE LA RICHIESTA INDEX ED IMPLEMENTARE I DATI SOLO DI QUEL CAMPO
	//! *PULIRE IL CODICE E DIVIDERLO BENE PER FUNZIONI
	 
void	phonebook::printContact(int j)
{
	std::cout << "|" << std::left << std::setw(10) << j;
	if (_phonebook[j].getName().length() > 9)
	{
		std::string name = _phonebook[j].getName();
		name.resize(9);
		name[name.length() - 1] = '.';
    	std::cout << "|" << std::left << std::setw(10) << name;
	}
    // std::cout << "|" << std::left << std::setw(10) << _phonebook[j].getName();
    std::cout << "|" << std::left << std::setw(10) << _phonebook[j].getSurname();
    std::cout << "|" << std::left << std::setw(10) << _phonebook[j].getNickname();
    std::cout << "|" << std::endl;
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
