#include <iostream>

using namespace std;

class Answer {
public:
	string description;
	bool yes;
	bool no;
	bool arm;
	bool heart;
	bool push;
	bool wait;
	bool color;
	bool nocolor;
	bool infrontofhouse;
	bool onthestreet;
	// char mapChar;
};

int main(){

string input;

int x=0;
int y=0;
Answer map[3][3];

for (int i=0; i<3; i++){
	for(int j=0; j<3; j++){
	map[j][i].description = "Let's test your psychopath level";
	map[j][i].yes =false;
	map[j][i].arm =false;
	map[j][i].heart =false;
	map[j][i].push =false;
	map[j][i].wait =false;
	map[j][i].color =false;
	map[j][i].nocolor =false;
	map[j][i].infrontofhouse =false;
	map[j][i].onthestreet =false;
	}
}

map[0][0].description = "This is a portrait of a soldier who is injured in the war. Where did he get injured? \n\n Arm or Leg (Y) \n heart (N)";
map[0][0].arm = true;
map[0][0].heart = true;

map[1][0].description = "If your enemy is about to fall off a cliff. What would you do? \n\n Push (Y) \n Watch and laugh (N)";
map[1][0].push = true;
map[1][0].wait = true;

map[2][0].description = "Your psychopathe leve is 0";

map[0][1].description = "What color of drink you want to drink now? \n\n colorful one (Y) \n no color (N)";
map[0][1].color = true;
map[0][1].nocolor = true;

map[0][2].description = "Your psychopathe leve is 50";

map[1][1].description = "Your cat died. Where would you bury her? \n\n in front of house (Y) \n on the street (N)";
map[1][1].infrontofhouse = true;
map[1][1].onthestreet = true;

map[2][1].description = "Your psychopathe leve is 75";

map[1][2].description = "Do you think you are psychopath? \n\n Yes(Y) \n No (N)";
map[1][2].yes = true;
map[1][2].no = true;

map[2][2].description = "Your psychopathe leve is 100";

while (input !="q"){
	cout << "Let's test your psychopath level" <<endl;
	cout<< "This is a portrait of a soldier who is injured in the war. Where did he get injured? \n\n Arm or Leg (Y) \n heart (N)" << endl;
	cin >> input;

	if (input == "Y"){
		if (map[0][0].arm== true) {
			x++;
		}
	}
	if (input == "N"){
		if (map[0][0].heart== true) {
			y++;
		}
	}

	if (input == "Y"){
		if (map[1][0].push== true) {
			x++;
		}
	}
	if (input == "N"){
		if (map[1][0].wait== true) {
			y++;
		}
	}

	if (input == "Y"){
		if (map[0][1].color== true) {
			y++;
		}
	}
	if (input == "N"){
		if (map[0][1].nocolor== true) {
			x++;
		}
	}

	if (input == "Y"){
		if (map[1][1].infrontofhouse== true) {
			x++;
		}
	}
	if (input == "N"){
		if (map[1][1].onthestreet== true) {
			y++;
		}
	}

	if (input == "Y"){
		if (map[1][2].yes== true) {
			x--;
		}
	}
	if (input == "N"){
		if (map[1][2].no== true) {
			x++;
		}
	}

return 0;

}
}

