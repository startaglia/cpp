// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t; // Una classe Account si può chiamare anche solo t.

	static int	getNbAccounts( void );	//metodo per il numero di conti; (index:0);
	static int	getTotalAmount( void );	//metodo per il denaro totale in tutti i conti (total:20049);
	static int	getNbDeposits( void );	//metodo per il numero totale di depositi effettuati (deposits:0;)
	static int	getNbWithdrawals( void ); //metodo per il numero totale dei prelievi (withdrawals:0);
	static void	displayAccountsInfos( void ); //metodo che stampa tutte le info degli account;

	Account( int initial_deposit ); //costruttore per creare un nuovo account con l'importo specificato.
	~Account( void ); //distruttore

	void	makeDeposit( int deposit ); // metodo per fare un deposito
	bool	makeWithdrawal( int withdrawal ); // metodo per un prelievo
	int		checkAmount( void ) const;	// metodo per controllare la disponibiltà
	void	displayStatus( void ) const;	//metodo per vedere lo status

//var private
private:

	static int	_nbAccounts; 			// numero di account 
	static int	_totalAmount;			// disponibilità totale
	static int	_totalNbDeposits;		// numero totale dei depositi
	static int	_totalNbWithdrawals;	// numero tot dei prelievi

	static void	_displayTimestamp( void );	//metodo privato che stampa il timestamp

	int				_accountIndex;		//indice dell'account
	int				_amount;			//cifra da depositare	
	int				_nbDeposits;		//numero del deposito corrente
	int				_nbWithdrawals;		//numero del prelievo corrente

	Account( void );

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
