// Program to find such an array of size n such that sum of all numbers is 0
#include <iostream>
#include <vector>
using namespace std;

vector<int>zerosum(int n){
  vector<int>v;
  int sum=0;
  for(int i=0;i<n-2;i++){ //takes first n-2 natural numbers 
    v.push_back(i+1);
    sum+=i+1; // calculating the sum of 1st n-2 numbers
  }
  v.push_back(0);
  v.push_back(-sum);
 return v;
 }

int main() {
	// your code goes here
    int n; //size of vector
    cin>>n;

    vector<int>result(n);
    result=zerosum(n); // stores the result in given vector
    for(int i=0;i<n;i++)
     cout<<result[i]<<" ";
   cout<<endl; 
	return 0;
}
