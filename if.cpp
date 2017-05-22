#include <iostream>

using namespace std; 

int main(){
  int arr[] = {1,2,3};

  int size = (sizeof(arr[3])); 

  if(size >= 2){
    cout << "greater than 2" << endl; 
  } else if( size <= 2 ) {
    cout << "not greater than 2" << endl; 
  } else {
    cout << "lala" << endl; 
  }
} 
