#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4,5, 6, 7);
#define kanan A1
#define kiri A2
#define pot A0
#define Ena 11
#define Enb 8
#define in1 10
#define in2 9
#define in3 12
#define in4 13
int read_ADC;
int duty_cycle;
int set=0;

void setup() {
Serial.begin(9600);  // put your setup code here, to run once:
pinMode(pot,INPUT);
pinMode(Ena,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);

lcd.begin(16,2);
lcd.setCursor(0,0);
lcd.print("Welcome to");
lcd.setCursor(0,1);
lcd.print("JELIA CHANNEL");
delay(2000);
lcd.clear();
}

void loop() {
read_ADC = analogRead(pot);// put your main code here, to run repeatedly:
duty_cycle = map(read_ADC,0,1023,0,100);
analogWrite(Ena,duty_cycle);

lcd.setCursor(0,0);
lcd.print("Duty Cycle: ");
lcd.print(duty_cycle);
lcd.print("% ");

if(digitalRead(kanan)==0)(set=1);
if(digitalRead(kiri)==0)(set=0);

lcd.setCursor(0,1);
if(set==0)(lcd.print)("  Kiri  ");
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
   digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW );
  
if(set==1)(lcd.print)("  Kanan ");
  digitalWrite(in1, HIGH);
  digitalWrite(in1, LOW);
   digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

delay((50));
}
