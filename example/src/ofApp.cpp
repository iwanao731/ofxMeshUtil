#include "ofApp.h"	

ofPoint p1, p2, p3;
ofPoint p0;
ofPoint pc;

float closest;
//--------------------------------------------------------------
void ofApp::setup(){
	p1.set(-200, -200, 0.0);
	p2.set(200, -200, 0.0);
	p3.set(0, 300, 0.0);	
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofBackground(0);

	cam.begin();
	ofNoFill();
	ofTriangle(p1,p2,p3);
	
	ofCircle(pc, 2);
	ofLine(p0, pc);
	ofCircle(p0, 2);
	ofDrawBitmapString(ofToString(closest), ofxMeshUtil::midpoint_of_edge(p0, pc)+ofVec3f(20,0,0));

	cam.end();

	ofDrawBitmapString("r: random point", 20, 20, 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	switch (key)
	{
		case 'r':
			p0 = ofVec3f(ofRandom(-300, 300), ofRandom(-300, 300), ofRandom(-200, 400));
			closest = ofxMeshUtil::point_triangle_distance(p0, p1, p2, p3, pc);
			break;
		case 'f':
			ofToggleFullscreen();
			break;
	default:
		break;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
