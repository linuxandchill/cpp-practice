#include "doggo.h"
#include <iostream>

using namespace std;

//binary scope res operator
//Doggo constructor fn (2nd) belongs to Doggo class

int main(){
  Doggo snoop;
  snoop.setName("Snoop"); 
  cout << snoop.getName() << endl; 
  return 0; 
}
