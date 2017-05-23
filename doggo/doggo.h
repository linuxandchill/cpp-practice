#ifndef DOGGO_H
#define DOGGO_H
#include <iostream> 

using namespace std; 

class Doggo{
  public: 
    Doggo(string y){
      cout << "I'm a doggo." << endl; 
      cout << "Woof bitch" << endl;
      setName(y); 
    }

    void speak(){
      cout << "Woof bitch" << endl;
    }

    //access name private variable
    void setName(string x){
      name = x; 
    }

    //can access name cuz name was pulled from x
    //right before this fn was run
    string getName(){
      return name; 
    }

  private: 
    string name; 
};

//Doggo::Doggo(){
//  cout << "I'm a doggo." << endl; 
//}

#endif // DOGGO_H
