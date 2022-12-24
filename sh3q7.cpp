#include<iostream>
using namespace std;
int main(){
	int num ;
	do {
		cout<<"Please enter number greater than 1.\n";
		cout<<"Enter a number: ";
		cin>>num;		
	}while(num<1);
    for(int i = 2 ; i<num ; i++){
    	if(num%i == 0){
    		cout<<num<<" is not a prime number .";
    		return 0;
		}
    }
	cout<<num<<" is a prime number .";
}
