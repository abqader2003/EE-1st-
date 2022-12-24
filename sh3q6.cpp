#include<iostream>
using namespace std;
int main(){
	int x , n , res = 1;
	cout<<"Enter X: ";
	cin>>x;
	cout<<"Enter N: ";
	cin>>n;
	for(int i = 1 ; i<=n ; i++){
		res *= x ;
	}
	cout<<x<<" ^ "<<n<<" = "<<res ;
}