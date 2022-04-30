#include "doctest.h"
#include <string>
#include <stdexcept>
#include <iostream>
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
using namespace std;
using namespace coup;


/*
READ THIS FIRST PLEASE

i made it hard to understand what i did here because i don't want people to copy my work
so i mad it difficult to copy it,
if you want the easy to read version please contact me on dolev146@gmail.com

all i did was checking that the game is working according to the rulse 


*/


TEST_CASE("4")
{
	// check for initilising the board
	coup::Game board{};
	// check that we new is working and ok constructor
	CHECK_NOTHROW(/*check that we new is working and ok constructor*/ coup::Captain(board /*check that we new is working and ok constructor*/, "Dolev"));
	// check that we new is working and ok constructor
	CHECK_NOTHROW(/*check that we new is working and ok constructor*/ coup::Captain(board /*check that we new is working and ok constructor*/, "Dolev"));
	// check that we new is working and ok constructor
	CHECK_NOTHROW(/*check that we new is working and ok constructor*/ coup::Assassin(board /*check that we new is working and ok constructor*/, "Dolev"));
	// check that we new is working and ok constructor
	CHECK_NOTHROW(/*check that we new is working and ok constructor*/ coup::Duke(board /*check that we new is working and ok constructor*/, "Dolev"));
	// /*check that we new is working and ok constructor*/
	CHECK_NOTHROW(/*check that we new is working and ok constructor*/ coup::Ambassador(board /*check that we new is working and ok constructor*/, "Dolev"));
	// fun!
}

TEST_CASE("1")
{
	// check for initilising the board
	Game board{};
	///* check for initilising the Playes*/
	// init captain
	Captain /* check for initilising the Playes*/ captain{board /*init captain*/, "Dvir"};
	// init assasing
	Assassin /* check for initilising the Playes*/ mitnakesh{board /* check for initilising the Playes*/, "Doron"};
	// init רוזנת - Contessa
	Contessa /* check for initilising the Playes*/ rozenet{board /* check for initilising the Playes*/, "Doly"};
	// init dukas
	Duke /* check for initilising the Playes*/ dukas{board /* check for initilising the Playes*/, "Dolev"};
	// init ambassador שַׁגְרִיר
	Ambassador /* check for initilising the Playes*/ shagrir{board /* check for initilising the Playes*/, "Dana"};

	// /* check that each players start with 0 coins;*/
	CHECK(/* check that each players start with 0 coins;*/ dukas.coins() == 0);
	// check for dukas
	CHECK(/* check that each players start with 0 coins;*/ mitnakesh.coins() /*// check amount of coins*/ == 0);
	// check for mitnakesh
	CHECK(/* check that each players start with 0 coins;*/ shagrir.coins() /*// check amount of coins*/ == 0); // check amount of coins
	// check for shagrir
	CHECK(/* check that each players start with 0 coins;*/ captain.coins() /*// check amount of coins*/ == 0); // check amount of coins
	// check for eozenet
	CHECK(/* check that each players start with 0 coins;*/ rozenet.coins() /*// check amount of coins*/ == 0); // check amount of coins

	// first to add to board is the first to start
	CHECK(/*check for dvir turn*/ board.turn() == "Dvir"); // check for dvir turn
	// then he inceas is coins amonnt
	CHECK_NOTHROW(/* then he inceas is coins amonnt*/ dukas.income());						  // check for income
	int /*check for dukas coins*/ dukas_coin_amount = dukas.coins(/*check for dukas coins*/); // check for dukas coins
	CHECK(dukas_coin_amount == 1);
	// need to check who's next turn
	std::string doron = board.turn(); ///* check for turn*/
	CHECK(doron == "Doron");		  /* check for turn*/
	// need to check mitnakesh coint
	int mitnakesh_coins /*check for coins*/ = mitnakesh.coins(); // check for coins
	CHECK(mitnakesh_coins == 0);								 // check for coins
	// check that income working!!
	CHECK_NOTHROW(mitnakesh /* check for turn*/.income() /*income working*/); // income working

	CHECK(mitnakesh /*income working*/.coins() /*check the trun*/ == 1); /*check the trun*/
	CHECK(board /*check the trun*/.turn() == /*check the trun*/ "Dana"); /*check the trun*/
	CHECK(shagrir /*check the coins*/.coins() /*check the trun*/ == 0);	 /*check the trun*/
	CHECK_NOTHROW(shagrir /*check income*/./*check the trun*/ income()); /*check the trun*/
}

