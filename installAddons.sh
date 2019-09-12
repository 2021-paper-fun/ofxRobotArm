#!/bin/bash

# Dependencies for robotArmRepo
#make sure you are in the robotArmRepo project when you run this script

cd ../../addons

PREFIX="git clone http://github.com/"
${PREFIX}CreativeInquiry/ofxTiming
${PREFIX}kylemcdonald/ofxCV
${PREFIX}CreativeInquiry/ofxNatNet
${PREFIX}NickHardeman/ofxGizmo
${PREFIX}CreativeInquiry/ofxTimeline
${PREFIX}CreativeInquiry/ofxURDriver
${PREFIX}CreativeInquiry/ofxPtf
${PREFIX}CreativeInquiry/ofxIKArm

cd ../addons/ofxRobotArm
