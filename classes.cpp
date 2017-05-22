#include <iostream>  
#include <string> 

using namespace std; 

class Person{
  public:
    //constructor
    Person(string z){
      setName(z); 
    }

    void setName(string x){
      name = x; 
    }

    string getName(){
      return name; 
    }

  private:
    string name; 
}; 

int main(){
  Person john("John");
  cout << "My name is " << john.getName() << endl; 
  return 0; 
}
