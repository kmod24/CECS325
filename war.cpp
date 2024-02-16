// Kyle Modina
// CECS 325 - 02
// Prog 1 - War
// Due 02/15/2024
//
// I certify that this program is my own original work. I did not copy any part of this program from 
// any other source. I further certify that I typed each and every line of code in this program.


#include <iostream>
#include "Deck.h"
#include "Card.h"
using namespace std;

int main() {
  //std::cout << "Hello World!\n";

  Deck deck;

  string player1;
  string player2;

  int p1Ties = 0;
  int p1wins = 0;
  int p1loss = 0;

  int p2Ties = 0;
  int p2wins = 0;
  int p2loss = 0;
  
  cout << "Enter the name of the first player: ";
  cin >> player1;

  cout << "Enter the name of the second player: ";
  cin >> player2;

  cout << "\n";
  cout << "Original deck" << endl;
  deck.display();
  cout << "\n";
  cout << "Shuffled deck" << endl;
  deck.shuffle();
  deck.display();


  for(int i = 0; i < 26; i++) {
    cout << "\n";
    cout << "\n";
    cout << "Game " << i+1 << endl;
    cout << "--------" << endl;

    Card p1(deck.deal());
    Card p2(deck.deal());
    
    cout << "        " << player1 << "=>";
    p1.display();
    cout << "\n";

    cout << "        " << player2 << "=>";
    p2.display();
    cout << "\n" << endl;
    
    //test who wins or loses
    if(p1.compare(p2) == 0) {
      cout << "Tie game";
      p1Ties++;
      p2Ties++;
    }else if(p1.compare(p2) == 1) {
      cout << player1 << "=>Winner";
      p1wins++;
      p2loss++;
    }else{
      cout << player2 << "=>Winner";
      p1loss++;
      p2wins++;
    }

    
    
  }

    cout << "\n";
    cout << "\n";
    cout << "------Final Stats------" << endl;
    cout << "        " << player1 << " vs " << player2 << endl;
    cout << "Wins    " << p1wins << "        " << p2wins << endl;
    cout << "Losses  " << p1loss << "        " << p2loss << endl;
    cout << "Ties    " << p1Ties << "        " << p2Ties << endl;
  
  
  return 0;





}
