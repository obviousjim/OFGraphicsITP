#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(0);
	//create render texture that is small, post stamp sized
	fbo.allocate(200, 200, GL_RGB);
	ofSetFrameRate(15);
}

void testApp::update(){}
void testApp::draw(){
	//start drawing to the target instead of the screen
	fbo.begin();
	//clear the current contents of the fbo
	ofClear(0,0,0);
	//store the style
	ofPushStyle();
	//turn the circle mode to no fill
	ofNoFill();
	//turn on alpha blending so we have transparency
	ofEnableAlphaBlending();
	//set the color to white with some transparency
	ofSetColor(255,100);
	//draw 500 random circles. this is expensive, so we use an FBO
	//to be able to capture and replicate our work
	for(int i = 0; i < 500; i++){
		ofCircle(ofRandom(200), ofRandom(200), 10);
	}
	//pop back to normal style
	ofPopStyle();
	//switch the rendering back to the main scree
	fbo.end();
	//draw the contents of the rendering to the main screen
//	fbo.draw(0,0, mouseX,mouseY);
	
	for(int y = 0; y < ofGetHeight(); y += fbo.getHeight()){
		for(int x = 0; x < ofGetWidth(); x += fbo.getWidth()){
			int saturation = ofMap(x, 0, ofGetWidth(), 0, 255);
			int hue = ofMap(y, 0, ofGetHeight(), 0, 255);
			//			ofSetColor(ofRandom(255),
			//					   ofRandom(255),
			//					   ofRandom(255));
			ofSetColor( ofColor::fromHsb(hue, saturation, 255) );
			fbo.draw(x,y);
		}
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
