int switchState = 0;//to capture switch state

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);
  //reads the state of the pin 0;

  //control block
  if(switchState == HIGH)
  {
    digitalWrite(13, LOW);
    //if the state is high turn off LED
    
  }else
  {
    digitalWrite(13, HIGH);
    //if the state is low turn on LED
  }
    
}
