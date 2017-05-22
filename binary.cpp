#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int value){
  int high = size - 1; 
  int low = 0;
  int middle;

  while(low <= high){
    middle = (high + low) / 2; 

    if(value == arr[middle]){
      return middle; 
    } else if(value > arr[middle]){
      low = middle + 1; 
    } else {
      high = middle - 1; 
    }
  }
  return -1; 
}

int main(){
  int arr[] = {1,2,3,4,6,7,8,9,10,11,12};

  int user_input;

  cout << "Please enter a number: " << endl;
  cin >> user_input;

  int result = binarySearch(arr, 11, user_input);

  if(result >= 0 ){
    cout << "The number " << arr[result] << " was found" << endl; 
  } else {
    cout << "The number was not found." << endl; 
  }

}
