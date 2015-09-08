#include <iostream>
using namespace std;

int main()
{
	double sandwichQty;
	double breadQty;
	double peanutButterQty;
	double jellyQty;
	double breadCost;
	double peanutButterCost;
	double jellyCost;

	const double loafOfBreadCost = 5;
	const int numberOfSlicesInLoaf = 18;
	const double costOfPeanutButter = 2.50;
	const int numberOfOuncesInPeanutButterJar = 18;
	const int numberOfGramsOfPeanutButterInOneSandwich = 32;
	const double costOfJelly = 2.50;
	const int numberOfOuncesInJellyJar = 8;
	const int numberOfGramsOfJellyInOneSandwich = 11;

	cout << "How many sandwiches do you wish to make?" << endl;

	cin >> sandwichQty;

	breadCost = sandwichQty * 2 * loafOfBreadCost / numberOfSlicesInLoaf;
	peanutButterCost = costOfPeanutButter / (numberOfOuncesInPeanutButterJar / 0.035274) * numberOfGramsOfPeanutButterInOneSandwich * sandwichQty;
	jellyCost = costOfJelly / (numberOfOuncesInJellyJar / 0.035274) * numberOfGramsOfJellyInOneSandwich * sandwichQty;

	cout << endl;
	cout << "In order to make " << sandwichQty << " PP&Js" << endl;
	cout << "You will need " << sandwichQty * 2 << " slices of bread which will cost you $" << breadCost << endl;
	cout << "You will need " << numberOfGramsOfPeanutButterInOneSandwich * sandwichQty << " grams of peanut butter which will cost you $" << peanutButterCost << endl;
	cout << "You will need " << numberOfOuncesInJellyJar * sandwichQty << " grams of jelly which will cost you $" << jellyCost << endl;
	cout << "You will need to spend $" << breadCost + peanutButterCost + jellyCost << " in total";
	cout << endl;
	cout << endl;

	system("pause");
	return 0;
}
