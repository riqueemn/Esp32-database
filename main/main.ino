#include <Arduino.h>

#define pin1 17
#define pin2 16
#define pin3 27

int i = 0;

void setup() {
  pinMode(pin1, INPUT_PULLUP);
  pinMode(pin2, INPUT_PULLUP);
  pinMode(pin3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //Serial.print("teste");
  if(digitalRead(pin1) == LOW && i < 255){
    i++;
    Serial.print(String(i) + "\n");
    analogWrite(pin3, i);
    delay(10);
  } else if(digitalRead(pin2) == LOW && i > 0){
    i--;
    Serial.print(String(i) + "\n");
    analogWrite(pin3, i);
    delay(10);
  }
}
