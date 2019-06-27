int led = 9;
int button = 12;
void setup() {
  // put your setup code here, to run once:
pinMode (button, INPUT);
pinMode (led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int pushed = digitalRead(button);
if (pushed == LOW)
{
 digitalWrite(led, HIGH);
}
else
{
digitalWrite(led,LOW);}
}
