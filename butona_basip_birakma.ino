void setup() {
  Serial.begin(9600);
  pinMode(9,INPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  
  int deger = digitalRead(9);
      //Pull up resistance olayı var burada bağlarken diggat et
  if(deger)
  {
    Serial.println("BASILDI");
    digitalWrite(11,HIGH);
    
  }
  else
  {
    Serial.println("BASILMADI");
    digitalWrite(11,LOW);
  }
}
