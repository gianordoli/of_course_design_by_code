#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    letterSpacing = 1;
    lineHeight = 1;
    spaceSize = 1;
    
//	ofTrueTypeFont::setGlobalDpi(72);
    titlingBold.setLetterSpacing(letterSpacing);
    titlingBold.setLineHeight(lineHeight);
    titlingBold.setSpaceSize(spaceSize);
    titlingBold.loadFont("TitliGotFBComBol", 120);
    
    titlingLight.setLetterSpacing(letterSpacing*2);
    titlingLight.setLineHeight(lineHeight*2);
    titlingLight.setSpaceSize(spaceSize*2);
    titlingLight.loadFont("TitliGotFBConLig", 120);

}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    
    ofSetColor(255);
    titlingBold.drawString("Hello,\nWorld", 20,  ofGetHeight()*0.5);
    titlingLight.drawString("Hello,\nWorld", ofGetWidth()*0.5,  ofGetHeight()*0.5);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
