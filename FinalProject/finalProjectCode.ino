#include <Servo.h>

//naming servos
  Servo myservo1;
  Servo myservo2;

//each servo motor will start at position 0
   int pos1 = 0;
   int pos2 = 0;

//declaring FSR pins and variables for reading their values
   int fsr1 = 0;
   int fsr1Reading;
   int fsr2 = 1;
   int fsr2Reading;

void setup() {
  Serial.begin(9600);
  //servos are in pins 9 and 10, and will start at position 0
    myservo1.attach(10);
    myservo1.write(0);
    myservo2.attach(9);
    myservo2.write(0);
}

void loop(){
  fsr1Reading = analogRead(fsr1);
  Serial.print("fsr1 = ");
  Serial.println(fsr1Reading);

  //when the user touches the first FSR, the first servo will move 15 degrees down and up
      if (fsr1Reading > 5) {
      for (pos1 = 0; pos1 <= 15; pos1 +=1) {
        myservo1.write(pos1);
        delay(15);
      } for (pos1 = 15; pos1 >= 0; pos1 -=1) {
        myservo1.write(pos1);
        delay(15);
      }
    }


  fsr2Reading = analogRead(fsr2);
  Serial.print("fsr2 = ");
  Serial.println(fsr2Reading);

  //when the user touches the second FSR, the second servo will move 15 degrees down and up
    if (fsr2Reading > 5) {
      for (pos2 = 0; pos2 <= 15; pos2 +=1) {
        myservo2.write(pos2);
        delay(15);
      } for (pos2 = 15; pos2 >= 0; pos2 -=1) {
        myservo2.write(pos2);
        delay(15);
      }
    }

}

