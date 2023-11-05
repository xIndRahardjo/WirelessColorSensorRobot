#include <Servo.h>
int p1;
int p2;
int p3;
int p4;

Servo s1;
Servo s2;
Servo s3;
Servo s4;

int sudut(int x){
 return map(x, 0, 1023, 0, 180);
}

void setup() {
  pinMode(A0, INPUT);
  s1.attach(9);
  
  pinMode(A1, INPUT);
  s2.attach(6);
  
  pinMode(A2, INPUT);
  s3.attach(5);
  
  pinMode(A3, INPUT);
  s4.attach(3);
}

void loop(){
  int nilai1 = analogRead(A0);
  int sudut1 = sudut(nilai1);
  
  int nilai2 = analogRead(A1);
  int sudut2 = sudut(nilai2);
  
  int nilai3 = analogRead(A2);
  int sudut3 = sudut(nilai3);
  
  int nilai4 = analogRead(A3);
  int sudut4 = sudut(nilai4);
  
  s1.write(sudut1);
  s2.write(sudut2);
  s3.write(sudut3);
  s4.write(sudut4);

}