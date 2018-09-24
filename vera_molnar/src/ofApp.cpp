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
            drawGridRow();
        ofPopMatrix();
    }
}

void ofApp::drawGridRow(){
    int rectWidth = 70;
    int spaceBetweenRect = 10;
//    int maxParallelogramCount = 10;

    int numberOfTimesToDrawParallelogram = 1;
    for (int i = 0; i < 3; i++) {
        ofPushMatrix();
        ofTranslate(i * (rectWidth + spaceBetweenRect), 0);
        // draw multiple entities on top of each other adding another one on top linearly
        // as the row is drawn
        for (int j = 0; j < numberOfTimesToDrawParallelogram; j++){
            drawParallelogram(0, 0, rectWidth, rectWidth, 8);
        }
        numberOfTimesToDrawParallelogram = numberOfTimesToDrawParallelogram + 1;
        ofPopMatrix();
    }
    
    numberOfTimesToDrawParallelogram = 5;
    int deviation = 8;
    for (int i = 3; i < 6; i++) {
        ofPushMatrix();
        ofTranslate(i * (rectWidth + spaceBetweenRect), 0);
        for (int j = 0; j < numberOfTimesToDrawParallelogram; j++){
            drawParallelogram(0, 0, rectWidth, rectWidth, deviation);
        }
        numberOfTimesToDrawParallelogram = numberOfTimesToDrawParallelogram * 2;
        deviation = deviation + 2;
        ofPopMatrix();
    }
    
    numberOfTimesToDrawParallelogram = 3;
    for (int i = 6; i <= 9; i++) {
        ofPushMatrix();
        ofTranslate(i * (rectWidth + spaceBetweenRect), 0);
        for (int j = numberOfTimesToDrawParallelogram; j > 0; j--){
            drawParallelogram(0, 0, rectWidth, rectWidth, 8);
        }
        numberOfTimesToDrawParallelogram = numberOfTimesToDrawParallelogram -1;
        ofPopMatrix();
    }
}

void ofApp::drawParallelogram(int x, int y, int w, int h, int deviation){
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
