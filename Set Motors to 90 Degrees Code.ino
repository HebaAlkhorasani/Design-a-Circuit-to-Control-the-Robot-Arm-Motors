// C++ code
//
#include <Servo.h>

int Base = 0;

int Shoulder = 0;

int Elbow = 0;

int Waist = 0;

int Gripper = 0;

Servo servo_11;

Servo servo_10;

Servo servo_9;

Servo servo_6;

Servo servo_5;

void setup()
{
  servo_11.attach(11, 500, 2500);

  servo_10.attach(10, 500, 2500);

  servo_9.attach(9, 500, 2500);

  servo_6.attach(6, 500, 2500);

  servo_5.attach(5, 500, 2500);

}

void loop()
{
  Base = 90;
  servo_11.write(Base);
  Shoulder = 90;
  servo_10.write(Shoulder);
  Elbow = 90;
  servo_9.write(Elbow);
  Waist = 90;
  servo_6.write(Waist);
  Gripper = 90;
  servo_5.write(Gripper);
  delay(10); // Delay a little bit to improve simulation performance
}