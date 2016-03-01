//
//  Player.cpp
//  array_class04
//
//  Created by Miyeon Kim2 on 2/25/16.
//
//

#include "Player.hpp"
#include "ofMain.h"


Player::Player(){
    myfont.load("FiraSans-LightItalic.ttf", 32);
    
    for (int x=0; x<width; x++){
        for(int y=0; y<height; y++){
            pointArray.push_back(ofPoint(100+60*x, 100+60*y));
        }
    }

    
    
}

void Player::update(){
    
    
//    for (int i=0; i<pointArray.size(); i++){
//        myfont.drawString("0",pointArray[i].x, pointArray[i].y);
//    }

    x = 4;
    y = 4;
    
//    if (numMoves < totalMoves) {
//        int r = floor(ofRandom(4));
//        if (r == 0) {
//            y-=60;
//        } else if (r == 1) {
//            x+=60;
//        } else if (r == 2) {
//            y+=60;
//        } else if (r == 3) {
//            x-=60;
//        }
//        numMoves++;
//        cout << "x: " << x << ", y: " << y << endl;
//    }

//    if (up == true) {
//        y--;
//    }
    
}

void Player::display(){
    cout <<"drawing\n";
    ofDrawEllipse(x, y, 10, 10);
//        for (int i=0; i<pointArray.size(); i++){
//            myfont.drawString("*",pointArray[i].x, pointArray[i].y);
//        }
    
}