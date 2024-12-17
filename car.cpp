#define m1 2
#define m2 3
#define m3 4
#define m4 5



void setup() {
  // put your setup code here, to run once:
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
  //code for backward
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, LOW);
  delay(10000);


  //code for forward

  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  digitalWrite(m3, LOW);
  digitalWrite(m4, HIGH);
  delay(10000);

  //Code for left
  digitalWrite(m1, low);
  digitalWrite(m2, LOW);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, LOW);
  delay(10000);

  //code for right
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  digitalWrite(m3, LOW);
  digitalWrite(m4, LOW);
  delay(10000);
}
