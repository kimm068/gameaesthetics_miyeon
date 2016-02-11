#include <iostream>
using namespace std;

int main(){
	char bigArray[56];

	for (char i=0; i<55; i++){
		bigArray[i] = 'a';
		cout << bigArray[i] <<endl;
	}


	for (char j=0; j<55; j++){
		cout << bigArray[j] <<endl;
	}

	}
