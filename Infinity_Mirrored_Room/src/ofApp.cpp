#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0,0,0);
    ofSetBackgroundAuto(false);
    radiusMax = 2.4;
    
   
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSetFrameRate(40);
    radius = ofRandom(radiusMax);
    r = ofRandom(254,255);
    g = ofRandom(253,255);
    b = ofRandom(190,255);
    alpha = ofRandom(99,100);

//    ofSetColor(212,40,40);
//    ofFill();
//    ofCircle(240,530,240.1);
//    ofSetLineWidth(5);
//    ofSetColor(255,255,255);
//    ofNoFill();
//    ofCircle(240,530,240.1);
//    ofFill();
//    ofRect(100,450,300,300);
//    ofSetColor(212,40,40);
//    ofCircle(190,520,20);
//    ofCircle(300,520,20);

}

//--------------------------------------------------------------
void ofApp::draw(){
    //drawCircle(ofRandom(ofGetWidth()),ofRandom(ofGetHeight()));
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 'e'){
           drawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    }
    if(key == 'a'){
        drawCircle(ofRandom(ofGetWidth()), ofRandom(390,410));
    }
    if(key == 'b'){
        drawCircle(ofRandom(ofGetWidth()), ofRandom(370,430));
    }
    if(key == 'c'){
        drawCircle(ofRandom(ofGetWidth()), ofRandom(300,500));
    }
    if(key == 'd'){
        drawCircle(ofRandom(ofGetWidth()), ofRandom(200,600));
    }
    
 
//    if (key == 'a'){
//              drawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
//      }
//    if (key == 'b'){
//        drawCircle(ofRandom(ofGetWidth()), ofRandom(20));
//    }
//    if (key == 'c'){
//        drawCircle(ofRandom(ofGetWidth()), ofRandom(50));
//    }
//    if (key == 'd'){
//        drawCircle(ofRandom(ofGetWidth()), ofRandom(100));
//    }
//    if (key == 'e'){
//        drawCircle(ofRandom(ofGetWidth()), ofRandom(300));
//    }
//    if (key == 'f'){
//        drawCircle(ofRandom(ofGetWidth()), ofRandom(600));
//    }
//    
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
   
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    ofSetColor(255,255,255);
    ofCircle(mouseX,mouseY,1.7);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
     drawCircle(mouseX,mouseY);
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
//--------------------------------------------------------------
void ofApp::drawCircle(int x,int y){
    ofSetColor(r,g,b,alpha);
    ofCircle(x,y,radius);
 
    
}
