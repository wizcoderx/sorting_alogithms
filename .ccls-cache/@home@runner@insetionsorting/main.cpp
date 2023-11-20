//this is an insertion sorting algorithm
#include<iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the number of elemets to be sort-->>\n";
  cin>>n;
  int arr[n];
  cout<<"Enter the number to be sorted separated by space, enter"<<n<<
    " numbers only";
  //for loop for taking numbers as input till the index is less than the size of the array :)
  for(int i=0;i<n;i++){
    
    cin>>arr[i];
  }
  //for loop for sorting the array  
  for(int i=1;i<n;i++){
    int current=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>current){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=current;
  }
  //for loop for printing the sorted array
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;   
}