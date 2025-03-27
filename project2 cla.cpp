#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	int ch;
	char repeat;
	cout<<"******** Welcome to Calculator ********";
	do{
	cout<<"\nEnter the 1st number:";
	cin>>num1;
	cout<<"\nEnter the 2rd number:";
	cin>>num2;
	cout<<"Operations to be perform";
	cout<<"\n(1) Addition";
	cout<<"\n(2) Subtraction";
	cout<<"\n(3) Multiplication";
	cout<<"\n(4) Division";
	cout<<"\nEnter the choice:";
	cin>>ch;
	switch(ch){
		case 1:
			cout<<"Result :";
			cout<<num1+num2;
			break;
		case 2:
			cout<<"Result :";
			cout<<num1-num2;
			break;
		case 3:
			cout<<"Result :";
			cout<<num1*num2;
			break;
		case 4:
			if(num2 ==0){
				cout<<"Error: Cannot Divided it!";
			}
			else{
			cout<<"Result :";
			cout<<num1/num2;
		}
			break;
		default:
			cout<<"Please check the choice correctly!";
	}
	cout<<"\nWould you like to perform another calculation? (y|n):";
	cin>> repeat;
}while( repeat == 'y'|| repeat == 'Y');
cout<<"****** Thank you for using the calculator ******\n";
}
