#pragma once

//--------------------------------------------------------------
//
//
// Follow Path on Surface Example
//
//
//--------------------------------------------------------------

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxGizmo.h"
#include "UR5Controller.h"
#include "PathController.h"
#include "WorkSurface3D.h"
#include "RobotParameters.h"
#define N_CAMERAS 2

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
		
    ofxRobotArm::RobotParameters parameters;
    
        ofxGizmo gizmo;
        ofNode tcpNode;
    
        void setupViewports();
        void setupGUI();
        void positionGUI();
        void drawGUI();
    
        int sim, real;
    
        ofxPanel panel;
        ofxPanel panelJoints;
        ofxPanel panelTargetJoints;
        ofxPanel panelJointsIK;
        ofxPanel panelJointsSpeed;
        
        
         ofxRobotArm::UR5Controller robot;
        void moveArm();
    
         ofxRobotArm::PathController paths;
        ofxRobotArm::WorkSurface3D workSrf;
        ofPolyline buildToolpath(ofVec3f centroid);
    
        
        // 3D Navigation
        void updateActiveCamera();
        vector<ofEasyCam*> cams;
        ofRectangle viewportReal;
        ofRectangle viewportSim;
        vector<ofMatrix4x4> savedCamMats;
        vector<string> viewportLabels;
        int activeCam;
        
        /**
         Use hotkeys to cyle through preset viewports.
         @param key
             '1' = Top View      <br/>
             '2' = Left View     <br/>
             '3' = Front View    <br/>
             '4' = Perspective   <br/>
         */
        void handleViewportPresets(int key);
        
        /// Highlights the active viewport.
        void hightlightViewports();

};
