#include<Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
 
void setup()
{
servo1.attach(3);
servo2.attach(5);
servo3.attach(10);
servo4.attach(11);

}

void loop()
{
servo1.write(90);
delay(500);
servo2.write(120);
delay(500);
servo3.write(150);
delay(500);
servo4.write(90);
delay(1000);
servo4.write(120);
delay(1000);
servo3.write(90);
delay(500);
servo2.write(90);
delay(500);
servo1.write(0);
delay(500);
servo2.write(120);
delay(500);
servo3.write(150);
delay(500);
servo4.write(90);
delay(1000);
servo4.write(120);
delay(1000);
servo3.write(150);
delay(500);
servo2.write(120);
delay(500);
servo1.write(90);
delay(500);
servo2.write(120);
delay(500);
servo3.write(150);
delay(500);
servo4.write(90);
delay(1000);
servo4.write(120);
delay(1000);
servo3.write(150);
delay(500);
servo2.write(120);
delay(500);
servo1.write(0);
delay(500);
servo2.write(120);
delay(500);
servo3.write(150);
delay(500);
servo4.write(90);
delay(1000);
servo4.write(120);
delay(1000);
servo3.write(150);
delay(500);
servo2.write(120);
delay(500);
servo1.write(0);
delay(500);

}
