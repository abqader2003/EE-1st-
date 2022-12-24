#include<iostream>
using namespace std ;
float getArea(float , float);
float getArea(float );
int main(){
	cout<<getArea(2.5)<<endl;
	cout<<getArea(4,3);
	
}
/*float getArea(float r){
	float area ;
	const float pi = 3.14 ;
	area = pi*r*r ;
	return area ;
}
*/
float getArea(float l , float m){
	float area ;
	area = l*m ;
	return area ;
}
float getArea(float l){
	float area ;
	area = l*l ;
	return area ;
}
