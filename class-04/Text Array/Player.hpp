//
//  Player.hpp
//  array_class04
//
//  Created by Miyeon Kim2 on 2/25/16.
//
//

#ifndef Player_hpp
#define Player_hpp

#include "ofMain.h"
#include <stdio.h>

#endif /* Player_hpp */

class Player {
public:
    Player();
    
    int x;
    int y;
    int numMoves;
    const int totalMoves = 100;
    
    ofTrueTypeFont myfont;
    vector<ofPoint> pointArray;
    
    const int width = 8;
    const int height = 8;
    
    void update();
    void display();
};