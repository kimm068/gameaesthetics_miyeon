#include <iostream>
#include <string>
using namespace std;

int main(){
	// string bar = "********";

	int length=1;
	
	for (int j=0; j<25; j++){
	//nested for loop
		for (int i=0; i<length; i++){
			cout << "0";
		}
		cout << endl;
		length++;


	}
	return 0;
}