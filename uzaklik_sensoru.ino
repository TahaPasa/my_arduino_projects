#define trig 9
#define echo 10

int mesafe;
int sure;


void setup() {
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);

}

void loop() {
  Serial.println(mesafeBul());
  delay(250);

}

int mesafeBul()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  sure = pulseIn(echo,HIGH);
  mesafe = (sure/2)/29.1;
  return mesafe;
}
