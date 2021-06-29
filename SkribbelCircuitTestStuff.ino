int mode = 2;
int maxmode = 2;
#define LED_ 8
#define TasterMode 11
#define Taster_0 10
#define Buzzer 9
#define Taster_1 8
#define Tone_1 100
#define Taster_2 7
#define Tone_2 500
#define Taster_3 6
#define Tone_3 1000
#define Taster_4 5
#define Tone_4 2000
#define Taster_5 4
#define Tone_5 3000

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
        if(LED_Brightness > 255) LED_Brightness = 255;
        else if(LED_Brightness < 0) LED_Brightness = 0;
        analogWrite(LED_, LED_Brightness);
        delay(50);
        break;
      case 3:
        if(digitalRead(Taster_1) == LOW) {
          BuzzerTone = Tone_1;
          tone(Buzzer, BuzzerTone);
          delay(BuzzerTime);
          noTone(Buzzer);
          Serial.print("Der Buzzer hat gebuzzt, mit dem Wert: ");
          Serial.print(BuzzerTone);
          Serial.println("!");
          delay(2000);
        }else if(digitalRead(Taster_2) == LOW) {
            BuzzerTone = Tone_2;
            tone(Buzzer, BuzzerTone);
            delay(BuzzerTime);
            noTone(Buzzer);
            Serial.print("Der Buzzer hat gebuzzt, mit dem Wert: ");
            Serial.print(BuzzerTone);
            Serial.println("!");
            delay(2000);
          }else if(digitalRead(Taster_3) == LOW) {
              BuzzerTone = Tone_3;
              tone(Buzzer, BuzzerTone);
              delay(BuzzerTime);
              noTone(Buzzer);
              Serial.print("Der Buzzer hat gebuzzt, mit dem Wert: ");
              Serial.print(BuzzerTone);
              Serial.println("!");
              delay(2000);
            }else if(digitalRead(Taster_4) == LOW) {
                BuzzerTone = Tone_4;
                tone(Buzzer, BuzzerTone);
                delay(BuzzerTime);
                noTone(Buzzer);
                Serial.print("Der Buzzer hat gebuzzt, mit dem Wert: ");
                Serial.print(BuzzerTone);
                Serial.println("!");
                delay(2000);
              }else{
                  BuzzerTone = Tone_5;
                  tone(Buzzer, BuzzerTone);
                  delay(BuzzerTime);
                  noTone(Buzzer);
                  Serial.print("Der Buzzer hat gebuzzt, mit dem Wert: ");
                  Serial.print(BuzzerTone);
                  Serial.println("!");
                  delay(2000);
      }
}
}
