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
      int answer = (rand()%10) + 1;
      cout << answer << endl;
      int guess = 0;
      int tries = 1;
      bool guessing = true;
      cout << "Guess a value!" << endl;
      while(guessing){
	cin >> guess;
	if (guess == answer){
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
