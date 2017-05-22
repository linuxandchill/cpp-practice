#include <iostream>

using namespace std; 

void printArr(int arr[], int length); 

int main(){
  int array[] = {1,2,3}; 
  int second[] = {456,12,4,5} ; 
  printArr(array, 3); 
  printArr(second, 4); 
  return 0;
}

void printArr(int arr[], int length){
  for (int n = 0; n < length; n++ ){
  cout << arr[n] << ' ' << endl; 
  }
}