TEST_CASE("2")
{
	///* check for initilising the board*/
	/* check for initilising the board*/ Game /* check for initilising the board*/ board{/* check for initilising the board*/};
	// /*check for initilising the Playes*/
	// init captain
	// check for initilising the board
	///* check for initilising the Playes*/
	// init captain
	Captain /* check for initilising the Playes*/ captain{board /*init captain*/, "Dvir"};
	// init assasing
	Assassin /* check for initilising the Playes*/ mitnakesh{board /* check for initilising the Playes*/, "Doron"};
	// init רוזנת - Contessa
	Contessa /* check for initilising the Playes*/ rozenet{board /* check for initilising the Playes*/, "Doly"};
	// init dukas
	Duke /* check for initilising the Playes*/ dukas{board /* check for initilising the Playes*/, "Dolev"};
	// init ambassador שַׁגְרִיר
	Ambassador /* check for initilising the Playes*/ shagrir{board /* check for initilising the Playes*/, "Dana"};

	// /*check that each players start with 0 coins;*/
	CHECK(/*check that each players start with 0 coins;*/ dukas./*check that each players start with 0 coins;*/ coins() == 0 /*check that each players start with 0 coins;*/);
	///* check for dukas*/
	CHECK(mitnakesh /* check for dukas*/.coins() == /* check for dukas*/ 0); /* check for dukas*/
	// /*check for mitnakesh*/
	CHECK(shagrir /*check for mitnakesh*/.coins() == /*check for mitnakesh*/ 0);
	///* check for shagrir*/
	CHECK(captain./* check for shagrir*/ coins() == /* check for shagrir*/ 0); /* check for shagrir*/
	///* check for eozenet*/
	CHECK(/* check for eozenet*/ rozenet.coins() == /* check for eozenet*/ 0); /* check for eozenet*/

	/*check for turn */
	CHECK(board /*check for turn */.turn() == "Doly"); /*check for turn */
	/* check for coins*/
	CHECK(rozenet /* check for coins*/.coins() == /* check for coins*/ 0); /* check for coins*/
	/*check for income of rozenete*/
	CHECK_NOTHROW(/*check for income of rozenete*/ rozenet./*check for income of rozenete*/ income()); /*check for income of rozenete*/
	/*check for rozenet coins*/
	CHECK(rozenet /*check for rozenet coins*/.coins() == /*check for rozenet coins*/ 1); /*check for rozenet coins*/
	/*check for turn */
	CHECK(board /*check for turn */.turn() == /*check for turn */ "Dolev"); /*check for turn */
	/*check dukas coins*/
	CHECK(/*check dukas coins*/ dukas.coins() /*check dukas coins*/ == /*check dukas coins*/ 1); /*check dukas coins*/
	/*check for dukas foreign*/
	CHECK_NOTHROW(/*check for dukas foreign*/ dukas /*check for dukas foreign*/./*check for dukas foreign*/ foreign_aid() /*check for dukas foreign*/); /*check for dukas foreign*/
	/*dukas coins check */
	CHECK(/*dukas coins check */ dukas /*dukas coins check */./*dukas coins check */ coins() == /*dukas coins check */ 3); /*dukas coins check */
	/*check if doron turn */
	CHECK(/*check if doron turn */ board /*check if doron turn */./*check if doron turn */ turn() /*check if doron turn */ == /*check if doron turn */ "Doron"); /*check if doron turn */
	/* check fro mitnakesh coins */
	CHECK(/* check fro mitnakesh coins */ mitnakesh /* check fro mitnakesh coins */./* check fro mitnakesh coins */ coins(/* check fro mitnakesh coins */) == /* check fro mitnakesh coins */ 1); /* check fro mitnakesh coins */
}

TEST_CASE("3")
{
	///* check for initilising the board*/
	/* check for initilising the board*/ Game /* check for initilising the board*/ board{/* check for initilising the board*/};
	// /*check for initilising the Playes*/
	// init captain
	// check for initilising the board
	///* check for initilising the Playes*/
	// init captain
	Captain /* check for initilising the Playes*/ captain{board /*init captain*/, "Dvir"};
	// init assasing
	Assassin /* check for initilising the Playes*/ mitnakesh{board /* check for initilising the Playes*/, "Doron"};
	// init רוזנת - Contessa
	Contessa /* check for initilising the Playes*/ rozenet{board /* check for initilising the Playes*/, "Doly"};
	// init dukas
	Duke /* check for initilising the Playes*/ dukas{board /* check for initilising the Playes*/, "Dolev"};
	// init ambassador שַׁגְרִיר
	Ambassador /* check for initilising the Playes*/ shagrir{board /* check for initilising the Playes*/, "Dana"};

	/// /*check that each players start with 0 coins;*/
	CHECK(/*check that each players start with 0 coins;*/ dukas./*check that each players start with 0 coins;*/ coins() /*check that each players start with 0 coins;*/ == /*check that each players start with 0 coins;*/ 0); /*check that each players start with 0 coins;*/
	/// /*check for dukas*/
	CHECK(/*check for dukas*/ mitnakesh /*check for dukas*/./*check for dukas*/ coins() == /*check for dukas*/ 0); /*check for dukas*/
	// /* check for mitnakesh */
	CHECK(/* check for mitnakesh */ shagrir /* check for mitnakesh */./* check for mitnakesh */ coins(/* check for mitnakesh */) == /* check for mitnakesh */ 0); /* check for mitnakesh */
	//  /* check for shagrir*/
	CHECK(captain.coins() /* check for shagrir*/ == 0 /* check for shagrir*/); /* check for shagrir*/
	// check for eozenet
	/*check for eozenet*/
	CHECK(rozenet /*check for eozenet*/./*check for eozenet*/ coins() == /*check for eozenet*/ 0); /*check for eozenet*/
	/* check coins  */
	CHECK(/* check coins  */ mitnakesh /* check coins  */.coins(/* check coins  */) == /* check coins  */ 3); /* check coins  */
	/* check coins  */
	CHECK(/* check coins  */ board.turn() == /* check coins  */ "Dana"); /* check coins  */
	/* check coins  */
	CHECK(/* check coins  */ shagrir /* check coins  */.coins() /* check coins  */ == 1); /* check coins  */
	/* check coins  */
	CHECK_NOTHROW(/* check coins  */shagrir/* check coins  */.foreign_aid());/* check coins  */
	CHECK(shagrir/* check coins  */.coins() /* check coins  */== 3);/* check coins  */
}
