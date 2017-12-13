#include "ball.hpp"
ofPoint(point1);
ofPoint(point2);
ofPoint(point3);
ofPoint(point4);
ofPoint(point5);
ofPoint(point6);
Ball::Ball(){
}

void Ball::setup(){
    x = ofRandom(0, ofGetWidth());      // give some random positioning
    y = ofRandom(0, ofGetHeight());
    
    speedX = ofRandom(-2, 2);           // and random speed and direction
    speedY = ofRandom(-2, 2);
    
    dim =  ofRandom(20, 40);
    
    color.set(ofRandom(255),ofRandom(255),ofRandom(255)); // one way of defining digital color is by addressing its 3 components individually (Red, Green, Blue) in a value from 0-255, in this example we're setting each to a random value
}

void Ball::update(){
    if(x < 0 ){
        x = 0;
        speedX *= -1;
    } else if(x > ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1;
    }
    
    if(y < 0 ){
        y = 0;
        speedY *= -1;
    } else if(y > ofGetHeight()){
        y = ofGetHeight();
        speedY *= -1;
    }
    
    x+=speedX;
    y+=speedY;
}

void Ball::draw(){

    
    ofFill();
    ofSetColor(255);
    ofBeginShape();
    ofCurveVertex(x-3*dim, y+60);//0
    ofCurveVertex(x-2*dim, y+10);//1
    ofCurveVertex(x-dim, y-20);//2
    ofCurveVertex(x, y-dim);//3
    ofCurveVertex(x+dim, y-20);//4
    ofCurveVertex(x+dim+20, y+10);//5
    ofCurveVertex(x, y+dim);//6
    ofCurveVertex(x-2*dim, y+10);//1
    ofCurveVertex(x-50, y+60);//0
    ofEndShape();
    
    ofSetColor(51,51,53);
    ofNoFill();
    ofSetLineWidth(10);
    ofBeginShape();
    ofCurveVertex(x-3*dim, y+60);//0
    ofCurveVertex(x-2*dim, y+10);//1
    ofCurveVertex(x-dim, y-20);//2
    ofCurveVertex(x, y-dim);//3
    ofCurveVertex(x+dim, y-20);//4
    ofCurveVertex(x+dim+20, y+10);//5
    ofCurveVertex(x, y+dim);//6
    ofCurveVertex(x-2*dim, y+10);//1
    ofCurveVertex(x-50, y+60);//0
    ofEndShape();
    
    
    ofSetColor(255);
    ofFill();
    ofDrawCircle(x, y, dim);
    ofDrawCircle(x, y, dim/2);
    
    
    ofSetColor(51,51,53);
    ofNoFill();
    ofDrawCircle(x, y, dim);
    ofDrawCircle(x, y, dim/2);
    
//    ///////
//    ofSetColor(51,51,53);
//    ofSetLineWidth(4);
//    ofNoFill();
//    ofBeginShape();
//    ofVertex(x-2*dim+5, y+10);//1
//    ofVertex(x-2*dim-5, y+10+30);//1
//    ofEndShape();
//
//    ofBeginShape();
//    ofVertex(x-2*dim+30, y+10);//1
//    ofVertex(x-2*dim+25, y+10+30);//1
//    ofEndShape();
//
//    ofBeginShape();
//    ofVertex(x-2*dim+20, y+10);//1
//    ofVertex(x-2*dim+20, y+10+30);//1
//    ofEndShape();





    
    
   
    


    

    


    




    
    
}
