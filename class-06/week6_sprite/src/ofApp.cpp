#include "ofApp.h"

void ofApp::setup(){
    ofSetFrameRate(30);
    spriteRenderer = new ofxSpriteSheetRenderer(1,10000,0,16);
    spriteRenderer ->loadTexture ("minion.png", 64, GL_NEAREST);
    
    
    player = new animatingSprite();
    player->pos.set(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    player->animation.index=1;
   
    
    for (int i=0; i<50; i++){
        for (int j=0; j<50; j++){
            basicSprite * background = new basicSprite();
            background->pos.set(j*spriteRenderer->getTileSize()* SCALE,i*spriteRenderer->getTileSize() * SCALE);
            
            background->tileName = floor(ofRandom(8,14));
            backgrounds.push_back(background);
            cout << "bg" << background->pos<< endl;
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    spriteRenderer->clear();
    spriteRenderer->update(ofGetElapsedTimeMillis());
    
    
    for(int i=0; i<backgrounds.size(); i++){
        //        spriteRenderer->addTile(backgrounds[i]->tileName, 0, backgrounds[i]->pos.x, backgrounds[i]->pos.y);
        //    spriteRenderer->addCenteredTile(&player->animation, player->pos.x - cameraCenter.x,player->pos.y, 0, F_NONE, SCALE);

        
//        if (count<maxcount){
//            int r=floor(ofRandom(1));
//            if(r==0){
//                
//            } else if (r==1){
//               
//            }
//        }
        
        spriteRenderer->addCenteredTile(backgrounds[i]->tileName, 0, backgrounds[i]->pos.x, backgrounds [i]->pos.y,0,1,1,F_NONE, SCALE);
    }

    
    spriteRenderer->addCenteredTile(player->animation.index, 0, player->pos.x, player->pos.y,0,1,1,F_NONE, SCALE);

    
    if (leftPressed) {
        player->pos.x-=0.4 * spriteRenderer->getTileSize()*SCALE;
        player->animation.index = floor(ofRandom(5,6));
    }
    if (rightPressed) {
        player->pos.x+=0.4 * spriteRenderer->getTileSize()*SCALE;
        player->animation.index = floor(ofRandom(3,4));
    }
    if (upPressed) {
        player->pos.y-=0.4 * spriteRenderer->getTileSize()*SCALE;
        player->animation.index = floor(ofRandom(7,8));
    }
    if (downPressed) {
        player->pos.y+=0.4 * spriteRenderer->getTileSize()*SCALE;
        player->animation.index = floor(ofRandom(1,2));
    }
    
    if (!leftPressed && !rightPressed && !upPressed && !downPressed) {
        player->animation.loops = 0;
    } else {
        player->animation.loops = -1;
        //        cout << "pos.x: " << link->pos.x << ", pos.y: " << link->pos.y << endl;
        
        int tilePosX = floor((player->pos.x + (spriteRenderer->getTileSize() * SCALE)/2) / (spriteRenderer->getTileSize() * SCALE));
        int tilePosY = floor((player->pos.y + (spriteRenderer->getTileSize() * SCALE)/2) / (spriteRenderer->getTileSize() * SCALE));
        
//        cout << "pos.x relative to tiles: " <<  tilePosX << ", pos.y relative to tiles: " <<  tilePosY << endl;
        
//        cout << getTileName(tilePosX, tilePosY) << endl;
    }

    
}


//--------------------------------------------------------------
void ofApp::draw(){
    spriteRenderer->draw();
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == OF_KEY_LEFT) {
        leftPressed = true;
        player->animation.loops = -1;
    }
    if (key == OF_KEY_RIGHT) {
        rightPressed = true;
        player->animation.loops = -1;
    }
    if (key == OF_KEY_UP) {
        upPressed = true;
        player->animation.loops = -1;
    }
    if (key == OF_KEY_DOWN) {
        downPressed = true;
        player->animation.loops = -1;
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == OF_KEY_LEFT) {
        leftPressed = false;
    }
    if (key == OF_KEY_RIGHT) {
        rightPressed = false;
    }
    if (key == OF_KEY_UP) {
        upPressed = false;
    }
    if (key == OF_KEY_DOWN) {
        downPressed = false;
    }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
