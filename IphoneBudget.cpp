#include <iostream>

using namespace std;


//the class for the iphone
class iphone
{
public:
	double price; //price is in the class and public

};

int main()
{
	//the amount of iphones the customer will buy is set by integer x
	int x;

	double budget; //this is your total amount you can afford on a iphone

	budget = 3200;

	//the iphones customer is looking to buy
	iphone iphone14;
	iphone iphone13;

	//price of the iphones the customer is looking to buy
	iphone14.price = 999.99;
	iphone13.price = 899.99;


	cout << "how many iphone's would you like to buy?" << endl;
	cout << "keep in mind you only have a max budget of $3,200! " << endl;
	cout << "so how many: ";

	cin >> x;
	cout << endl << endl;

	//final price of iphones and left over money from budget
	cout << "Your final price for iphone 14 comes to: " << "$" << iphone14.price * x << endl;
	cout << "Your remaing balane after buying the iphone 14 is: " << "$" << budget - (iphone14.price * x) << endl;

	cout << endl << endl;

	cout << "Your final price for iphone 13 comes to: " << "$" << iphone13.price * x << endl;
	cout << "Your remaing balane after buying the iphone 14 is: " << "$" << budget - (iphone13.price * x) << endl;

	return 0;
}
