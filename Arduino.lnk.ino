#define port 3

int nota[] = {262,294,330,349,392,440,494,523};


void setup() {
  Serial.begin(9600);
  pinMode(port,OUTPUT);

}

void loop() {
  //tone(port,400);
  //delay(250);
  //noTone(port);
  //delay(250);



  tone(port,nota[0]);
  delay(250);
  noTone(port);
  delay(250);
}
