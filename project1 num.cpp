#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

int main(){
	int random,number,chance;
	cout<<"********** WELCOME TO NUMBER GUESSING GAME **********";
	cout<<"\n\t Enter the Number between 1 to 100";
	cout<<"\n\t\t Let's start the game";
	cout<<"\n\t\t Best of luck";
	cout<<"\n************************************************";
	srand(time(0));
	random = (rand()%100) + 1;
	do{
	cout<<"\nEnter the number to be guessed :";
	cin>>number;
	chance++;
	if(number > random){
		cout<<"\nyou guessed the number to be high!";
	}
	else if(number<random){
		cout<<"\nyou guessed the number to be low!";
	}
	else{
		cout<<"\ncongratulations!you guess the correct number";
		cout<<"\nyou guessed the number in "<<chance<<"attemp";
	}
}while(random!=number);
	
	
}


