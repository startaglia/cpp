/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:17:58 by startagl          #+#    #+#             */
/*   Updated: 2023/06/15 23:14:37 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//! CAPIRE PERCHE' PER QUESTI METODI NON MI SERVE UN METODO SETTER (HANNO I METODI PUBBLICI MA I CAMPI PRIVATI)
#include "Account.hpp"

Account::Account()
{
}

Account::~Account()
{
}

//*	GET_NB_ACCOUNTS
int Account::getNbAccounts()
{
    return (_nbAccounts);
}

//*	GET_NB_TOTAL_AMOUNT
int Account::getTotalAmount()
{
    return (_totalAmount);
}

//*	GET_NB_DEPOSITS
int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

//*	GET_NB_WITHDRAWALS
int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}


