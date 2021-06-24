int b1 =2; // Button

int count=0;

int ledi[7]=   {B000000,B000001,B000011,B000111,B001111,B011111,B111111,};
int ledd[7]=   {B000000,B100000,B110000,B111000,B111100,B111110,B111111,};
int ledb1[1]=   {B010101};
int ledb2[1]=   {B101010};
int pinmin=8, pinmax = 13;

void setup() {
  // put your setup code here, to run once:
for (pinmin;pinmin<=pinmax;pinmin++){pinMode(pinmin,OUTPUT);}
pinMode(b1,INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:

delay(50);
///// Increment /////
int x = digitalRead(b1);
if (x == HIGH){
  count++; if (count>3){count=0;}}
  
      if (count==0)  {PORTB=ledi[6];}
      if (count==1)  {PORTB=ledi[0];delay(50);PORTB=ledi[6];delay(50);}  
      if (count==2)  {for(int i = 0;i<=6; i++) {PORTB=ledi[i];delay(50);}}
      if (count==3)  {for(int i = 0;i<=6; i++) {PORTB=ledd[i];delay(50);}}         
}
