// My questions are marked with ***
#include <iostream>
#include <fstream>
using namespace std;

char getTile(int x, int y, unsigned char data[], int size, int w, int h);
int writeBytes(int offset, unsigned char data[]);

int main() {
	ifstream map1("smile.bmp");
	ifstream map2("sick.bmp");
	ifstream map3("angry.bmp");

	unsigned char data1; //variable to store temporary bytes

	const int BMPSIZE = 824;	//actual size in bytes of the bmp file
	unsigned char bmpBytes1[BMPSIZE];	//array of 8-bit integers to store our bytes
	
	int whichByte = 0;
	while (map1 >> data1) {		
		bmpBytes1[whichByte] = data1;
		whichByte++;
	}

	map1.close();

	unsigned char data2; //variable to store temporary bytes
	// const int BMPSIZE = 376;	//actual size in bytes of the bmp file
	unsigned char bmpBytes2[BMPSIZE];	//array of 8-bit integers to store our bytes
	
	whichByte = 0;
	while (map2 >> data2) {		
		//as long as the file has bytes, plug it into the array
		bmpBytes2[whichByte] = data2;
		whichByte++;
	}
	map2.close();

	unsigned char data3; //variable to store temporary bytes
	// const int BMPSIZE = 376;	//actual size in bytes of the bmp file
	unsigned char bmpBytes3[BMPSIZE];	//array of 8-bit integers to store our bytes
	
	whichByte = 0;
	while (map3 >> data3) {		
		//as long as the file has bytes, plug it into the array
		bmpBytes3[whichByte] = data3;
		whichByte++;
	}
	map3.close();

	//create a new array to hold the values that we actually want.
	const int SIZE = 16;
	char smile[SIZE][SIZE];
	char sick[SIZE][SIZE];
	char angry[SIZE][SIZE];

	//loop through all the bytes we want and give values to our new array.
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			int r = 0;
			int g = 0;
			int b = 0;
			int n = 54 + (i * SIZE + j) * 3;

			b = writeBytes(n,bmpBytes1);
			g = writeBytes(n+1,bmpBytes1);
			r = writeBytes(n+2,bmpBytes1);

			if (r == 255 && g == 255 && b == 255) {
				smile[j][i] = '.';
			} else if (r==255 && g==0 && b==0){
				smile[j][i] = '*';
			} else if (r==0 && g==255 && b==0){
				smile[j][i] = '*';
			} else if (r==0 && g==0 && b==0){
				smile[j][i] = '@';
			} else if (r==255 && g==255 && b==0){
				smile[j][i] = '*';
			} else if (r == 0 && g == 0 && b == 255) {
				smile[j][i] = '*';
			} else {
				smile[j][i] = '#';
			}

			b = writeBytes(n,bmpBytes2);
			g = writeBytes(n+1,bmpBytes2);
			r = writeBytes(n+2,bmpBytes2);


			if (r == 255 && g == 255 && b == 255) {
				sick[j][i] = '.';
			
			} else if (r==255 && g==0 && b==0){
				sick[j][i] = '*';
			
			} else if (r==0 && g==255 && b==0){
				sick[j][i] = '*';
				
			} else if (r==0 && g==0 && b==0){
				sick[j][i] = '@';
			
			} else if (r==255 && g==255 && b==0){
				sick[j][i] = '*';
			
			} else {
				sick[j][i] = '#';
			
			}

			b = writeBytes(n,bmpBytes3);
			g = writeBytes(n+1,bmpBytes3);
			r = writeBytes(n+2,bmpBytes3);

			if (r == 255 && g == 255 && b == 255) {
				angry[j][i] = '.';
			
			} else if (r==255 && g==0 && b==0){
				angry[j][i] = '*';
			
			} else if (r==0 && g==255 && b==0){
				angry[j][i] = '*';
				
			} else if (r==0 && g==0 && b==0){
				angry[j][i] = '@';
			
			} else if (r==255 && g==255 && b==0){
				angry[j][i] = '*';
			
			} else {
				angry[j][i] = '#';
			}
		}
	}

	string input;
	while (input != "q"){
		cout << "describe your feeling" << endl;
		cout << "choose one"<< "\n" << "happy, angry, sick" << endl;
		cin >> input;
	

	if (input== "happy"){
		cout << smile[SIZE][SIZE] << "\n";
	} else if (input == "angry"){
		cout << angry[SIZE][SIZE] << "\n";
	} else if (input == "sick"){
		cout << sick[SIZE][SIZE] << "\n";
		cout << "choose one"<< "\n" << "happy, angry, sick" << endl;
	}

	// //print out the converted array
		for (int i = 0; i < SIZE; i++) {
			for (int j = 0; j < SIZE; j++) {
				cout << smile[j][i] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < SIZE; i++) {
			for (int j = 0; j < SIZE; j++) {
				cout << sick[j][i] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < SIZE; i++) {
			for (int j = 0; j < SIZE; j++) {
				cout << angry[j][i] << " ";
			}
			cout << endl;
		}


	}
	
	return 0;
}


int writeBytes(int offset, unsigned char data[]) {
	return data[offset];
}
