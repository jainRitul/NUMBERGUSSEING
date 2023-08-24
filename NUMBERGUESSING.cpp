#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int number,guess;
	const int MAX=1000;
	srand(time(0));
	bool correct=false;
	number=rand() % MAX+1;

	while(!correct){
		cout<<"Guess a number between 1 to 1000: "<<endl;
		cin>>guess;

		if(guess>number)
		cout<<"Too high!"<<endl;

		else if(guess<number)
		cout<<"Too low!"<<endl;

		else{
			cout<<"Bravo! you guessed the same number."<<endl;
			correct=true;
		}
	}
	return 0;
}