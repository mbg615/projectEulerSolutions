#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
	extern string dataStr;
	int start = 0, length = 13;
	list<string> products;
	// Loop through the strings and convert them to numbers
	while (start <= dataStr.length() - length) {
		unsigned long long testInt = 0;
		unsigned long long customStrToInt(string stringToConv);
		string testpart = dataStr.substr(start,length); // .substr(start,length)
		testInt = customStrToInt(testpart);
		cout << "Testing: " << testInt << endl;
		exit(0);
	}
}

unsigned long long customStrToInt(string stringToConv) {
	string newstring, strDigit;
	int strLength = stringToConv.length(), curentLoop = 0, digit = 0;
	unsigned long long convertedStr = 0;
	while (stringToConv.length() != curentLoop) {
		strDigit = stringToConv.substr(curentLoop,1);
		if (strDigit == "0") {
			digit = 0;
		}
		if (strDigit == "1") {
			digit = 1;
		}
		if (strDigit == "2") {
			digit = 2;
		}
		if (strDigit == "3") {
			digit = 3;
		}
		if (strDigit == "4") {
			digit = 4;
		}
		if (strDigit == "5") {
			digit = 5;
		}
		if (strDigit == "6") {
			digit = 6;
		}
		if (strDigit == "7") {
			digit = 7;
		}
		if (strDigit == "8") {
			digit = 8;
		}
		if (strDigit == "9") {
			digit = 9;
		}
		convertedStr *= 10;
		convertedStr += digit;
		digit = 0;
		curentLoop++;
	}
	return convertedStr;
}