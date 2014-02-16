#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(0);
	image.loadImage("myImage.jpg");

	//replace half the pixels with random colors
//	for(int y = 0; y < image.getHeight(); y++){
//		for(int x = 0; x < image.getWidth(); x++){
//			if(ofRandomuf() < .5){
//				image.getPixelsRef().setColor(x, y,ofColor(ofRandom(255),
//														   ofRandom(255),
//														   ofRandom(255)));
//			}
//		}
//	}

	//do a simple blue screen
	for(int y = 0; y < image.getHeight(); y++){
		for(int x = 0; x < image.getWidth(); x++){
			ofColor c = image.getPixelsRef().getColor(x, y);
			//METHOD 1
//			if(c.r + c.g < c.b){
//				image.getPixelsRef().setColor(x, y,ofColor::black);
//			}
			
			//METHOD 2 WITH HUE. WILL IT WORK? sorta
			int sampleHue = c.getHue();
			int blueHue = ofColor::blue.getHue();
			if( abs(sampleHue - blueHue) < 20 && c.getSaturation() > 100){
				image.getPixelsRef().setColor(x, y,ofColor::black);
			}
		}
	}

	image.reloadTexture();
}
//--------------------------------------------------------------
void testApp::update(){
	
}
//--------------------------------------------------------------
void testApp::draw(){
	
	//distort to fit the mouse position
	//image.draw(0,0,mouseX,mouseY);
	
//	change the background color to whatever the mouse is hovering
//	ofColor sample = image.getPixelsRef().getColor(mouseX, mouseY);
//	ofBackground(sample);
	
	image.draw(0,0);
	
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
