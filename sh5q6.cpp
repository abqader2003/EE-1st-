#include<iostream>
using namespace std;
void fact(int );
int main(){
	int num ;
	cout<<"Enter The Number : ";
	cin>>num;
	fact(num);
}
void fact(int num){
	int fac = 1;
	for(int i = 1 ; i<=num ;i++){
		fac *= i ;
	}
	cout<<"The Factorial of Number "<<num<<" is = "<<fac;
}