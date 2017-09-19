#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <cstring>
using namespace std;
int main ()
{
  bool imlazyok = true;
  while (imlazyok == true){
    bool playing = true;
    while (playing){
      srand(time(NULL));
      //set an int equal to a random number between 1 and 100, have user guess it
      int answer = (rand()%101) + 1;
      //cout << answer << endl;
      int guess = 0;
      int tries = 1;
      bool guessing = true;
      cout << "Guess a value!" << endl;
      while(guessing){
	cin >> guess;
	//check if user is correct
	if (guess == answer){
	  //check if user wants to play again
	  cout << "Correct!" << endl;
	  cout << "It took you " << tries << " guesses!" << endl;
	  cout << "Would you like to play again?" << endl;
	  char playagain;
	  char suffer = 'y';
	  cin >> playagain;
	  bool cmpr = playagain == suffer;
	  if (cmpr==0){
	    guessing = false;
	    playing = false;
	  }
	  else{
	    guessing = false;
	    imlazyok = false;
	  }
	}
	//check if it's higher or lower
	else{
	  if(guess > answer){
	  cout << "That's too big!" << endl;
	  }
	  else{
	    cout << "That's too small!" << endl;
	  }
	  tries++;
	}
      }
    }
  }
}
