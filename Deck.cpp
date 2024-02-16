// Kyle Modina
// CECS 325 - 02
// Prog 1 - War
// Due 02/15/2024
//
// I certify that this program is my own original work. I did not copy any part of this program from 
// any other source. I further certify that I typed each and every line of code in this program.


#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Deck.h"
#include <time.h>
using namespace std;

//Constructor to create a deck of 52 cards
Deck::Deck() 
{
  for (char suit : {'C', 'S', 'D', 'H' }) { // hearts diamonds clubs spades
    for (char rank: {'$', '2', '3','4','5','6','7','8','9','T','J','Q','K',}){ //sets each of the ranks
      cards.push_back(Card(suit, rank));
    }
  }

}

Card Deck::deal()
{

  //Remove and return the top card from the deck, use pop_back
    Card topCard = cards[0]; //stores the first index
    cards.erase(cards.begin()); //gets rid of beginning one
    return topCard; //return the first one again

}



//show all the cards in the deck
// Display all the cards in the deck
void Deck::display() 
{
  for (size_t i = 0; i < cards.size(); i++) {
    cards[i].display();
    if((i+1) % 13 == 0){
      cout << '\n';
    }else{
      cout << ", ";
    }
  }
}


void Deck::shuffle() //shuffles the deck
{
  srand(time(0));
  int n, m;
  for(n = 0; n < 52; n++){
    m = rand()%52;
    Card temp = cards[n];
    cards[n] = cards[m];
    cards[m] = temp;
  }
  


  
}
