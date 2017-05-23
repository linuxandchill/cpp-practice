#include "doggo.h"
#include <iostream>

using namespace std;

//binary scope res operator
//Doggo constructor fn (2nd) belongs to Doggo class

int main(){
  Doggo snoop("Snoop");
  cout << "My name is " << snoop.getName() << endl; 
  Doggo tibu("Tibu");
  cout << "My name is " << tibu.getName() << endl; 
  return 0; 
}
