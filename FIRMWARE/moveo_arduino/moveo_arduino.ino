// Include the AccelStepper library:
#include "AccelStepper.h"

// Define stepper motor connections and motor interface type. 
// Motor interface type must be set to 1 when using a driver:
#define J1_DIR 9
#define J1_STEP 2

#define J2_DIR 10
#define J2_STEP 3

#define J3_DIR 11
#define J3_STEP 4

#define J4_DIR 12
#define J4_STEP 5

#define J5_DIR 13
#define J5_STEP 6

#define motorInterfaceType 1

// Create a new instance of the AccelStepper class:
AccelStepper j1_stepper = AccelStepper(motorInterfaceType, J1_STEP, J1_DIR);
AccelStepper j2_stepper = AccelStepper(motorInterfaceType, J2_STEP, J2_DIR);
AccelStepper j3_stepper = AccelStepper(motorInterfaceType, J3_STEP, J3_DIR);
AccelStepper j4_stepper = AccelStepper(motorInterfaceType, J4_STEP, J4_DIR);
AccelStepper j5_stepper = AccelStepper(motorInterfaceType, J5_STEP, J5_DIR);

void setup() {
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



  // Set the target position:
  j2_stepper.moveTo(2000);
  // Run to target position with set speed and acceleration/deceleration:
  j2_stepper.runToPosition();

  delay(1000);

  // Move back to zero:
  j2_stepper.moveTo(0);
  j2_stepper.runToPosition();

  delay(1000);


  // Set the target position:
  j3_stepper.moveTo(2000);
  // Run to target position with set speed and acceleration/deceleration:
  j3_stepper.runToPosition();

  delay(1000);

  // Move back to zero:
  j3_stepper.moveTo(0);
  j3_stepper.runToPosition();

  delay(1000);




  // Set the target position:
  j4_stepper.moveTo(2000);
  // Run to target position with set speed and acceleration/deceleration:
  j4_stepper.runToPosition();

  delay(1000);

  // Move back to zero:
  j4_stepper.moveTo(0);
  j4_stepper.runToPosition();

  delay(1000);



  // Set the target position:
  j5_stepper.moveTo(2000);
  // Run to target position with set speed and acceleration/deceleration:
  j5_stepper.runToPosition();

  delay(1000);

  // Move back to zero:
  j5_stepper.moveTo(0);
  j5_stepper.runToPosition();

  delay(1000);
}
