#include "ofApp.h"
#include "ball.hpp"

#define NBALLS 30




Ball myBall[NBALLS];
int eyeX;
int eyeY;
int a;




//--------------------------------------------------------------
void ofApp::setup(){

    for(int i=0; i<NBALLS; i++){
        myBall[i].setup();
        distances.push_back(ofPoint(0,0));
    }
    color.set(249, 196, 51);

        ofBackground(color);
    
   
    
    

    

    

    

    }



//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0; i<NBALLS; i++){
        myBall[i].update();
        
        distances[i] = ofPoint(ofGetMouseX(), ofGetMouseY()) - ofPoint(myBall[i].x, myBall[i].y);
        
        
        if(distances[i].length()<150){
            myBall[i].x += -distances[i].normalize().x*8;
            myBall[i].y += -distances[i].normalize().y*8;
        }
        

        
        
        
//        if(distances[i].length()>100){
//            ofBackground(249, 196, 51);
//        }
    }
   
    }
 
    
//    cout << distance.length() << endl;
  


//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(249, 196, 51);
    
    ofSetColor(0);
    
    for(int i=0; i<NBALLS; i++){
    if(distances[i].length()<1.001){
        ofBackground(234, 37, 80);
        ///////////
        for(int r =0; r<5; r++){
        ofNoFill();
        ofBeginShape();
        ofSetColor(255);
        ofSetLineWidth(2);
        for (int i = 0; i < 2000; i++){
            float x = i;
            float noise = ofNoise(i/10.0);
            float y = ofMap(noise, 0,1, 0+r*150, 100+r*150);
            ofVertex(x,y);
        }
        ofEndShape();
        ////////////
    }
    }
    
    for(int i=0; i<NBALLS; i++){
        myBall[i].draw();
    }
    
    ofSetColor(255, 255, 255);
//    ofDrawCircle(eyeX, eyeY, 50);
        ofNoFill();
        ofBeginShape();
        ofCurveVertex(eyeX-3*30, eyeY+60);//0
        ofCurveVertex(eyeX-2*30, eyeY+10);//1
        ofCurveVertex(eyeX-30, eyeY-20);//2
        ofCurveVertex(eyeX,eyeY-30);//3
        ofCurveVertex(eyeX+30, eyeY-20);//4
        ofCurveVertex(eyeX+30+20, eyeY+10);//5
        ofCurveVertex(eyeX, eyeY+30);//6
        ofCurveVertex(eyeX-2*30, eyeY+10);//1
        ofCurveVertex(eyeX-50, eyeY+60);//0
        ofEndShape();
        
 
        ofDrawCircle(eyeX, eyeY, 30);
        ofDrawCircle(eyeX, eyeY, 15);
    
    ////////////
}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    eyeX = x;
    eyeY = y;
    int dim =30;
    
    
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
