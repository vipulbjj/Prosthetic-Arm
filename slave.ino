#include<Servo.h>
Servo servo_0;
Servo servo_1;
Servo servo_2;
Servo servo_3;
//Servo servo_4;
int pos=0;
int arr[2];
//int servo_pos=0;
void setup() {
  // put your setup code here, to run once:
//pinMode(13,OUTPUT);
//pinMode(12,OUTPUT);
servo_0.attach(8);
servo_1.attach(9);
servo_2.attach(10);
servo_3.attach(11);
//servo_4.attach(12);
Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:
while(Serial.available()>0){
  pos=Serial.read();
  for(int i=0;i<5;i++)
  {
    arr[i]=pos%2;
    pos=pos/2;
  }
    if(arr[0]==1)
     servo_0.write(180);
    else
    servo_0.write(0);
   if(arr[1]==1)
     servo_1.write(180);
    else 
    servo_1.write(0);
    if(arr[2]==1)
     servo_2.write(180);
    else
    servo_2.write(0);
    if(arr[3]==1)
     servo_3.write(180);
    else
    servo_3.write(0);
  //  if(arr[4]==1)
    // servo_4.write(180);
    //else 
    //servo_4.write(0); 
}
delay(100);

