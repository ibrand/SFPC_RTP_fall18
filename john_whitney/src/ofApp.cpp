#include "ofApp.h"

ofPolyline poly;
//--------------------------------------------------------------
void ofApp::setup(){
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // Angle animation
    float dx = ofGetElapsedTimef() * 3 ;
    float dy = -ofGetElapsedTimef() * 3 ;
    
    // Push vertices to polyline
    poly.clear() ;
//    cout << "value: " << dx << endl;
        poly.addVertex(100, 100);
        poly.addVertex(150, 50 + dx);
        poly.addVertex(200, 100);
        poly.addVertex(200, 200);
        poly.addVertex(150, 250 - dx);
        poly.addVertex(100, 200);
    
        poly.close();
        poly.draw();
}
