#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myfont.load("FiraSans-LightItalic.ttf", 32);
    ofBackground(0);
    
    
    
    for (int i=0; i<width; i++){
        for(int j=0; j<height; j++){
            pointArray.push_back(ofPoint(100+60*i, 100+60*j));
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
    player.update();

    
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    //    for (int i=0; i<WIDTH; i++){
    //        for(int j=0; j<HEIGHT; j++){
    //            //            cout << '_' << '|';
    //
    //            myfont.drawString("HI", 100+ 40*i, 100+40*j);
    //        }
    //        cout <<endl;
    //    }
    //    cout << "============================" << endl;
    
    for (int i=0; i<pointArray.size(); i++){
        
        if (player.y * width + player.x == i) {
            myfont.drawString("@",pointArray[i].x, pointArray[i].y);
        } else {
            myfont.drawString("O",pointArray[i].x, pointArray[i].y);
        }
    }
    
    player.display();

}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

    cout << "current mouse position is X:" << x << "Y:" << y << endl;
    cout << "current point position is X:" << pointArray[0].x << "Y:" << pointArray[0].y << endl;
    
    for (int i=0; i<pointArray.size(); i++){
        if (x>pointArray[i].x && x<pointArray[i].x+40 && y<pointArray[i].y && y>pointArray[i].y+40){
            
            myfont.drawString("We are mousing over", 400, 400);
            
        }
    }
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
