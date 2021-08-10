int a = 2;  //For displaying segment "a"
int b = 3;  //For displaying segment "b"
int c = 4;  //For displaying segment "c"
int d = 5;  //For displaying segment "d"
int e = 6;  //For displaying segment "e"
int f = 8;  //For displaying segment "f"
int g = 9;  //For displaying segment "g"
  void setup() {  
  pinMode(a, OUTPUT);  //A
  pinMode(b, OUTPUT);  //B
  pinMode(c, OUTPUT);  //C
  pinMode(d, OUTPUT);  //D
  pinMode(e, OUTPUT);  //E
  pinMode(f, OUTPUT);  //F
  pinMode(g, OUTPUT);  //G
}
void displayDigitb(int digit)
{
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
}
void displayDigito(int digit)
{
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
}
void displayDigits(int digit)
{
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
}
void displayDigitCLEAR(int digit)
{
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
}


void loop() {
   delay(500);
   displayDigitb(1);
   delay(250);
   displayDigitCLEAR(1);
   delay(250);
   displayDigito(1);
   delay(250);
   displayDigitCLEAR(1);
   delay(250);
   displayDigito(1);
   delay(250);
   displayDigitCLEAR(1);
   delay(250);
   displayDigitb(1);
   delay(250);
   displayDigitCLEAR(1);
   delay(250);
   displayDigits(1);
   delay(1000);

}
