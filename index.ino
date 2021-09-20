int buzzer=7;
int potpin=A0;
int deger=0,frekans=0;
void setup() {
 pinMode(buzzer,OUTPUT);
 pinMode(potpin,INPUT);
}
void loop() {
 deger=analogRead(potpin);
 frekans=map(deger,0,1023,30,900); 
/*potansyometreden okunan
 0-1023 arası değeri 30-900 arası 
frekansa dönüştür*/
 tone(buzzer,frekans);
}