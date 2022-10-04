#include <Servo.h>

Servo servo1;
Servo servo2; 
Servo servo3; 
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;

int incomingByte;

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
//  servo1.attach(10);
//  servo3.attach(
//  servo2.attach(8);11);
//  servo4.attach(9);
}

void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();

    // Locker no.1
    if (incomingByte == '1') {    // lock
      servo1.attach(10);
      servo1.write(90);
    }
    
    if (incomingByte == '2') {    // unlock
      servo1.attach(10);
      servo1.write(0);
    }

    // Locker no.2
    if (incomingByte == '3') {    // lock
      servo2.attach(8);
      servo2.write(0);
    }
    
    if (incomingByte == '4') {    // unlock
      servo2.attach(8);
      servo2.write(90);
    }

    // Locker no.3
    if (incomingByte == '5') {    // lock
      servo3.attach(11);
      servo3.write(0);
    }
    
    if (incomingByte == '6') {    // unlock
      servo3.attach(11);
      servo3.write(90);
    }

    // Locker no.4
    if (incomingByte == '7') {    //lock
      servo4.attach(9);
      servo4.write(90);
    }
    
    if (incomingByte == '8') {    // unlock
      servo4.attach(9);
      servo4.write(0);
    }

    // Locker no.5
    if (incomingByte == 'A') {    //lock
      servo5.attach(6);
      servo5.write(90);
    }
    
    if (incomingByte == 'E') {    // unlock
      servo5.attach(6);
      servo5.write(0);
    }

    // Locker no.6
    if (incomingByte == 'B') {    //lock
      servo6.attach(4);
      servo6.write(0);
    }
    
    if (incomingByte == 'F') {    // unlock
      servo6.attach(4);
      servo6.write(90);
    }

    // Locker no.7
    if (incomingByte == 'C') {    //lock
      servo7.attach(7);
      servo7.write(0);
    }
    
    if (incomingByte == 'G') {    // unlock
      servo7.attach(7);
      servo7.write(90);
    }

    // Locker no.8
    if (incomingByte == 'D') {    //lock
      servo8.attach(5);
      servo8.write(90);
    }
    
    if (incomingByte == 'H') {    // unlock
      servo8.attach(5);
      servo8.write(0);
    }
  }
}
