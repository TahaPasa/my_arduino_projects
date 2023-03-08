void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0)); //kullanmadığımız bir port rastgele sayı veriyor. Sürekli değişen bu sayıları da seed e veriyoruz güzel bir rastgelelik oluşuyor böylelikle.

}

void loop() {
  int sayi = random(8,16);  //rastgele sayi verir
  Serial.println(sayi);
  delay(1000);
}
