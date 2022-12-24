#include<iostream>
using namespace std;
int Fibon(int );
int main(){
    int n ;
	cout<<"Enter The Number : ";
	cin>>n;
	for(int i = 1 ; i <=n ; i++){
		cout<<Fibon(i)<<", ";
	}
	Fibon(n);
	
}
int Fibon(int n){
	if (n==1){
		return 0;
    }
	if (n == 2 ||n == 3){
		return 1;
	}
	return Fibon(n-1) + Fibon(n-2); 
	
}