#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(202, 119, 93);
    ofColor(255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

void ofApp::drawRect(int x, int y, int w, int h){
    ofPolyline poly;
    
    poly.addVertex(x, y);
    poly.addVertex(x + w, y);
    poly.addVertex(x + w, y + h);
    poly.addVertex(x, y + h);
    
    poly.close();
    poly.draw();
}

//--------------------------------------------------------------
void ofApp::draw(){
    int rectWidth = 70;
    int spaceBetweenRect = 10;
    
    ofTranslate(150, 150);
    
    for (int i = 0; i < 6; i++) {
        ofPushMatrix();
            ofTranslate(0, i * (rectWidth + spaceBetweenRect));
            for (int j = 0; j < 9; j++) {
                ofPushMatrix();
                    ofTranslate(j * (rectWidth + spaceBetweenRect), 0);
                    drawRect(0, 0, rectWidth, rectWidth);
                ofPopMatrix();
            }
        ofPopMatrix();
    }
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
