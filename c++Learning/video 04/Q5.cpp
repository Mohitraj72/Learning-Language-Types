#include<iostream>
using namespace std;

int main(){

  int number;
  cout<<"Enter Your First Number: ";
  cin>>number;
  

  if (number%2==0){
    cout<<"Even Number";
  } else {
    cout<<"Odd Number";
  }
    
  return 0;
}