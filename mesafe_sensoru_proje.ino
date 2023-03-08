
#define trig 9
#define echo 10
#define buzzer 6


int mesafe;
int sure;
long unsigned zaman = 0;
long unsigned eskizaman = 0;
boolean dut = false;

void setup() {

  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(buzzer,OUTPUT);

}

void loop() {
  Serial.println(mesafeBul());
  zaman = millis();
  //delay(250);

  if(mesafeBul() >40 || mesafeBul() <25)
  {
    
    
    if(zaman-eskizaman > 250)
    {
      if(dut == false)
      {
        tone(buzzer,200);
        dut = true;
      }
      else
      {
        noTone(buzzer);
        delay(75);
        dut = false;
      }
      eskizaman = zaman;
      
    }
  }
  else
  {s
    noTone(buzzer);
  }


  /////////////////ESKI KOD////////////
  /*
  if(mesafeBul() >40)
  {
    //Serial.println("düt");
    tone(buzzer,200);
    delay(250);
    noTone(buzzer);
    delay(75);
  }
  else
  { 
    noTone(buzzer);
  }
  */
  /////////////////////////////////////


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
