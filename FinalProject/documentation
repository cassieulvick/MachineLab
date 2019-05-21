Final Project Documentation

Overall Concept/Description:
My final project involves the concept of finger drumming. I wanted to turn the act of drumming your fingers, such as on a table, into a physical instrument - when the user drums each of their fingers, individual "actual" drums will be played.

Demo Video:
https://youtu.be/ZwqEvP2Jsmc

Overall Picture:
![](images/overall.JPG)

Schematic:

List of important parts:
- 4 servo motors
- 4 FSRs
- 4 "drums" (empty cans with the opening face taped closed tightly with masking tape)
- 2 Arduino Unos + 2 motor shields (each held 2 servo motors and 2 FSRs)

Pictures of electronics:
![](images/electronics1.JPG)
![](images/electronics2.JPG)

Code:
This same code was uploaded to each Arduino Uno:
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


How it works:


How I built it:

Problems:
