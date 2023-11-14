#include "Account.hpp"
#include <iostream>

static int	getNbAccounts( void );
static int	getTotalAmount( void );
static int	getNbDeposits( void );
static int	getNbWithdrawals( void );
static void	displayAccountsInfos( void );

void	makeDeposit( int deposit );
bool	makeWithdrawal( int withdrawal );
int		checkAmount( void ) const;
void	displayStatus( void ) const;

static int	_nbAccounts;
static int	_totalAmount;
static int	_totalNbDeposits;
static int	_totalNbWithdrawals;

static void	_displayTimestamp( void );
