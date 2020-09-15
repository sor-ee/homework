#include <iostream>
#include <time.h>
int Guess(int);
using namespace std;
int main()
{
	int number,guess,count = 0;
	cout << "###Welcome to guessing number game###" << endl;
	cout << "Secret number has been chosen" << endl;
	srand(time(NULL));
	number = 1+rand()%10;
	count = Guess(number);
	cout << "Congratulations!" << endl;
	cout << "The secret number is " << number << endl;
	cout << "You made " << count << " guesses." << endl;
	return 0;
}
int Guess(int number){
	int count = 0,guess;
	do{
	cout << "Guess the number (1 to 10) : ";
	cin >> guess;
	if(guess < number)
		cout << "The secret number is higher" << endl;
	else if(guess > number)
		cout << "The secret number is lower" << endl;
	count++;
	}while(guess!=number);
	return(count);
}