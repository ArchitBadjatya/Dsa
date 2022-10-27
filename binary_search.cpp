#include <bits/stdc++.h>
using namespace std;

int binary(int arr[], int start, int end, int key) {
  int mid = (start + end)/2; 
  
  while(start < end) {
    if (arr[mid] == key){
      return mid;
    } 
    else if(arr[mid] < key) {
      end = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return -1;
}

int main () {

  return 0;
}
