void setup() {
  Serial.begin(9600);
  pinMode(A1,INPUT); //ldr sensörü
  pinMode(8,OUTPUT);

}

void loop() {

  int deger = analogRead(A1);
  Serial.println(deger);
  delay(250);

  if(deger < 250)
  {
    Serial.println("yandi");
    digitalWrite(8,HIGH);
  }
  else
  {
    digitalWrite(8,LOW);
  }

  
  //deger = map(deger,0,1023,0,255);

}
