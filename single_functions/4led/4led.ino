int a = 2;  //For displaying segment "a"
int b = 3;  //For displaying segment "b"
int c = 4;  //For displaying segment "c"
int d = 5;  //For displaying segment "d"
  void setup() {  
  pinMode(a, OUTPUT);  //A
  pinMode(b, OUTPUT);  //B
  pinMode(c, OUTPUT);  //C
  pinMode(d, OUTPUT);  //D

}
void displayDigitb(int digit)
{
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
}
void displayDigito(int digit)
{
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
}
void displayDigits(int digit)
{
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
}
void displayDigitclear(int digit)
{
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
}


void loop() {
   displayDigitb(1);
   delay(150);
   displayDigito(1);
   delay(150);
   displayDigits(1);
   delay(150);
   displayDigitclear(1);
   delay(150);
   displayDigits(1);
   delay(150);
   displayDigito(1);
   delay(150);
   displayDigitb(1);
   delay(150);

}
