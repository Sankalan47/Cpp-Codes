//problem to sort an array of 0s, 1s and 2s

#include <iostream>
using namespace std;

//function to sort the array

void sort(int arr[], int size){
  int i = 0;
  int low = 0, high = size-1;
  while(i<=high){
  //sorting 0s and swapping them to the left
    if(arr[i] == 0){
      int temp = arr[low];
      arr[low] = arr[i];
      arr[i] = temp;
      low++;
      i++;

    }

  //sorting 1s and swapping them to the middle
    else if(arr[i] == 1){
      low++;
      i++;
    }
  //sorting 2s and swapping them to the right
    else if(arr[i] == 2){
      int temp = arr[high];
      arr[high] = arr[i];
      arr[i] = temp;
      high--;
      i++;
    }
  }
}



//main function
int main() {
  
  int size;
  cin>>size;
  int arr[size];
  for(int i=0; i<size; i++){
    cin>>arr[i];
  }
  sort(arr, size);
  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
