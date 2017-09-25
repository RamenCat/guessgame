//Brenna Reed 9/25/17
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cstring>
using namespace std;
int main ()
{
  //declare variables
  bool palindrome = true;
  bool checking = true;
  char pal[80];
  char check[80];
  while (checking == true){
    //have user enter palindrome
    cout << "Enter a palindrome!" << endl;
    cin.getline (pal,80);
    //remove spaces, punctuation, and change to lowercase
    for(int a = 0, b = 0; a <= strlen(pal); a++)
      {
	if(pal[a] != ' ' && (ispunct(pal[a]) == false))
	  {
	    check[b] = tolower(pal[a]);
	    b++;
	  }
      }
    //create int for math
    int length = strlen(check);
    //check if palindrome
    for(int c = 0, d = length - 1; c < d; c++, d--)
      {
	cout << check[c] << ';' << endl;
	cout << check[d] << ';' << endl;
      if(check[c] != check[d])
	{
	palindrome = false;
	}
    }
    //tell user if palindrome
    if (palindrome == true)
      {
	cout << "Palindrome" << endl;
      }
    else
      {
	cout << "Not a Palindrome." << endl;
      }
    //See if user wants to do it again
    cout << "Check another Palindrome?" << endl;
    char playagain;
    char suffer = 'y';
    cin >> playagain;
    cin.ignore();
    bool cmpr = playagain == suffer;
    if (cmpr==1){
      checking = true;
    }
    else{
      checking = false;
    }
  }
}
