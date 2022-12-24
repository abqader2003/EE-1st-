// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;
int main() {
const double PI = 3.14 ;
double r , area ;
cout<<" Enter the radius: ";
cin>>r ;
area = PI * r * r ;
cout<<"circle area = " <<area <<endl ;
if(area> 30 && area<100){
    cout<<"Good one to fit!\n";
}
else{
    cout<<"Not good to fit!" ;
}

    return 0;
}