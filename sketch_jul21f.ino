const int buttonPin = 2;
const int ledPin = 8;

void setup() {
 //pinMode(pin,Mode);
 pinMode(buttonPin,INPUT);
 pinMode(ledPin,OUTPUT);
}

void loop() {
int buttonState =
digitalRead(buttonPin);

if (buttonState == HIGH) {
  digitalWrite(ledPin,LOW);
  
  } else {
    digitalWrite(ledPin,HIGH);
  }
}
