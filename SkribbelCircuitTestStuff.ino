int mode = 2;
int maxmode = 2;
#define LED_ 8
#define TasterMode 11
#define Taster 10
#define Buzzer 9
int BuzzerTime = 1000;
int BuzzerTone = 1;
int LED_Brightness = 1;
int LED_Helligkeitsgeschwindigkeit = 5;
bool CountUp = true;

void setup() {
  pinMode(LED_, OUTPUT);
  pinMode(TasterMode, INPUT_PULLUP);
  pinMode(Taster, INPUT_PULLUP);
  pinMode(Buzzer, OUTPUT);
  Serial.begin(9600);
  for(int i = 0; i < 300; i++){
  analogWrite(LED_, i);
  delay(500);
  }
}

void loop() {
  if(mode > maxmode) {
    mode = 0;
  }
  switch(mode){
    case 1:
    if(digitalRead(Taster) == LOW) {
      BuzzerTone = random(100, 4000);
      tone(Buzzer, BuzzerTone);
      delay(BuzzerTime);
      noTone(Buzzer);
      Serial.print("Der Buzzer hat gebuzzt, mit dem Wert: ");
      Serial.print(BuzzerTone);
      Serial.println("!");
      delay(2000); }
    break;
    case 2:
      if(digitalRead(Taster) == LOW){
        Serial.print("Die Helligkeit ist: ");
        Serial.print(LED_Brightness);
        Serial.print(" und der Wert: ");
        if(CountUp == true) {
         Serial.println("steigt!");
         }else{
         Serial.println("sinkt!");
        }
        if(LED_Brightness >= 255  && CountUp == true) {
          CountUp = false;
        }else if(LED_Brightness <= 0 && CountUp == false){
          CountUp = true;
        }
        if(CountUp == true) {
          LED_Brightness += LED_Helligkeitsgeschwindigkeit;
        }else{
          LED_Brightness -= LED_Helligkeitsgeschwindigkeit;
        }
        analogWrite(LED_, LED_Brightness);
        delay(50);
      }
}
}
