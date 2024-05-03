// Include the AccelStepper library:
#include "AccelStepper.h"

// Define stepper motor connections and motor interface type. 
// Motor interface type must be set to 1 when using a driver:
#define J1_DIR 13
#define J1_STEP 12

#define J2_DIR 14
#define J2_STEP 27

#define J3_DIR 26
#define J3_STEP 25

#define J4_DIR 33
#define J4_STEP 32

#define J5_DIR 35
#define J5_STEP 34

#define motorInterfaceType 1

// Create a new instance of the AccelStepper class:
AccelStepper j1_stepper;
AccelStepper j2_stepper;
AccelStepper j3_stepper;
AccelStepper j4_stepper;
AccelStepper j5_stepper;

void setup() {
  pinMode(J1_DIR, OUTPUT);
  pinMode(J1_STEP, OUTPUT);
  pinMode(J2_DIR, OUTPUT);
  pinMode(J2_STEP, OUTPUT);
  pinMode(J3_DIR, OUTPUT);
  pinMode(J3_STEP, OUTPUT);
  pinMode(J4_DIR, OUTPUT);
  pinMode(J4_STEP, OUTPUT);
  pinMode(J5_DIR, OUTPUT);
  pinMode(J5_STEP, OUTPUT);

  j1_stepper = AccelStepper(motorInterfaceType, J1_STEP, J1_DIR);
  j2_stepper = AccelStepper(motorInterfaceType, J2_STEP, J2_DIR);
  j3_stepper = AccelStepper(motorInterfaceType, J3_STEP, J3_DIR);
  j4_stepper = AccelStepper(motorInterfaceType, J4_STEP, J4_DIR);
  j5_stepper = AccelStepper(motorInterfaceType, J5_STEP, J5_DIR);
  
  // Set the maximum speed and acceleration:
  j1_stepper.setMaxSpeed(4000);
  j1_stepper.setAcceleration(3000);

  j2_stepper.setMaxSpeed(4000);
  j2_stepper.setAcceleration(3000);
  
  j3_stepper.setMaxSpeed(4000);
  j3_stepper.setAcceleration(3000);
  
  j4_stepper.setMaxSpeed(4000);
  j4_stepper.setAcceleration(3000);
  
  j5_stepper.setMaxSpeed(4000);
  j5_stepper.setAcceleration(3000);
}

void loop() {
  // Set the target position:
  j1_stepper.moveTo(2000);
  // Run to target position with set speed and acceleration/deceleration:
  j1_stepper.runToPosition();

  delay(1000);

  // Move back to zero:
  j1_stepper.moveTo(0);
  j1_stepper.runToPosition();

  delay(1000);



//  // Set the target position:
//  j2_stepper.moveTo(2000);
//  // Run to target position with set speed and acceleration/deceleration:
//  j2_stepper.runToPosition();
//
//  delay(1000);
//
//  // Move back to zero:
//  j2_stepper.moveTo(0);
//  j2_stepper.runToPosition();
//
//  delay(1000);
//
//
//  // Set the target position:
//  j3_stepper.moveTo(2000);
//  // Run to target position with set speed and acceleration/deceleration:
//  j3_stepper.runToPosition();
//
//  delay(1000);
//
//  // Move back to zero:
//  j3_stepper.moveTo(0);
//  j3_stepper.runToPosition();
//
//  delay(1000);
//
//
//
//
//  // Set the target position:
//  j4_stepper.moveTo(2000);
//  // Run to target position with set speed and acceleration/deceleration:
//  j4_stepper.runToPosition();
//
//  delay(1000);
//
//  // Move back to zero:
//  j4_stepper.moveTo(0);
//  j4_stepper.runToPosition();
//
//  delay(1000);
//
//
//
//  // Set the target position:
//  j5_stepper.moveTo(2000);
//  // Run to target position with set speed and acceleration/deceleration:
//  j5_stepper.runToPosition();
//
//  delay(1000);
//
//  // Move back to zero:
//  j5_stepper.moveTo(0);
//  j5_stepper.runToPosition();
//
//  delay(1000);
}
