/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:09:49 by startagl          #+#    #+#             */
/*   Updated: 2023/06/06 12:04:48 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

// phonebook::phonebook()
// {
// 	i = 0;
// }

phonebook::~phonebook()
{
}
// void	phonebook::add()
// {
// 	contact newContact;
// 	// if (i < 9)
// 	// {
// 			if (numContacts < 8) // Verifica se il numero di contatti è inferiore a 8
// 			{
// 				_phonebook[numContacts] = newContact; // Aggiungi il nuovo contatto all'indice corrispondente a numContacts
// 				++numContacts; // Incrementa il numero di contatti
// 			}
// 			 else // Il numero di contatti è uguale a 8, sostituisci il primo contatto
// 			{
// 				for (int i = 0; i < 7; ++i)
// 				{
// 					_phonebook[i] = _phonebook[i + 1]; // Sposta tutti i contatti di un posto verso l'indice inferiore
// 				}
// 				_phonebook[7] = newContact; // Aggiungi il nuovo contatto all'ultimo indice
// 			}
// 		// if (this->i == 8)
// 		// 	i = 0;
// 		std::cout << "index: " << i << std::endl;
// 		//*NAME
// 		std::string name;
// 		std::cout << "Insert name: ";
// 		std::getline(std::cin, name);
// 		this->_phonebook[i].setName(name);

// 		//*SURNAME
// 		std::string surname;
// 		std::cout << "Insert surname: ";
// 		std::getline(std::cin, surname);
// 		this->_phonebook[i].setSurname(surname);

// 		//*NICKNAME
// 		std::string nickname;
// 		std::cout << "Insert nickname: ";
// 		std::getline(std::cin, nickname);
// 		this->_phonebook[i].setNickName(nickname);

// 		//*NUMBER
// 		std::string number;
// 		std::cout << "Insert number: ";
// 		std::getline(std::cin, number);
// 		this->_phonebook[i].setNumber(number);

// 		//*SECRET
// 		std::string secret;
// 		std::cout << "Insert secret: ";
// 		std::getline(std::cin, secret);
// 		this->_phonebook[i].setSecret(secret);

// 		// i++;
// 	// }
// }
void phonebook::add()
{
    contact newContact;

    if (numContacts < 3) // Verifica se il numero di contatti è inferiore a 8
    {
        _phonebook[numContacts] = newContact; // Aggiungi il nuovo contatto all'indice corrispondente a numContacts
        ++numContacts; // Incrementa il numero di contatti
    }
    else // Il numero di contatti è uguale a 8, sovrascrivi il primo contatto
    {
        // for (int i = 0; i < 7; ++i)
        // {
        //     _phonebook[i] = _phonebook[i + 1]; // Sposta tutti i contatti di un posto verso l'indice inferiore
        // }
		numContacts = 0;
        _phonebook[numContacts] = newContact; // Aggiungi il nuovo contatto all'ultimo indice
    }

    std::cout << "index: " << numContacts - 1 << std::endl;

    //*NAME
    std::string name;
    std::cout << "Insert name: ";
    std::getline(std::cin, name);
    _phonebook[numContacts - 1].setName(name);

    //*SURNAME
    std::string surname;
    std::cout << "Insert surname: ";
    std::getline(std::cin, surname);
    _phonebook[numContacts - 1].setSurname(surname);

    //*NICKNAME
    std::string nickname;
    std::cout << "Insert nickname: ";
    std::getline(std::cin, nickname);
    _phonebook[numContacts - 1].setNickName(nickname);

    //*NUMBER
    std::string number;
    std::cout << "Insert number: ";
    std::getline(std::cin, number);
    _phonebook[numContacts - 1].setNumber(number);

    //*SECRET
    std::string secret;
    std::cout << "Insert secret: ";
    std::getline(std::cin, secret);
    _phonebook[numContacts - 1].setSecret(secret);

	std::cout << "NOME UTLIMO CONTATTO" << _phonebook[2].getName();;
}


// void	phonebook::search()
// {
// 	int j = 0;
// 	// int numContacts = this->_phonebook.size();
// 	this->printTitleTab();
// 	while (j < numContacts)
// 	{
// 		this->printContact(j);
// 		j++;
// 	}
// }

void phonebook::search()
{
    this->printTitleTab();
	int	j = -1;
    while (++j < 3)
	{
        this->printContact(j);
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
	std::string name = _phonebook[j].getName();
	if (_phonebook[j].getName().length() > 9)
	{
		name.resize(9);
		name[name.length() - 1] = '.';
	}
    std::cout << "|" << std::left << std::setw(10) << name;
	std::string surname = _phonebook[j].getSurname();
	if (_phonebook[j].getSurname().length() > 9)
	{
		surname.resize(9);
		surname[surname.length() - 1] = '.';
	}
    std::cout << "|" << std::left << std::setw(10) << surname;
	std::string nickname = _phonebook[j].getNickname();
	if (_phonebook[j].getNickname().length() > 9)
	{
		nickname.resize(9);
		nickname[nickname.length() - 1] = '.';
	}
    std::cout << "|" << std::left << std::setw(10) << nickname << "|" << std::endl;
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
