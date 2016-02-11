#include <iostream>
using namespace std;

int main(){

	int width= 8;
	int height=8;
	int j=0;
	int i=0;

	for (int i=0; i<height; i++){
		for (int j=0; j<width; j++){
			if((i+j)%2==0){
				cout<<'x';
			}
			else{
				cout<<'o';
			}
		
		}
		cout<<endl;
	}

		return 0;
}