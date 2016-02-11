#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(){
	cout << "Hello World: ";
	string answer;
	cin >> answer;
	cout << "You responded: " << answer << "\n";
	getline(cin, answer);
	cout << "followed by: " << answer << "\n";

	for (int i=0; i<answer.size(); i++){
		cout << "converting letter" << answer.at(i) <<"\n";
		answer.at(i) = toupper (answer.at(i));
	}
	cout <<answer <<endl;
	return 0;
}
