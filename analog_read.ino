void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(6,OUTPUT);
}

void loop() {


//analog write şu değerleri alır: 0-255
//analog read ise şunları alabilir: 0-1023

  Serial.println(analogRead(A0));

  int deger = analogRead(A0);

  deger = map(deger,0,1023,0,255); // degeri alır. hali hazırdaki aralığı alır. çevirilmesini istediğimiz aralığı alır.
  
  if(analogRead(A0))
  {
    analogWrite(6,deger);
  }

}
