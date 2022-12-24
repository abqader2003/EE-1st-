#include<iostream>
using namespace std ;
int main () {
	double n , sum , avr ;
	cout<<"Enter number of Marks: ";
	cin>>n;
	for (int i = 1 ; i<=n ; i++){
		int m ;
		cout<<"Enter mark #"<<i<<" : ";
		cin>>m;
		sum += m ;
		 
	}
	avr = sum / n ;
	cout<<"the summation of Marks = "<<sum<<endl;
	cout<<"the average of Marks = "<<avr<<endl;
	
}
