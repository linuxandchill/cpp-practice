#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int value){
  for(int i = 0; i < size; i++){
    if(value == arr[i]){
      return i;
    }
  }
  return -1; 
}

int main(){
  int arr[] = {1,2,3,4,5}; 
  int result = linearSearch(arr, 5, 4);

  cout << arr[result] << endl;  

  return 0; 
}
