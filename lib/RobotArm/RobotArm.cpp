

#include <avr/interrupt.h>
#include <Arduino.h>
#include <Servo.h>
#include "RobotArm.h"

JointSingle::JointSingle()
{
    
}

JointDouble::JointDouble()
{

}

RobotArm::RobotArm()
{

}

void RobotArm::setup()
{
    this->joint1 = JointSingle();
    this->joint2 = JointDouble();
    this->joint3 = JointSingle();
    this->joint4 = JointSingle();
    this->joint5 = JointSingle();
    this->joint6 = JointSingle();
    // name     min max
    // servo1   0   180
    // servo2   0   115
    // servo2b   
    // servo3   0   105
    // servo4   0   180
    // servo5   0   170
    // servo6   0   180

}


