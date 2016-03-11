#pragma once

#include "ofMain.h"
#include "ofxSpriteSheetRenderer.h"

static animation_t walkAnimation = {
    0,  //.index
    0,  //.frame
    2,  //.totalframes
    1,  //.width
    1,  //.height
    90, //.frameduration
    0,  //.nexttick
    -1, //.loops
    -1, //.finalindex
    1   //.frameskip
};
//
//
//static animation_t flyAnimation = {
//    14,  //.index
//    0,  //.frame
//    1,  //.totalframes
//    1,  //.width
//    1,  //.height
//    90, //.frameduration
//    0,  //.nexttick
//    0, //.loops
//    -1, //.finalindex
//    1   //.frameskip
//};

struct basicSprite {  // background
    int tileName;  // which tile to draw?
    ofPoint pos;   // tile position
};

struct animatingSprite {  //player
    animation_t animation;
    ofPoint pos;
};


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
		
    ofxSpriteSheetRenderer * spriteRenderer;
    vector<basicSprite *> backgrounds;
    animatingSprite * player;
    ofPoint cameraCenter;
    
    const float SCALE = 3;
    const int GRIDW = 30;
    const int GRIDH = 30;
    int count;
    const int maxcount = 100;
    
    bool rightPressed;
    bool leftPressed;
    bool upPressed;
    bool downPressed;
    
    bool playerDown;
    bool playerUp;
    bool playerRight;
    bool playerLeft;
    bool playerFly;
    
    void spaceFree(int dir);
    int getTileName(int x, int y);
};
