#include "ofApp.h"

void ofApp::setup(){
    ofSetFrameRate(30);
    spriteRenderer = new ofxSpriteSheetRenderer(1,10000,0,16);
    spriteRenderer ->loadTexture ("minion.png", 64, GL_NEAREST);
    
    player = new animatingSprite();
    player->pos.set(floor(ofGetWindowWidth()/2), floor(ofGetWindowHeight()/2));
    player->animation = walkAnimation;
   
    
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
        spriteRenderer->addCenteredTile(backgrounds[i]->tileName, 0, backgrounds[i]->pos.x, backgrounds [i]->pos.y,0,1,1,F_NONE, SCALE);
    }
    
    if (leftPressed) {
        player->pos.x-=0.1 * spriteRenderer->getTileSize()*SCALE;
        player->animation.index = 4;//floor(ofRandom(5,7));
        playerLeft = true;
    }
    if (rightPressed) {
        player->pos.x+=0.1 * spriteRenderer->getTileSize()*SCALE;
        player->animation.index = 2;//floor(ofRandom(3,5));
        playerRight = true;
    }
    if (upPressed) {
        player->pos.y-=0.1 * spriteRenderer->getTileSize()*SCALE;
        player->animation.index = 6;//floor(ofRandom(7,9));
        playerUp = true;
    }
    if (downPressed) {
        player->pos.y+=0.1 * spriteRenderer->getTileSize()*SCALE;
        player->animation.index = 0;//floor(ofRandom(1,3));
        playerDown = true;
    }

    
    int drawPlayerX = floor((player->pos.x + (spriteRenderer->getTileSize() * SCALE)/2) / (spriteRenderer->getTileSize() * SCALE)) * spriteRenderer->getTileSize()*SCALE;
    int drawPlayerY = floor((player->pos.y + (spriteRenderer->getTileSize() * SCALE)/2) / (spriteRenderer->getTileSize() * SCALE)) * spriteRenderer->getTileSize()*SCALE;
    
    int tilePosX = floor((player->pos.x + (spriteRenderer->getTileSize() * SCALE)/2) / (spriteRenderer->getTileSize() * SCALE));
    int tilePosY = floor((player->pos.y + (spriteRenderer->getTileSize() * SCALE)/2) / (spriteRenderer->getTileSize() * SCALE));
    
    //2d to 1d array - y * width + x
    if (backgrounds[tilePosY * 50 + tilePosX]->tileName == 12 ||
      backgrounds[tilePosY * 50 + tilePosX]->tileName == 13) {
        player->animation.loops = 0;
        player->animation.total_frames = 0;
        player->animation.index = 14;
//      player->animation = flyAnimation;
    } else {
        player->animation.loops = -1;
        player->animation.total_frames = 2;
//        player->animation = walkAnimation;
    }

//    cout << player->animation.total_frames <<endl;

    spriteRenderer->addCenteredTile(&player->animation, drawPlayerX, drawPlayerY, 0, F_NONE, SCALE);


    
   

    

        
//    cout << "pos.x relative to tiles: " <<  tilePosX << ", pos.y relative to tiles: " <<  tilePosY << endl;
    
//        cout << getTileName(tilePosX, tilePosY) << endl;
//    }
    

    
}


//--------------------------------------------------------------
void ofApp::draw(){
    spriteRenderer->draw();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == OF_KEY_LEFT) {
        leftPressed = true;
    }
    if (key == OF_KEY_RIGHT) {
        rightPressed = true;
    }
    if (key == OF_KEY_UP) {
        upPressed = true;
    }
    if (key == OF_KEY_DOWN) {
        downPressed = true;
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
