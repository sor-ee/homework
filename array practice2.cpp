#include <iostream>
#include<iomanip>
void display(int salary[],int num);
int cal_bonus(int salary);
using namespace std;
int main()
{
	int num;
	cout << "Enter number of person : ";
	cin >> num;
	int *salary = new int[num]; 
	for (int i = 0; i<num ;i++)
	{
		cout << "Enter salary "<< i+1 <<" : ";
		cin >> salary[i];
	}
	display(salary,num);
	return 0;
}
void display(int salary[],int num)
{
	int bonus;
	cout << setw(60) << setfill('-')<< " " << endl;
	cout << "There are " <<num<< "persons." << endl;
	for (int x = 0; x < num ; x++)
	{
		bonus = cal_bonus(salary[x]);
		cout << "The Salalry for person "<< x+1 << " = " << salary[x] << " and Bonus = " << bonus << endl;
	}
	cout << setw(60) << setfill('-')<< " " << endl;
}
int cal_bonus(int salary)
{
	int bonus = 0;
	bonus = salary * 2;
	return bonus;
}