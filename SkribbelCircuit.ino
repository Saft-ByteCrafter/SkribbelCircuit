int task = 0;
bool newTask = true;
#define ledPin 12 //TODO we can change that port though
#define textDelay 500
//TODO Temp. Sensor Library einbinden und den Code einfügen.


void setup(){
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);

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
}

void loop(){

  switch (task) {
    case 0:
      //port-setup if neccessary
      Serial.println("First,  connect the black cable do a Gnd Port.");
      delay(textDelay);
      Serial.println("Then connect the red cable to port ");
      Serial.println(ledPin);
      Serial.println(".");
      delay(textDelay);
      Serial.println("Then connect an led with the - part to the black cable");
      Serial.println("and then connect the red cable to a resistor, which");
      Serial.println("you want to connect to the + of the led.");
      delay(textDelay);
      Serial.println();
      Serial.println("When you are done, type \"done\" into the console.");
      digitalWrite(ledPin, HIGH);
      while(true){
        if(checkInput(true))break;
        delay(500);
      }
      Serial.println("By the way, you can jump to any task by just");
      Serial.println("sending the index of the task into the terminal!");
      delay(textDelay);
      Serial.println("You can also end the task you are working on right now");
      Serial.println("by typing \"end\" in the terminal.");
      if(newTask) task++;
      //^this at the end of this case
      break;
    case 1:      //port-setup if neccessary
      Serial.println("First,  connect the black cable do a Gnd Port.");
      delay(textDelay);
      Serial.println("Then connect the red cable to port ");
      Serial.println(ledPin);
      Serial.println(".");
      delay(textDelay);
      Serial.println("Then connect an led with the - part do the black cable");
      Serial.println("and then connect the red cable to a button, which");
      Serial.println("you want to connect to the resistor, ");
      Serial.println("which you connect to the + of the led.");
      delay(textDelay);
      Serial.println();
      Serial.println("When you are done, type \"done\" into the console.");
      digitalWrite(ledPin, HIGH);
      while(true){
          if(checkInput(true))break;
          delay(500);
      }
      if(newTask) task++;
        break;

    case 2:
      int Light = 0;
      Serial.println("First,  connect the black cable do a Gnd Port.");
      delay(textDelay);
      Serial.println("Then connect the red cable to port ");
      Serial.println(ledPin);
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
      while(true){
          if(checkInput(true))break;
          delay(500);
      }
      if(newTask) task++;
        break;

    case 3:
      #define Buzzer 11
      #define Taster_1 10
      #define Tone_1 "C"
      #define Taster_2 9
      #define Tone_2 "D"
      #define Taster_3 7
      #define Tone_3 "E"
      #define Taster_4 6
      #define Tone_4 "F"
      #define Taster_5 5
      #define Tone_5 "G"
  /*  #define Taster_6 4
      #define Tone_6 A
      #define Taster_7 3
      #define Tone_7 H */
      #define BuzzerTime 5
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

      while(true){
        delay(500);
          if(Serial.available()) continue;
          if(checkInput(true))break;
      }
      if(newTask) task++;
        break;

    case 4:
      int Temperature = 0;
      #define TempPin 11
      Serial.println("First, you have to look at your temperature sensor.");
      delay(textDelay);
      Serial.println("The thinks you have to look after is how many");
      Serial.println("legs the sensor has.");
      delay(textDelay);
      Serial.println("If you know this thinks, you can start.");
      delay(textDelay);
      Serial.println("Now you have to connect 5V, Gnd and the 11. port");
      Serial.println("to the snails.");
      delay(textDelay);
      Serial.println("After that, you have to draw a line from the 5V snail");
      Serial.println("to the leg on the far left.");
      delay(textDelay);
      Serial.println("Then draw a line from the 11. port snail to the 2.");
      Serial.println("leg from the left.");
      delay(textDelay);
      Serial.println("Now you have to draw a line from the Gnd snail to the");
      Serial.println("leg on the far right.");
      delay(textDelay);
      Serial.println("If it only has 4 legs, you have to skip the 3. leg");
      Serial.println("When you are finished with the construction,");
      Serial.println("you can try to type \"temp\" into the console and");
      Serial.println("watch what happened.");
      delay(textDelay);
      Serial.println();
      Serial.println("When you are done, type \"done\" into the console.");
      digitalWrite(TempPin, HIGH);
      while(true){
        delay(500);
        if(!Serial.available()) continue;
        String message = Serial.read();
          if(message.equals("temp")) {
            Serial.println();//print temperature
          }
      }
      if(newTask) task++;
        break;
  }
}



boolean checkInput(boolean doneYN){
  String message = Serial.read();
  message = message.tolower();
  if(doneYN){
    if(message.equals("done")){
      newTask = true;
      return true;
    }
  }
  if(message.equals("end")){
    newTask = false;
    return true;
  }
  if(message.equals("1")){
    newTask = false;
    task = 0;
    return true;
  }
  if(message.equals("2")){
    newTask = false;
    task = 1;
    return true;
  }
  if(message.equals("3")){
    newTask = false;
    task = 2;
    return true;
  }
  if(message.equals("4")){
    newTask = false;
    task = 3;
    return true;
  }
  if(message.equals("5")){
    newTask = false;
    task = 4;
    return true;
  }
  return false;
}
