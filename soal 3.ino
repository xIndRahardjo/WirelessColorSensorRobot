#define p1 A0
#define p2 A1
#define p3 A2
#define r 11
#define b 10
#define g 9

int change(int x){
	return map(x, 0, 1023, 0, 255);
}

void setup(){
}

void loop(){
  int nilai1 = analogRead(A0);
  int warna1 = change(nilai1);
  
  int nilai2 = analogRead(A1);
  int warna2 = change(nilai2);
  
  int nilai3 = analogRead(A2);
  int warna3 = change(nilai3);
  
  
  analogWrite(11, warna1);
  analogWrite(10, warna2);
  analogWrite(9, warna3);
  
}