

#ifndef RobotArm_h
#define RobotArm_h

class JointSingle
{
public:
  JointSingle();
  bool active;
  float pos_deg;
private:
  float min_deg;
  int min_micro_s;
  float max_deg;
  int max_micro_s;
  Servo servo;

};

class JointDouble
{
public:
  JointDouble();
  bool active;
  float pos_deg;
private:
  float min_deg;
  int min_micro_s;
  float max_deg;
  int max_micro_s;
  Servo servoA;
  Servo servoB;
};

class RobotArm
{
public:
  RobotArm();
  void setup();
  JointSingle joint1;
  JointDouble joint2;
  JointSingle joint3;
  JointSingle joint4;
  JointSingle joint5;
  JointSingle joint6;
  
};

#endif

