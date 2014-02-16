#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(0);
	//ofSetCircleResolution(8); //draw an octagon
	ofSetCircleResolution(200);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

	//store the state of blending mode, color, line width, etc
	ofPushStyle();
	ofEnableBlendMode(OF_BLENDMODE_SCREEN);
	//a
	ofSetColor(128,  0,  0);
	ofCircle(ofGetWidth()*.25, ofGetHeight()/2, ofGetHeight()/2);
	//b
	ofSetColor(  0,  0,128);
	ofCircle(ofGetWidth()*.75, ofGetHeight()/2, ofGetHeight()/2);
	//c
	
	ofEnableBlendMode(OF_BLENDMODE_MULTIPLY);
	ofSetColor(128, 0, 0);
	ofCircle(ofGetWidth()/2, ofGetHeight()/2, 40);
	//color in overlap 128,0,128
	
	//restore state to whatever it was before ofPushStyle();
	ofPopStyle();
	
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
