#include <Servo.h>
Servo servoMotor;
Servo servoMotor2;
int potPos;

void setup() {
  servoMotor.attach(0);
}
void loop () {
  potPos = map(analogRead(A0), 0, 1023, 0, 180);
  servoMotor.write(potPos);
  delay(15);
}