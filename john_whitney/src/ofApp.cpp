#include "ofApp.h"

ofPolyline poly;
//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/3, ofGetHeight()/3);
    for (int i = 0; i < 50; i++) {
    float offset = i * sin(ofGetElapsedTimef()*0.1)*0.1;
    
        float sinVal = sin( (ofGetElapsedTimef()) + offset) * 20;
//        ofPushMatrix();
            ofTranslate(sinVal, sinVal);
        ofRotateDeg(45);
            ofSetColor(255);
            ofDrawRectangle(sinVal, sinVal, 100, 100);
            ofSetColor(0, 0, 0);
            ofDrawRectangle(sinVal + 2, sinVal + 2, 95, 95);
//        ofPopMatrix();
    
    }
}

//void ofApp::drawHex(){
//    poly.addVertex(100, 100);
//    poly.addVertex(150, 50);
//    poly.addVertex(200, 100);
//    poly.addVertex(200, 200);
//    poly.addVertex(150, 250);
//    poly.addVertex(100, 200);
//    poly.close();
//    poly.draw();
//}
