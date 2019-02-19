#include<iostream>
using namespace std;

int main(){
	int a,b,c,n;
	cout<<enter two number;
	cin>>a,b;
	cout<<endl<<"1 for addition";
	cout<<endl<<"2 for subtraction";
	cout<<endl<<"3 for divide";
	cout<<endl<<"4 for multiply";
	cin<<c;
	
	switch(c){
	    case 1:
    	n=a+b;
    case 2:
    	n=a-b;
    case 3:
    	n=a/b;
    case 4:
    	n=a*b;
    default:
    	cout<<"wrong choice";
    	
}

cout<<endl<<"output:"<<n;
	
}
