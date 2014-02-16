#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	//ofBackground(255,255,255);

	ofSetVerticalSync(true);
	
	//gradients
//	ofBackgroundGradient(ofColor::blueSteel, ofColor::blueViolet);

	ofBackground(0);
	
	ofSetWindowShape(500, 500);
	
//	ofToggleFullscreen();
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	//declare a color
	//ofColor c = ofColor::black;
	
	//ofSetColor(255,0,255); //R G B
	//just draw one rectangle
	
//	ofSetColor(ofColor::aquamarine);
//	ofRect(0,0, 200, 200);
	
	///DRAWING A GRID OF SQUARES
//	for(int y = 0; y < ofGetHeight(); y += 50){
//		for(int x = 0; x < ofGetWidth(); x += 50){
//			ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
//			ofRect(x,y,50,50);
//		}
//	}
	
	for(int i = 0; i < 360; i += 10){
		ofVec2f center = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
//		ofSetColor(ofColor::white);
		//prove that it's in the center
//		ofCircle(center, 20);
		//center it to the mouse instead of the screen which is way more fun
		center = ofVec2f(mouseX,mouseY);
		ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
		float circleRadius = 200;
		//adding ofGetFrameNum() makes the whole thing spin slowly
		ofVec2f directionFromCenter = ofVec2f(0, -1).getRotated(i+ofGetFrameNum()) * circleRadius;
		ofVec2f circlePosition = center + directionFromCenter;
		ofCircle(circlePosition, 20);
	}
	
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
