int data;
void setup() 
{
  Serial.begin(9600); //initialize serial COM at 9600 baudrate
  pinMode(13, OUTPUT); //make the LED pin (13) as output
  digitalWrite (13, LOW);
  Serial.println("Hi!, I am Arduino");
}
void loop() 
{
  while (Serial.available()){
  data = Serial.read();
  }
  Serial.flush();  
  Serial.print(data);
  if (data == 49)
  {
    Serial.println("on");
    digitalWrite (13, HIGH);
    delay(1000);
  }    
  else if (data == 48)
  {
    Serial.println("on");
    digitalWrite (13, LOW);
    delay(1000);
  }
}
