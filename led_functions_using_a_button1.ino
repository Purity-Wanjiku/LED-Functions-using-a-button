int Red = 8;
int Button = 7;
void setup()
{
  pinMode(Button,INPUT);
  pinMode(Red, OUTPUT);
}

void loop(){
if (digitalRead(Button) == LOW)
 {digitalWrite(8, HIGH);
  }
 else{
   digitalWrite(8,LOW);
 }
}
//When the button is HIGH/ ON, turn on the LED,
//ELSE turn off the led when you DON'T press the button
