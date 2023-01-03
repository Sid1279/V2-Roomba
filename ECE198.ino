#include <Servo.h>

const int Lmotor[2] = {11,10};
const int Rmotor[2] = {14,12};

Servo Lservo;
Servo Rservo;
const int Lservopin = 3;
const int Rservopin = 5;

const int trig = 9;
const int echo = 6;
float distance, duration;


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(Lmotor[0], OUTPUT);
  pinMode(Lmotor[1], OUTPUT);
  pinMode(Rmotor[0], OUTPUT);
  pinMode(Rmotor[1], OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  Lservo.attach(Lservopin);
  Rservo.attach(Rservopin);
  Serial.begin(9600);


  //code begins
  Lservo.write(0);
  Rservo.write(0);

  for(int position = 0; position <= 180; position += 5){
    Lservo.write(position);
    Rservo.write(position);
    delay(100);
    }

  for(int position = 180; position >= 0; position -= 5){
    Lservo.write(position);
    Rservo.write(position);
    delay(100);
    }
  

  //both forward
  analogWrite(Lmotor[0], 0);
  analogWrite(Lmotor[1], 255);
  analogWrite(Rmotor[0], 0);
  analogWrite(Rmotor[1],255);
  delay(5000);

  //delay 1s
  analogWrite(Lmotor[0], 0);
  analogWrite(Lmotor[1], 0);
  analogWrite(Rmotor[0], 0);
  analogWrite(Rmotor[1], 0);
  delay(5000);
  
  //both backward
  analogWrite(Lmotor[0], 255);
  analogWrite(Lmotor[1], 0);
  analogWrite(Rmotor[0], 255);
  analogWrite(Rmotor[1], 0);
  delay(5000);

  //delay 1s
  analogWrite(Lmotor[0], 0);
  analogWrite(Lmotor[1], 0);
  analogWrite(Rmotor[0], 0);
  analogWrite(Rmotor[1], 0);
  delay(5000);

  //right forward, left backward (left turn)
  analogWrite(Lmotor[0], 255);
  analogWrite(Lmotor[1], 0);
  analogWrite(Rmotor[0], 0);
  analogWrite(Rmotor[1],255);
  delay(5000);

  //delay 1s
  analogWrite(Lmotor[0], 0);
  analogWrite(Lmotor[1], 0);
  analogWrite(Rmotor[0], 0);
  analogWrite(Rmotor[1], 0);
  delay(5000);

  //right backward, left forward (right turn)
  analogWrite(Lmotor[0], 0);
  analogWrite(Lmotor[1], 255);
  analogWrite(Rmotor[0], 255);
  analogWrite(Rmotor[1],0);
  delay(5000);
  

  analogWrite(Lmotor[0], 0);
  analogWrite(Lmotor[1], 0);
  analogWrite(Rmotor[0], 0);
  analogWrite(Rmotor[1], 0);
}

void loop() {
  /************ Start US Measurement Section ***********/
  digitalWrite(trig, LOW);
  delay(2);
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = duration * 0.034/2;
  /************** End US Measurement Section ***********/
  Serial.println(distance);

  if(distance <= 7){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(300);
    digitalWrite(LED_BUILTIN, LOW);
    delay(300);
  }

}
