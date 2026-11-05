#include "vex.h"
//ferocious matt was here
using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;
controller Cont;
//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:
motor frontLeft = motor(PORT4, ratio18_1, true);
motor frontRight = motor(PORT1, ratio6_1, false);
motor midLeft = motor(PORT5, ratio6_1, true);
motor midRight = motor(PORT2, ratio6_1, false);
motor rearLeft = motor(PORT6, ratio6_1, true);
motor rearRight = motor(PORT3, ratio6_1, false);
motor leftWinch = motor(PORT11, ratio18_1, true);
motor rightWinch = motor(PORT13, ratio18_1, false);
motor intake = motor(PORT12, ratio6_1, true);
motor_group lift = motor_group(leftWinch, rightWinch);


digital_out lightGrn = digital_out(Brain.ThreeWirePort.A);
digital_out lightRed = digital_out(Brain.ThreeWirePort.B);
digital_out pistonClaw = digital_out(Brain.ThreeWirePort.C);
digital_out pistonHinge = digital_out(Brain.ThreeWirePort.D);
void vexcodeInit( void ) {
  // nothing to initialize
}