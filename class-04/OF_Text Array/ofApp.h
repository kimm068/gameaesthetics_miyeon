#pragma once

#include "ofMain.h"
#include "Player.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

    ofTrueTypeFont myfont;
    vector<ofPoint> pointArray;
    
    Player player;
};


const int width = 8;
const int height = 8;

//int x;
//int y;
//int vx;
//int vy;



