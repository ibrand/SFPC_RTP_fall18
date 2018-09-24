#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(202, 119, 93);
    ofColor(255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int rectWidth = 70;
    int spaceBetweenRect = 10;
    int gridRowCount = 9;
    
    ofSeedRandom(mouseX * 1000);
    
    ofTranslate(150, 150);
    
    for (int i = 0; i < 6; i++) {
        int startOfNextRow = i * (rectWidth + spaceBetweenRect);
        ofPushMatrix();
            ofTranslate(0, startOfNextRow);
            drawGridRow(gridRowCount);
        ofPopMatrix();
    }
}

void ofApp::drawGridRow(int gridRowCount){
    int rectWidth = 70;
    int spaceBetweenRect = 10;

    for (int i = 0; i < gridRowCount; i++) {
        ofPushMatrix();
        ofTranslate(i * (rectWidth + spaceBetweenRect), 0);
        // draw multiple entities on top of each other adding another one on top linearly
        // as the row is drawn
        for (int j = 0; j < i; j++){
            drawParallelogram(0, 0, rectWidth, rectWidth);
        }
        ofPopMatrix();
    }
}

void ofApp::drawParallelogram(int x, int y, int w, int h){
    int deviation = 8;
    ofPolyline poly;
    
    x = ofRandom(x, x + deviation);
    y = ofRandom(y, y + deviation);
    poly.addVertex(x, y);
    
    x = ofRandom(x, x + deviation);
    y = ofRandom(y, y + deviation);
    poly.addVertex(x + w, y);
    
    x = ofRandom(x, x + deviation);
    y = ofRandom(y, y + deviation);
    poly.addVertex(x + w, y + h);
    
    x = ofRandom(x, x + deviation);
    y = ofRandom(y, y + deviation);
    poly.addVertex(x, y + h);
    
    poly.close();
    poly.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

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
