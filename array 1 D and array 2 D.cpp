#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void display(string name[5],float price[5][3]);
float calprice(float price[5][3]);
int main()
{
	string name[5];
	float price[5][3];
	for(int n = 0 ; n < 5 ; n++)
	{
		cout << "Enter product Name : ";
		cin >> name[n];
		cout << "price : ";
		cin >> price[n][0];
	}
	calprice(price);
	display(name,price);
	return 0;
}
float calprice(float price[5][3])
{
	for(int i = 0 ; i < 5 ; i++)
	{
		price[i][1] = price[i][0]*7/100;
		price[i][2] = price[i][0]+price[i][1];
	}
	return(price[5][3]);
}
void display(string name[5],float price[5][3])
{
	cout << "No."<<setw(13)<< "product"<<setw(18)<<"price"<<setw(27)<<"vat%7"<<setw(23)<<"Net" << endl;;
	for(int i = 0 ; i < 5 ; i++)
	{
		cout << i + 1 << setw(15) <<name[i] << setw(20) ;
		for(int j = 0 ; j < 3 ; j++)
		{
			cout << fixed << setprecision(2) << price[i][j];
			if (j < 2) cout << setw(25) << right;
		}
		cout << endl;
	}
}