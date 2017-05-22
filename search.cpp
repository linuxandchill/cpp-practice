#include <iostream>

using namespace std;

int binary_search(int arr[], int value, int right, int left){
  while( left <= right ){
    int middle = (left + right) / 2; 
    if (arr[middle] == value)
      return middle; 
    else if (arr[middle] > value) 
      right = middle - 1;
    else if (arr[middle] < value)
      left = middle + 1; 
  }
  return -1; 
}

int main(){
  int arr[6] = {1,2,3,4,5,6};
  cout << binary_search(arr, 3, 0, 5);
}
