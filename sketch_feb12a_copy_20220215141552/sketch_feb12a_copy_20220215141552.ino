#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
#include <Servo.h>

Servo servo1;
Servo servo2;
Servo myServo1;
Servo myServo2;

const int flexPin1 = A0; 
const int flexPin2 = A2;
Adafruit_MPU6050 srituhobby;

void setup(void) {
  Serial.begin(115200);
  servo1.attach(3);
  servo2.attach(5);
  myServo1.attach(10);
  myServo2.attach(11);

  
  Wire.begin();
  srituhobby.begin();
  servo1.write(0);

  srituhobby.setAccelerometerRange(MPU6050_RANGE_8_G);//2_G,4_G,8_G,16_G
  srituhobby.setGyroRange(MPU6050_RANGE_500_DEG);//250,500,1000,2000
  srituhobby.setFilterBandwidth(MPU6050_BAND_21_HZ);

  delay(100);
}

void loop() {

int flexValue1;
  int flexValue2;
  int servoPosition1;
  int servoPosition2;
  
  /* Get new sensor events with the readings */
  sensors_event_t a, g, temp;
  srituhobby.getEvent(&a, &g, &temp);

  int valueY = a.acceleration.y;

  valueY = map(valueY,  -1, 10, 180, 0);
  servo1.write(valueY);  
  Serial.println("X=");
  Serial.println(valueY);





  srituhobby.getEvent(&a, &g, &temp);

  int valueX = a.acceleration.x;

  valueX = map(valueX,  -1, 10, 180, 0);
  servo2.write(valueX);  
  Serial.println("Y=");
  Serial.println(valueX);       



flexValue1 = analogRead(flexPin1);
  
  servoPosition1 = map(flexValue1, 800, 900, 0, 180);
  servoPosition1 = constrain(servoPosition1, 0, 180);

  myServo1.write(servoPosition1);
  
  delay(20);

  
  flexValue2 = analogRead(flexPin2);
  
  servoPosition2 = map(flexValue2, 800, 900, 0, 180);
  servoPosition2 = constrain(servoPosition2, 0, 180);

  myServo2.write(servoPosition2);
  
  delay(20);
 
}