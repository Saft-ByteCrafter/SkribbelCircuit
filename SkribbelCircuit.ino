int task = 0;
bool newTask = true;
String Str = (char)10 + "" + (char)10;
#define ledPin 12 //TODO we can change that pot though
#define textDelay 500


void setup(){
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
  delay(3000);
  Serial.println("Hello and welcome to Scribble-Circuit!");
  delay(textDelay);
  Serial.println("Here you can draw your own electric Circuits on paper!");
  delay(textDelay);
  Serial.println("Just draw thick lines with the pen on a paper");
  Serial.println("and put the right components on it.");
  delay(textDelay);
  Serial.println("Lastly, put the cables into the Arduino.");
  delay(textDelay);
  Serial.println("Let's start now, shall we?");
  delay(textDelay);
  Serial.println();
  Serial.println();
}

void loop(){

  switch (task) {
    case 0: {
      //port-setup if neccessary
      Serial.println("First,  connect the black cable do a Gnd Port.");
      delay(textDelay);
      String text1 = "Then connect the red cable to port ";
      String text2 = ".";
      Serial.println(text1 + ledPin + text2);
      delay(textDelay);
      Serial.println("Then connect an both cables to two different snails and");
      Serial.println("connect a led with the - (short leg) part to the black cable snail");
      Serial.println("and then connect the red cable snail to a resistor, which");
      Serial.println("you want to connect to the + (long leg) of the led.");
      delay(textDelay);
      Serial.println();
      Serial.println("When you are done, type \"done\" into the console.");
      Serial.println();
      digitalWrite(ledPin, HIGH);
      while(!checkInput(true, getSerialInput())){
        delay(1);
      }
      Serial.println("By the way, you can jump to any task by just");
      Serial.println("sending the index of the task into the terminal!");
      delay(textDelay);
      Serial.println("You can also end the task you are working on right now");
      Serial.println("by typing \"end\" in the terminal.");
      if(newTask) task++;
      Serial.println();
      Serial.println();
      //^this at the end of this case
      break;
    }
    case 1:{      //port-setup if neccessary
      Serial.println("First,  connect the black cable do a Gnd Port.");
      delay(textDelay);
      String text1 = "Then connect the red cable to port ";
      String text2 = ".";
      Serial.println(text1 + ledPin + text2);
      delay(textDelay);
      Serial.println("Then you connect both cables to two snails and");
      Serial.println("connect an led with the - part to the black cable snail");
      Serial.println("and then connect the red cable snail to a button, which");
      Serial.println("you want to connect to the resistor, ");
      Serial.println("which you connect to the + of the led.");
      delay(textDelay);
      Serial.println();
      Serial.println("When you are done, type \"done\" into the console.");
      Serial.println();
      Serial.println();
      digitalWrite(ledPin, HIGH);
      while(!checkInput(true, getSerialInput())){
        delay(1);
      }
      if(newTask) task++;
      Serial.println();
        break;
    }
    case 2:{
     int Light = 0;
     Serial.println("First,  connect the black cable do a Gnd Port.");
     delay(textDelay);
     Serial.print("Then connect the red cable to port ");
     Serial.print(ledPin);
     Serial.println(".");
     delay(textDelay);
     Serial.println("After that, you connect both cables to the snale");
     Serial.println("and then draw a line from the snale with the black cable");
     Serial.println("to the potentiometer, which you connect than");
     Serial.println("to the - part of the led.");
     delay(textDelay);
     Serial.println("When you have done this, you draw another line");
     Serial.println("from the red cable snail to the + of the led.");
     delay(textDelay);
     Serial.println("When you are finished with the construction,");
     Serial.println("you can try to spin the potentiometer and watch");
     Serial.println("what happened.");
     Serial.println();
     Serial.println("When you are done, type \"done\" into the console.");
     digitalWrite(ledPin, HIGH);
     while(!checkInput(true, getSerialInput())){
       delay(1);
     }
     if(newTask) task++;
       break;
   }
   case 3:{
     #define Buzzer 11
     #define Taster_1 10
     #define Tone_1 33
     #define Taster_2 9
     #define Tone_2 37
     #define Taster_3 7
     #define Tone_3 41
     #define Taster_4 6
     #define Tone_4 44
     #define Taster_5 5
     #define Tone_5 49
 /*  #define Taster_6 4
     #define Tone_6 55
     #define Taster_7 3
     #define Tone_7 62 */
     #define BuzzerTime 5
     pinMode(Taster_1,INPUT_PULLUP);
     pinMode(Taster_2,INPUT_PULLUP);
     pinMode(Taster_3,INPUT_PULLUP);
     pinMode(Taster_4,INPUT_PULLUP);
/*   pinMode(Taster_5,INPUT_PULLUP);
     pinMode(Taster_6,INPUT_PULLUP);
     pinMode(Taster_7,INPUT_PULLUP); */
     Serial.println("First,  connect the black cable do a Gnd Port.");
     delay(textDelay);
     Serial.println("Then connect the red cable to port 5V.");
     delay(textDelay);
     Serial.println("Third, connect 5 cables to the port 10 to 3.");
     delay(textDelay);
     Serial.println("After that, you connected all cables to the snale");
     Serial.println("and then draw a line from the snale with the black cable");
     Serial.println("to the buzzer.");
     delay(textDelay);
     Serial.println("When you have done that, you draw a long line");
     Serial.println("from the snail with the red cable to the other");
     Serial.println("side of the area.");
     delay(textDelay);
     Serial.println("Than you place all the buttons in a row ");
     Serial.println("and draw a line from the snail with the cable of");
     Serial.println("the 10. port to the left leg of the button.");
     delay(textDelay);
     Serial.println("Then you draw from the long line of the red cable");
     Serial.println("to the right leg of the button.");
     delay(textDelay);
     Serial.println("Now connect all other buttons the same way,");
     Serial.println("exept you connect the 9. port to the 2. button");
     Serial.println("and so on.");
     delay(textDelay);
     Serial.println("When you are finished with the construction,");
     Serial.println("you can try to press the buttons and watch");
     Serial.println("what happened.");
     delay(textDelay);
     Serial.println();
     Serial.println("When you are done, type \"done\" into the console.");
     if(digitalRead(Taster_1) == HIGH) {
       tone(Buzzer, Tone_1);
       delay(BuzzerTime);
     }else if(digitalRead(Taster_2) == HIGH) {
       tone(Buzzer, Tone_2);
       delay(BuzzerTime);
     }else if(digitalRead(Taster_3) == HIGH) {
       tone(Buzzer, Tone_3);
       delay(BuzzerTime);
     }else if(digitalRead(Taster_4) == HIGH) {
       tone(Buzzer, Tone_4);
       delay(BuzzerTime);
     }else if(digitalRead(Taster_5) == HIGH) {
       tone(Buzzer, Tone_5);
       delay(BuzzerTime);
/*    }else if(digitalRead(Taster_6) == HIGH) {
       tone(Buzzer, Tone_6);
       delay(BuzzerTime);
     }else if(digitalRead(Taster_7) == HIGH) {
       tone(Buzzer, Tone_7);
       delay(BuzzerTime); */
     }else {
       noTone(Buzzer);
       delay(BuzzerTime);
     }

     while(!checkInput(true, getSerialInput())){
       delay(1);
     }
     if(newTask) task++;
       break;
    }
  }
}

String getSerialInput(){
  String serialData = "";

  if (Serial.available() > 0){
    while (Serial.available() > 0){
      char x = Serial.read();
      serialData += x;
      delay(2);
    }
  }
  return serialData;
}

String ConvNormal(String Str)
{
  String Out = "";

  for(int i = 0; i < Str.length(); i++)
  {
    if(Str.charAt(i) >= 32 && Str.charAt(i) <= 126) Out += Str.charAt(i);
  }

  return Out;
}

bool checkInput(bool doneYN, String message){
  message = ConvNormal(message);
  message.toLowerCase();
  int num = message.toInt();
  bool x = message.toInt();
  if((doneYN && message == "done")||message == "end"){
    newTask = true;
    return true;
  }
  else if(x && num > 0 && num < 5){
    newTask = false;
    task = num - 1;
    return true;
  }

 return false;
}
