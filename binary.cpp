#include <iostream>

using namespace std;

int main(){
  int arr[] = {1,2,3,4,6,7,8,9,10,11,12};

  int user_input;

  cout << "Please enter a number: " << endl;
  cin >> user_input;

  int result = linearSearch(arr, 11, user_input);

    if(result >= 0 ){
      cout << "The number " << arr[result] << "was found" << endl; 
    } else {
      cout << "The number was not found." << endl; 
    }
  
}
