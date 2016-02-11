#include <iostream>
#include <cctype>
#include <string>

using namespace std;



int main(){
	string name;
	cin >> name;
	
	cout << "Please enter your full name: ";
	getline (cin, name);
	cout << "hello, " << name << "!\n";

	for (int i = 0; i < name.size (); i++){
		name.at(i) = toupper (name.at(i));
	}
	cout << "converted name: " << name << endl;
}