using namespace vex;

extern brain Brain;
extern controller Cont;
extern motor frontLeft;
extern motor frontRight;
extern motor midLeft;
extern motor midRight;
extern motor rearLeft;
extern motor rearRight;
extern motor leftWinch;
extern motor rightWinch;
extern motor intake;
extern motor_group lift;

extern digital_out lightGrn;
extern digital_out lightRed;
extern digital_out pistonClaw;
extern digital_out pistonHinge;
//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:



void  vexcodeInit( void );