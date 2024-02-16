// Kyle Modina
// CECS 325 - 02
// Prog 1 - War
// Due 02/15/2024
//
// I certify that this program is my own original work. I did not copy any part of this program from 
// any other source. I further certify that I typed each and every line of code in this program.

#include <iostream>
#include "Card.h"
using namespace std;


Card::Card(char suit, char rank) : suit{suit}, rank{rank} {}

void Card::display() 
{
  if(rank == 'T') {
    cout << "10" << suit;
  }else if(rank == '$') {
    cout << "A" << suit;
  }else{
    cout << rank << suit;
  }
}


int Card::compare(Card other) 
{
  if (rank > other.rank) {
    return 1; //current card wins
  }else if(rank < other.rank) {
    return -1; // other card wins
  }else{
    return 0; //tie game
  }

}

