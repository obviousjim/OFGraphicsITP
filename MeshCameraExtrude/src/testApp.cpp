#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(0);
	grabber.initGrabber(320,240);
	for(int y = 0; y < grabber.getHeight(); y++){
		for(int x = 0; x < grabber.getWidth(); x++){
			mesh.addVertex(ofVec3f(x,y,0));
			mesh.addTexCoord(ofVec2f(x,y));
		}
	}
	
	//store the width and height for convenience
	int width = grabber.getWidth();
	int height = grabber.getHeight();

	for (int y = 0; y < height-1; y++){
		for (int x = 0; x < width-1; x++){
			
			mesh.addIndex(x+y*width);				// 0
			mesh.addIndex((x+1)+y*width);			// 1
			mesh.addIndex(x+(y+1)*width);			// 10
			
			mesh.addIndex((x+1)+y*width);			// 1
			mesh.addIndex((x+1)+(y+1)*width);		// 11
			mesh.addIndex(x+(y+1)*width);			// 10
		}
	}
}
//--------------------------------------------------------------
void testApp::update(){
	//update the grabber which will pull in new frames
	grabber.update();
	//if the frame was changed by the call to update, then also update the mesh
	if(grabber.isFrameNew()){
		//iterate through every pixel of the video, change every vertex in the mesh
		for(int y = 0; y < grabber.getHeight(); y++){
			for(int x = 0; x < grabber.getWidth(); x++){
				//grab the color of the new videoframe, sample the brightness
				ofColor color = grabber.getPixelsRef().getColor(x, y);
				float brightness = color.getBrightness();
				//get the corresponding vertex for this pixel and set its Z value
				int vertexIndex = y*grabber.getWidth()+x;
				mesh.setVertex(vertexIndex, ofVec3f(x,y,brightness));
			}
		}
	}
}
//--------------------------------------------------------------
void testApp::draw(){
	//just draw the grabber
//	grabber.draw(0,0);
	ofEnableBlendMode(OF_BLENDMODE_SCREEN);
	cam.setTarget(ofVec3f(grabber.getWidth()/2,grabber.getHeight()/2,0));
	cam.begin();
	
	ofPushMatrix();
//	ofScale(mouseX, mouseX);
	grabber.getTextureReference().bind();
	mesh.drawVertices();
//	mesh.drawWireframe();
//	mesh.draw();
	grabber.getTextureReference().unbind();
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
