#include<iostream>
using namespace std;
float smallestone (float , float , float );
int main(){
	float num1 , num2 , num3;
	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"Enter the second number: ";
	cin>>num2;
	cout<<"Enter the third number: ";
	cin>>num3;
	cout<<"The smallest number: "<<smallestone (num1, num2, num3);
	
}
float smallestone (float n1 , float n2 , float n3 )
{
	if (n1<n2 && n1<n3){
		return n1 ;
	}
	else if(n2<n1 && n2<n3){
		return n2 ;
	}
	else if(n3<n1 && n3<n2){
		return n3;
	}
}

