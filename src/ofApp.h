#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    float rotate;
    
    ofxPanel gui;
    
    ofxIntSlider axisXfirst;
    ofxIntSlider axisXsecond;
    ofxIntSlider axisXthird;
    
    ofxFloatSlider pathTrail;
    
    ofxFloatSlider circleOneAlpha;
    ofxFloatSlider circleTwoAlpha;
    ofxFloatSlider circleThreeAlpha;
    
    ofxIntSlider resolutionCircle;
    ofxIntSlider speedCircle;
    ofxIntSlider lineWidth;
    
    ofxVec3Slider circleOneRgb;
    ofxVec3Slider circleTwoRgb;
    ofxVec3Slider circleThreeRgb;
    
    ofxVec3Slider rgbStrokes;
    
    ofxToggle noFillToggle;
};
