#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(0);
	ofxObjLoader::load("dodecahedron.obj", objFile);
}
//--------------------------------------------------------------
void testApp::update(){
}
//--------------------------------------------------------------
void testApp::draw(){
	ofLight l;
	l.enable();
	
	cam.begin();
	ofPushMatrix();
	ofScale(100,100,100);
	objFile.draw();
	ofPopMatrix();
	cam.end();
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
