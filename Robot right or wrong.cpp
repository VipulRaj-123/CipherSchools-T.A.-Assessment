// Program to find if robot is right or wrong in determining no. of items customer can buy //
#include <iostream>
#define ll long long
#include <vector>
using namespace std;

int main() {
	// your code goes here
    ll n,amount,k,count=0;
    cin>>n>>k>>amount;// Here n is number of items,k is the least number of items predicted by robot and amount is the money customer has //
    vector<ll>price(n);

    for(int i=0;i<n;i++)
      cin>>price[i];

   for(int i=0;i<n;i++)
    if(amount%price[i]==0)// if amount is divisible by price of item then customer can buy it //
     count++;// increase the count of items that can be bought if amount is divisible buy price of item //

   if(count==k)
     cout<<"Right"<<endl;// if count of items equal to that predicted by robot then robot is right //
   else
     cout<<"Wrong"<<endl;
	return 0;
}
