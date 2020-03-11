// Lab02_2
// 使用陣列的跑馬燈程式
// 每個 LED 正極接到 Pin 0 - 7, 負極

const byte LEDs[] =
{2,3,4,5,8,9,10,11};
const byte total = sizeof(LEDs);
byte index = 0; 
int j;
void setup(){
// 將每個 Pin 設定成輸出
for (byte i=0;i<total;i++) {
pinMode(LEDs[i], OUTPUT);
}
}
void loop() {
for (index=0; index <= 7; index++) //

{ // 所有 LED OFF
for (byte i=0;i<total;i++) {
digitalWrite(LEDs[i], LOW);
}
digitalWrite(LEDs[index], HIGH);
delay(100);
}

for(j=0;j<2;j++)
{
  for(byte i = 0;i<total;i++)
  {
    digitalWrite(LEDs[i],HIGH);
    }
    delay(1000);
    for(byte i =0;i<total;i++)
    {
      digitalWrite(LEDs[i],LOW);
      }
     delay(1000);
}
for(index = 7;index>=0 ;index--)
{
  for(byte i=7;i>0;i--)
  {
    digitalWrite(LEDs[i],LOW);
    }
    digitalWrite(LEDs[index],HIGH);
    delay(100);
    
}
}
