int ledpin = 13;
int swtch = 3;
int flag=0;
int anainp= 2;
void setup() {
  // put your setup code here, to run once:

pinMode(ledpin,OUTPUT);
pinMode(anainp,INPUT);
pinMode(swtch,INPUT);
attachInterrupt(1,on_funct,RISING);
attachInterrupt(0,off_funct,FALLING);
}
void on_funct()
{
  //digitalWrite(ledpin,HIGH);
  flag=1;
}
void off_funct()
{
  flag=0;
  //digitalWrite(ledpin,LOW);
  /*int val=map(analogRead(anainp),1,1023,0,255);
  
  analogWrite(ledpin,val);*/
}
void loop() {
  // put your main code here, to run repeatedly:
  int flg=digitalRead(swtch);
  int val=map(analogRead(anainp),1,1023,0,255);
  if(flg==0)
  analogWrite(ledpin,val);
  else if(flg==1)
  {
    digitalWrite(ledpin,HIGH);
    delay(1000);
    digitalWrite(ledpin,LOW);
    delay(1000);
  }
}
