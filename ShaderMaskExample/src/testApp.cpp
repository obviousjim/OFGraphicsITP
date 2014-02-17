#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	mask.loadImage("stripes.png");
	grabber.initGrabber(640, 480);
	maskShader.load("maskTexture");
}

//--------------------------------------------------------------
void testApp::update(){
	grabber.update();
}

//--------------------------------------------------------------
void testApp::draw(){
	ofBackground(ofMap(mouseX, 0,
					   ofGetWidth(), 0, 255));
	maskShader.begin();
	maskShader.setUniformTexture("image", grabber, 0);
	maskShader.setUniformTexture("mask",mask, 1);
	
	grabber.draw(0, 0);
	
	maskShader.end();
	
//	mask.draw(0,0);
//	grabber.draw(0, 0);
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
