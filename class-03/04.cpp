// My questions are marked with ***


#include <iostream>
#include <fstream>
using namespace std;

char getTile(int x, int y, unsigned char data[], int size, int w, int h);
int writeBytes(int offset, unsigned char data[]);

int main() {
	// ifstream map("blankbmp.bmp");
	ifstream map("miyeon1.bmp");
	unsigned char data; //variable to store temporary bytes

	const int BMPSIZE = 452;	//actual size in bytes of the bmp file
	unsigned char bmpBytes[BMPSIZE];	//array of 8-bit integers to store our bytes
	
	int whichByte = 0;
	while (map >> data) {		
		//as long as the file has bytes, plug it into the array
		bmpBytes[whichByte] = data;
		whichByte++;
	}

	map.close();

	//create a new array to hold the values that we actually want.
	const int SIZE = 10;
	char grid[SIZE][SIZE];

	//loop through all the bytes we want and give values to our new array.
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			int r = 0;
			int g = 0;
			int b = 0;
			// int p = 0;
			// int c = 0;
			int n = 54 + (i * SIZE + j) * 3;


//***
//Do i have to make different values to every color I use? ex. cyan, pink... 
//***


			b = writeBytes(n,bmpBytes);
			g = writeBytes(n+1,bmpBytes);
			r = writeBytes(n+2,bmpBytes);
			// p = writeBytes(n+3,bmpBytes);
			// c = writeBytes(n+4,bmpBytes);

			cout << r << " ";
			cout << g << " ";
			cout << b << "\n";
			// cout << p << " ";
			// cout << c << "\n";

			if (r == 255 && g == 255 && b == 255) {
				grid[j][i] = 'O';
			} else if (r==255 && g==0 && b==0){
				grid[j][i] = 'U';
			} else if (r==0 && g==255 && b==0){
				grid[j][i] = 'L';
			} else if (r==0 && g==0 && b==255){
				grid[j][i] = 'E';
			} else if (r==255 && g==0 && b==255){
				grid[j][i] = 'W';
			} else {
				grid[j][i] = 'H';
			}
		}
	}

	//print out the converted array
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << grid[j][i] << " ";
		}
		cout << endl;
	}
	return 0;
}


int writeBytes(int offset, unsigned char data[]) {
	return data[offset];
}
