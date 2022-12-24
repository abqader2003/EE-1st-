#include<iostream>
using namespace std;
int power( int  , int );

int main(){
	int X , N ;
	cout<<"Enter X : ";
	cin>>X;
	cout<<"Enter N : ";
	cin>>N;
	cout<<X<<" ^ "<<N<<" = "<<power( X , N );
}
int power( int x , int n){
	int result = 1;
	for(int i = 1 ; i <= n ; i++){
		result *= x;
	}
	return result ;
}