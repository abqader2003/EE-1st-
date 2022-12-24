#include<iostream>
using namespace std;

int main(){
	int zero = 0 , pos = 0 , neg = 0 ;
	int num;
	int n ;
	cout<<"Enter Number : ";
	cin>>num ;
	for(int i = 1 ; i<= num ; i++){
		cout<<"Enter The Number : ";
		cin>>n;
		if(n == 0){
			zero++;
		}
		else if (n<0){
			neg++;
		}
		else if (n>0){
			pos++;
		}
	}
	cout<< " 0s = "<<zero<<"\n\n";
	cout<< " +  = "<<pos<<"\n\n";
	cout<< " -  = "<<neg<<"\n\n";
}