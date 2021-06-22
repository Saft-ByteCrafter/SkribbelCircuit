int mode = 2;
int maxmode = 2;
#define LED 12
#define TasterMode 11
#define Taster 10
#define Buzzer 9
int BuzzerTime = 1000;
int BuzzerTone = 1;
int LEDBrightness = 1;
int LEDHelligkeitsgeschwindigkeit = 5;
bool CountUp = true;

//code to test idk

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(TasterMode, INPUT_PULLUP);
  pinMode(Taster, INPUT_PULLUP);
  pinMode(Buzzer, OUTPUT);
  Serial.begin(9600);
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
        Serial.print(LEDBrightness);
        Serial.print(" und der Wert: ");
        if(CountUp == true) {
         Serial.print("steigt!");
         }else{
         Serial.print("sinkt!");
        }
        if(LEDBrightness >= 255  && CountUp == true) {
          CountUp = false;
        }else if(LEDBrightness <= 0 && CountUp == false){
          CountUp = true;
        }
        if(CountUp == true) {
          LEDBrightness += LEDHelligkeitsgeschwindigkeit;
        }else{
          LEDBrightness -= LEDHelligkeitsgeschwindigkeit;
        }
        analogWrite(LED, LEDBrightness);
        delay(50);
      }
}
}
