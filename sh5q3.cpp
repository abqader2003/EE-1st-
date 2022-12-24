#include<iostream>
#include<cmath>
using namespace std;
void root( double  , double  , double  );
int main(){
	int a ,b , c ;
	cout<<"Enter coefficients a, b and c: ";
	cin>>a>>b>>c;
	root(a ,b ,c );
	
}
void root( double a , double b , double c ){
	double x1 , x2 , uro;
	uro = (b*b)- (4*a*c) ;
	if (a == 0){
		x1 = x2 = (-c)/b ;
		cout<<"x1 = x2 = "<<x1;
	}
	else if (uro == 0 ){
		x1 = x2 = (-b)/2*a;
		cout<<"x1 = x2 = "<<x1;
	}
	else if (uro < 0){
		x1 = (-b )/(2*a);
		x2 = (-b )/(2*a);
		double x1i ,x2i ;
		x1i =  sqrt(-uro)/(2*a);
		x2i = -sqrt(-uro)/(2*a);
		
		cout<<"x1 = "<<x1<<" +"<<x1i<<"i \n";
		cout<<"x2 = "<<x2<<" "<<x2i<<"i \n";
    }
	else {
		x1 = (-b + sqrt(uro))/(2*a);
		x2 = (-b - sqrt(uro))/(2*a);
		cout<<"x1 = "<<x1<<"\n";
		cout<<"x2 = "<<x2<<"\n";
		
	}
	

}
