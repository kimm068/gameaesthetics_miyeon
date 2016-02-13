#include <iostream>

using namespace std;

class Room{
public:
	string description;
	bool canGoNorth;
	bool canGoSouth;
	bool canGoEast;
	bool canGoWest;
	char mapChar;
}


int x = 1;
int y =1;

Room map[4][4];

for (int i=0; i<4; i++){
	for (int j=0; j<4; j++){
		map [j][i].description = "Your house is on fire. You have to rescue your young sister!"
		map [j][i].canGoNorth = false;
		map [j][i].canGoSouth = false;
		map [j][i].canGoWest = false;
		map [j][i].canGoEast = false;
	}
}

for (int i=0; i<4; i++){
	for (int j=0; j<4; j++){
		cout << map[j][i].description;
	}
	cout <<endl;
}
	map[1][1].description = "You are at the living room. Find the Kitchen!";
	map[1][1].canGoEast = true;
	map[1][1].canGoWest = true;
	map[1][1].canGoNorth = true;

	map[1][0].description = "There's nth here. Find the Kitchen!";
	map[1][0].canGoEast = true;
	map[1][0].canGoSouth = true;
	
	map[2][0].description = "You are at study room! find the kitchen!";
	map[2][0].canGoEast = true;
	map[2][0].canGoNorth = true;
	map[2][0].canGoWest = true;

	map[3][0].description = "You came outside, go back to house!";
	map[3][0].canGoSouth = true;
	map[3][0].canGoWest = true;

	map[3][1].description = "You are at balcony!";
	map[3][1].canGoSouth = true;
	map[3][1].canGoNorth = true;
	map[3][1].canGoWest = true;

	map[3][2].description = "You are at restroom!";
	map[3][2].canGoSouth = true;
	map[3][2].canGoNorth = true;
	map[3][2].canGoWest = true;

	map[3][3].description = "You are near her room! find herrr";
	map[3][3].canGoWest= true;
	map[3][3].canGoNorth = true;

	map[0][1].description = "You are at the Restroom. Go to Kitchen!";
	map[0][1].canGoEast = true;
	map[0][1].canGoSouth = true;

	map[0][0].description = "This room is locked!!!!!";

	map[0][2].description = "You are at the Balcony. Find your room";
	map[0][2].canGoNorth = true;
	map[0][2].canGoEast = true;

	map[0][3].description = "You can't go in! there's huge fire!!!!"

	map[1][2].description = "You found your room. Find drawing room";
	map[1][2].canGoWest= true;
	map[1][2].canGoSouth = true;

	map[1][3].description = "You are at the drawing room. Almost!!! find your sister's room";
	map[1][3].canGoEast= true;
	map[1][3].canGoNorth = true;

	map[2][3].description = "You are at her room!!! but she's not here!! check the bathroom";
	map[2][3].canGoWest= true;
	map[2][3].canGoNorth = true;

	map[3][3].description = "You are at her dressing room, but she's not here!! check the bathroom";
	map[3][3].canGoWest= true;
	map[3][3].canGoNorth = true;

	map[2][2].description = "You found your sister!!! she's safe"



//still in progress~!!!!!!!!!!!!!!!!!!!!!!!!!!!

