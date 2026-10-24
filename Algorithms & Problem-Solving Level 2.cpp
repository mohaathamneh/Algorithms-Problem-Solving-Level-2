#include <iostream>
using namespace std;
//#01/2
/*
void PrintTapleHedar() {

	cout << "\n\n\t\t\t Mul jdawl althrb\n\n";

	cout << "\t";



	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	};
	cout << "\n___________________________________________________________________________________\n";
};
string clom(int i) {

	if (i < 10)

		return "   |";
	else
		return "  |";

};
void alhsap() {

	PrintTapleHedar();

	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << clom(i) << "\t";

		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
}


int main() {
	alhsap();
}
*/
//#02/2
/*
enum enprim {prim = 1 , notprim = 2};

int readposstivenumber(string massg) {
	int number = 0;
	do {
		cout << massg << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}
enprim cheakprim(int number) {
	int M = round(number / 2);

	for (int Counter = 2; Counter <= M; Counter++)
	{

		if (number % Counter == 0)
			return enprim::notprim;
	}
	return enprim::prim;
}
void PrintPrimeNumbersFrom1ToN(int number)
{
	cout << "\n";
	cout << "Prime Numbers from " << 1 << " To " << number;
	cout << " are : " << endl;

	for (int i = 0; i <= number; i++) {
		if (cheakprim(i) == enprim::prim) {
			cout << i << endl;
		}
	}


}


int main() {
	PrintPrimeNumbersFrom1ToN(readposstivenumber("plasr enter your number"));

}

*/
//#03/2
/*
int readposstivenumber(string massg) {
	int number = 0;
	do {
		cout << massg << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}
bool CheckPerfectNumber(int number) {
	int sum = 0;
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0) {
			sum += i;
		}
	}
	return number == sum;
}
void printresult(int number) {
	if (CheckPerfectNumber (number))
		cout << number << " is perfect number";
	else
		cout << number << " is not perfect number";
}
int main() {
	printresult(readposstivenumber("plasr enter your number"));
}
*/
//#04/2	
/*
int readposstivenumber(string massg) {
	int number = 0;
	do {
		cout << massg << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}
bool CheckPerfectNumber(int number) {
	int sum = 0;
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0) {
			sum += i;
		}
	}
	return number == sum;
}
void PrintPerfectNumbersFrom1ToN(int N) {
	for (int i = 1; i <= N; i++) {
		if (CheckPerfectNumber(i)) {
			cout << i << endl;
		}
	}
}
int main() {
	PrintPerfectNumbersFrom1ToN(readposstivenumber(("plasr enter your number")));
}
*/
//#05/2
/*
int readposstivenumber(string massg) {
	int number = 0;
	do {
		cout << massg << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}
void PrintReversedNumber(int number) {
	int reminder = 0;
	while (number > 0) {
		reminder = number % 10;
		cout << reminder << endl;
		number /= 10;
	}
}
int main() {
	PrintReversedNumber(readposstivenumber("plasr enter your number"));
}

*/
//#06/2
int readposstivenumber(string massg) {
	int number = 0;
	do {
		cout << massg << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}
void PrintReversedNumber(int number) {
	int sum = 0;
	int reminder = 0;
	while (number > 0) {
		reminder = number % 10;
		number /= 10;
		sum += reminder;
	}
	cout << sum << endl;
}
int main() {
	PrintReversedNumber(readposstivenumber("plasr enter your number")); 
}
