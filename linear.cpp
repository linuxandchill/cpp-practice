#include <iostream>
using namespace std; 

int search(int arr[], int size, int value){
  for(int i = 0; i < size ; i++){
    if(arr[i] == value){
      return i;
    }
  }
  return -1; 
}

int main(){
  int arr[] = {1,234,65,62,3,6,7,12}; 

  int user_input; 

  cout << "Please enter a number: " << endl; 
  cin >> user_input; 

  int number = search(arr, 8, user_input); 

  if(number >= 0){
    cout << "The number " << arr[number] << " was found." << endl; 
  } else {
    cout << "The number was not found." << endl;
  }

  return 0; 
}
