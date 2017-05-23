#include <iostream>

using namespace std;

int main(){
  // name of movie
  string movie =""; 
  cout << "Enter a movie title: " ; 
  getline(cin, movie); 
  // get score 1
  int score1;
  cout << "Score 1: ";
  cin >> score1;
  // get score 2
  int score2;
  cout << "Score 2: ";
  cin >> score2;
  // avg 1 & 2
  double average = (double)(score1 + score2) / 2; 

  // display on 10 pt scale
  double scaled = average /10;

  //display score
  cout << "The average & rescaled score of " << movie << " is " << scaled << endl; 

  return 0; 

}

