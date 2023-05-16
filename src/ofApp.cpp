#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    gui.setup();
    
    gui.add(axisXfirst.setup("axisXfirst", ofGetWidth() / 2, 0, ofGetWidth()));
    gui.add(axisXsecond.setup("axisXsecond", ofGetWidth() / 4, 0, ofGetWidth()));
    gui.add(axisXthird.setup("axisXthird", ofGetWidth() / 2 + ofGetWidth() / 4, 0, ofGetWidth()));
    
    gui.add(pathTrail.setup("pathTrail", 3, 0, 20));
    gui.add(circleOneAlpha.setup("circleOneAlpha", 100, 0, 255));
    gui.add(circleTwoAlpha.setup("circleTwoAlpha", 100, 0, 255));
    gui.add(circleThreeAlpha.setup("circleThreeAlpha", 100, 0, 255));
    
    gui.add(resolutionCircle.setup("resolutionCircle", 3, 0, 10));
    
    gui.add(circleOneRgb.setup("circleOneRgb", ofVec3f(255,0,0), ofVec3f(0, 0, 0), ofVec3f(255, 255, 255)));
    gui.add(circleTwoRgb.setup("circleTwoRgb", ofVec3f(255,255,255), ofVec3f(0, 0, 0), ofVec3f(255, 255, 255)));
    gui.add(circleThreeRgb.setup("circleThreeRgb", ofVec3f(0,0,255), ofVec3f(0, 0, 0), ofVec3f(255, 255, 255)));
    
    
    gui.add(rgbStrokes.setup("rgbStrokes", ofVec3f(255, 255, 255), ofVec3f(0, 0, 0), ofVec3f(255, 255, 255)));
    
    gui.add(speedCircle.setup("speedCircle", 1, 0, 10));
    gui.add(lineWidth.setup("lineWidth", 3, 0, 10));
    
    gui.add(noFillToggle.setup("noFillToggle", false));
    
    ofSetBackgroundAuto(false);
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofSetFrameRate(60);
    rotate += speedCircle;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofPushView();
    gui.draw();
    ofPopView();
    
    if (noFillToggle == false) {
        ofNoFill();
    } else if (noFillToggle == true) {
        ofFill();
    }
    
    ofSetLineWidth(lineWidth);
    
    ofSetColor(0, pathTrail);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    
    //FIRST ELEMENT
    
    ofPushView();
    ofTranslate(axisXfirst, ofMap(sin(ofGetElapsedTimef() * 0.6), -1, 1, 0, ofGetHeight()));
    ofRotateZDeg(rotate);
    
    ofFill();
    ofSetColor(circleOneRgb->x, circleOneRgb->y, circleOneRgb->z, circleOneAlpha);
    ofDrawCircle(0, 0, 100);
    
    ofNoFill();
    ofSetColor(rgbStrokes->x, 100);
    ofDrawCircle(0, 0, 100);
    
    ofSetCircleResolution(resolutionCircle);
    ofPopView();
    
    //SECOND ELEMENT
    ofPushView();
    ofTranslate(axisXsecond, ofMap(sin(ofGetElapsedTimef() * 0.6), -1, 1, 0, ofGetHeight()));
    ofRotateZDeg(rotate);
    
    ofFill();
    ofSetColor(circleTwoRgb->x, circleTwoRgb->y, circleTwoRgb->z, circleTwoAlpha);
    ofDrawCircle(0, 0, 100);
    
    ofNoFill();
    ofSetColor(rgbStrokes->y, 100);
    ofDrawCircle(0, 0, 100);
    
    ofSetCircleResolution(resolutionCircle);
    ofPopView();
    
    //THIRD ELEMENT
    
    ofPushView();
    ofTranslate(axisXthird, ofMap(sin(ofGetElapsedTimef() * 0.6), -1, 1, 0, ofGetHeight()));
    ofRotateZDeg(rotate);
    
    ofFill();
    ofSetColor(circleThreeRgb->x, circleThreeRgb->y, circleThreeRgb->z, circleTwoAlpha);
    ofDrawCircle(0, 0, 100);
    
    ofNoFill();
    ofSetColor(rgbStrokes->z, 100);
    ofDrawCircle(0, 0, 100);
    
    ofSetCircleResolution(resolutionCircle);
    ofPopView();
    
    
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
