//YARADAN RABBİNİN ADIYLA OKU!!!

#define potpin A0
int deger =0;
float gerilim;
void setup() {
Serial.begin(9600);
Serial.println("Rümeysa Serial Okuyor");

}

void loop() {
deger = analogRead(potpin);
Serial.println("Deger");
delay(100);
Serial.println(deger);
delay(1000);
gerilim = ((5.00/1024.00)*deger);
Serial.println("Gerilim");
delay(100);
Serial.println(gerilim);
delay(1000);
}
