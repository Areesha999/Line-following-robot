#include <AFMotor.h>
int a =65;
AF_DCMotor right_motor1(1); 
AF_DCMotor right_motor2(2); 
AF_DCMotor left_motor3(3);
AF_DCMotor left_motor4(4);
int LS = 24;
int RS = 52;
//#define LS (24);
//#define RS (52);

void setup() {
  pinMode(RS,INPUT);
  pinMode(LS,INPUT);
  right_motor1.setSpeed(200);
  right_motor1.run(RELEASE);

  right_motor2.setSpeed(200);
  right_motor2.run(RELEASE);

  left_motor3.setSpeed(200);
  left_motor3.run(RELEASE);

  left_motor4.setSpeed(200);
  left_motor4.run(RELEASE);  

  Serial.begin(9600);
}

void loop() {
 //Move Forward

 if(digitalRead(LS)==0 &&digitalRead(RS)==0) // Move Forward
  {

  right_motor1.setSpeed(a);
  right_motor2.setSpeed(a);
  left_motor3.setSpeed(a);
  left_motor4.setSpeed(a);

  
  right_motor1.run(FORWARD);
  

  right_motor2.run(FORWARD);
  

 left_motor3.run(FORWARD);
 

  left_motor4.run(FORWARD);
 
  }
  //Move Right
 if(digitalRead(LS)==0 &&digitalRead(RS)==1) 
  
 {
  right_motor1.run(BACKWARD);
   right_motor1.setSpeed(a);
     right_motor2.run(BACKWARD);
   right_motor2.setSpeed(a);


  left_motor3.run(FORWARD);
  left_motor3.setSpeed(a);

    left_motor4.run(FORWARD);
  left_motor4.setSpeed(a);
 }
   //Move Left
   if(digitalRead(LS)==1 &&digitalRead(RS)==0) 
   {
  right_motor1.run(FORWARD);
  right_motor1.setSpeed(a);

    right_motor2.run(FORWARD);
  right_motor2.setSpeed(a);


  left_motor3.run(BACKWARD);
  left_motor3.setSpeed(a);

  
  left_motor4.run(BACKWARD);
  left_motor4.setSpeed(a);
left_motor4.setSpeed(a);
   }

      //stop
   if(digitalRead(LS)==1 &&digitalRead(RS)==1) 
   {
  right_motor1.run(FORWARD);
  right_motor1.setSpeed(0);

    right_motor2.run(FORWARD);
  right_motor2.setSpeed(0);


  left_motor3.run(FORWARD);
  left_motor3.setSpeed(0);

  
  left_motor4.run(FORWARD);
  left_motor4.setSpeed(0);
  
   }

 
}
