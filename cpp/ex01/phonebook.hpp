/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:52:04 by startagl          #+#    #+#             */
/*   Updated: 2023/06/06 11:36:34 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	class phonebook
	{
		private:
			int i;
			int numContacts;
			contact _phonebook[8];
		public:
			phonebook() : numContacts(0) {}
			// phonebook();
			~phonebook();
			void	add();
			void	search();
			void	printTitleTab();
			void	printContact(int j);
			// std::	string	getContact();
			// void	setContact( std::contact _phonebook[0] );
	};