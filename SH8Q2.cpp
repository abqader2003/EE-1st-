#include<iostream>
#include<iomanip>
using namespace std ;
const int set = 5 ;

void displyStudentsInfo( int [][6] , int );
void displyStudentInfo(int [][6] , int , int );
void isPass(int [][6] , int , int );

int main(){
	int id ;
	int arr[4][6] = {{ 1 , 65 , 75 , 85 , 75 , 95 }
	                ,{ 2 , 64 , 94 , 57 , 94 , 87 }
	                ,{ 3 , 82 , 71 , 84 , 64 , 72 }
	                ,{ 4 , 45 , 64 , 70 , 51 , 31 }
					};
    displyStudentsInfo( arr , 4 );
    cout<<"Enter ID to search for : ";
    cin>>id;
    displyStudentInfo( arr , 4 , id);
    isPass( arr , 4 , id);
}
void displyStudentsInfo( int arr [][6] , int size ){
	cout<<setw(set)<<"ID"<<setw(set)<<"SUB1"<<setw(set)<<"SUB2"<<setw(set)<<"SUB3"<<setw(set)<<"SUB4"<<setw(set)<<"SUB5"<<"\n\n";
	for (int i = 0 ; i<size ; i++){
		for(int j = 0 ; j<6 ; j++ ){
			cout<<setw(set)<<arr[i][j];	
	    }
	    cout<<"\n\n";
    }
}

void displyStudentInfo(int arr [][6] , int size , int id){
	int max = 0 , min = 1000 ;
	cout<<"Student record : ";
	cout<<setw(set)<<"SUB1"<<setw(set)<<"SUB2"<<setw(set)<<"SUB3"<<setw(set)<<"SUB4"<<setw(set)<<"SUB5"<<"\n\n";
	int i = id-1 ;
	for(int j = 1 ; j<6 ; j++ ){
		cout<<setw(set)<<arr[i][j];
		if(max<arr[i][j]){
			max = arr[i][j] ;
		}
		if(min>arr[i][j]){
			min = arr[i][j] ;
		}	
	}
	cout<<"\n\n";
	cout<<"The Highest score : "<<max<<endl;
	cout<<"The Lowest score : "<<min<<endl;
}

void isPass(int arr [][6] , int size , int id){
	for(int j = 1 ; j<6 ; j++ ){
		if(arr[id-1][j]<59){
			cout<<"Student Status : Failed";
			return ;
		}
	
	}
	cout<<"Student Status : Passed";
}