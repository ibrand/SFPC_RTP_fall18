#include "ofApp.h"

ofPolyline poly;
int rotation = 45;
//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::update(){
    rotation++;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPushMatrix();
    ofTranslate(450, 250);
//    ofRotate(rotation *2);
    for (int i = 0; i < 10; i++) {
        ofSetColor(255, i*2, 0);
        ofPushMatrix();
            ofScale(i * 0.2, i * 0.2);
            ofTranslate(5, 5);

            ofTranslate((100 * i/2) * cos(ofGetElapsedTimef()) + ofGetElapsedTimef() * 2, (100 * i/2) * sin(ofGetElapsedTimef()) + ofGetElapsedTimef() * 2);
            ofSetColor(255, 0 , 0);
            poly.addVertex(0, 0);
            poly.addVertex(50, 0);
            poly.addVertex(25, 90);
        
            poly.close();
            poly.draw();
        ofPopMatrix();
    }
    ofPopMatrix();
}
