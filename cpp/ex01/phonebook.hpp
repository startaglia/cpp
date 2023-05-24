/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:52:04 by startagl          #+#    #+#             */
/*   Updated: 2023/05/24 12:11:22 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	class phonebook
	{
		private:
			int i;
			contact _phonebook[8];
		public:
			phonebook();
			~phonebook();
			void	add();
			void	search();
			void	exit();
			// std::	string	getContact();
			// void	setContact( std::contact _phonebook[0] );
	};