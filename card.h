// Kyle Modina
// CECS 325 - 02
// Prog 1 - War
// Due 02/15/2024
//
// I certify that this program is my own original work. I did not copy any part of this program from 
// any other source. I further certify that I typed each and every line of code in this program.

#ifndef CARD_H
#define CARD_H


class Card 
{
  public:

    Card(char suit, char rank); //constructor to create a card, setting the suit and rank

    void display(); // display the card example: AC, 10S, KD

    int compare(Card other); // return 1 for win, 0 for tie, -1 for lose


  private:
    char suit;
    char rank;


};

#endif
