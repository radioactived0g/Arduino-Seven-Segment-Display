byte seven_seg_digits[10][7]={{0,1,0,0,0,0,0}, //0
                              {1,1,0,1,0,1,1}, //1
                              {0,0,1,0,0,0,1}, //2
                              {0,0,0,1,0,0,1}, //3
                              {1,0,0,1,0,1,0}, //4
                              {0,0,0,1,1,0,0}, //5
                              {0,0,0,0,1,0,0}, //6
                              {1,1,0,1,0,0,1}, //7
                              {0,0,0,0,0,0,0}, //8
                              {0,0,0,1,0,0,0}}; //9
// bottom mid bottomright bottomleft upperright top upperleft
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  sevenSegWrite(0);
}

void sevenSegWrite(byte digit) {
  byte pin = 2;
  for (byte segCount =0; segCount < 7; ++segCount) {
      digitalWrite(pin, seven_seg_digits[digit][segCount]);
      ++pin;
  }
}


void loop() {
  // put your main code here, to run repeatedly:
  for (byte count = 10; count > 0; -- count ) {
    delay (1000);
    sevenSegWrite(count - 1);
  }
  delay (3000);
}
