#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(0);
}

//--------------------------------------------------------------
void testApp::update(){
	ofLogNotice() << "number of points " << points.size();
}

//--------------------------------------------------------------
void testApp::draw(){
	
	//draw lines not shapes
	//also works for ofRect & ofCircle
	ofNoFill();
	ofSetLineWidth(3);
	//drawing with shapes
//	ofBeginShape();
//	for(int i = 0; i < points.size(); i++){
//		ofVertex(points[i]);
//	}
//	ofEndShape();
	
	ofPolyline line;
	line.addVertices(points);
	line.draw();
	
	//quick bezier example
	//not working just to show an example for Justin's question
//	ofPath path;
//	path.moveTo(ofVec2f(0,0));
//	path.bezierTo(<#const ofPoint &cp1#>, <#const ofPoint &cp2#>, <#const ofPoint &p#>)
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
	points.push_back( ofPoint(x,y) );
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
