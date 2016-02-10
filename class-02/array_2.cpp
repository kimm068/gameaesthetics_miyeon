//miyeon studying array2

#include <iostream>

using namespace std;

int main(){

char firstChars[] = {'w','h','a','t','?'};
float firstFloats[] = {1.1, 2.2, 3.3, 4.4, 5.5};
int what[]= {1,2,3,4,5,6,7,8,9};
bool fiveBools[] = {false, false, true,false,true};

cout << firstChars[1] <<" " << firstFloats[2] << " " << what [3] << " " << fiveBools[3] << "\n\n";


cout << "change value of firstChars[1]: " << "\n\n";
firstChars[1] ='o';

cout<< firstChars[1] << "\n\n";

cout << "i hate firstFloats[2]: " <<"\n\n";
firstFloats[2]= 9.9;

cout <<firstFloats[2] << "\n\n";

cout <<endl;

return 0;


}

// Answer 

// Miyeons-MBP:class-02 miyeon$ ./array2
// h 3.3 4 0

// change value of firstChars[1]: 

// o

// i hate firstFloats[2]: 

// 9.9


// Miyeons-MBP:class-02 miyeon$ 
