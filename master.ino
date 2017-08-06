int a[4];
int thd_0=490;
int thd_1=496;//middlefin
int thd_2=505;//forefin
int thd_3=503;//Mthumb
int thd_4=511;
int val=0;
void setup() {
Serial.begin(9600);
}

void loop() {//Serial.println(analogRead(A0));//delay(2000);Serial.println(analogRead(A1));delay(2000);Serial.println(analogRead(A2));delay(2000);
  val=0;
if(analogRead(A0)>thd_0)
  a[0]=1;
else a[0]=0;
if(analogRead(A1)>thd_1)
  a[1]=1;
else a[1]=0;
if(analogRead(A2)>thd_2)
  a[2]=1;
else a[2]=0;
if(analogRead(A3)>thd_3)
  a[3]=1;
else a[3]=0;
//if(analogRead(A4)>thd_4)
//  a[4]=1;
//else a[4]=0;
for(int i=0;i<4;i++)
{
  val+=pow(2,i)*a[i];
}
Serial.write(val);
delay(200);
}
