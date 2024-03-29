int task = 0;
bool newTask = true; //says if there is supposed to be a new task given or if the task should be repeated
String strink = (char)10 + "" + (char)10; //bugfix
#define ledPin 12
#define textDelay 500 //delay zwischen den texten


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
      Serial.println("Then connect the red cable to port 12.");
      delay(textDelay);
      Serial.println("Then connect an both cables to two different snails and");
      Serial.println("connect a led with the - (short leg) part to the black cable snail");
      Serial.println("and then the red cable snail to a resistor, which");
      Serial.println("you want to connect to the + (long leg) of the led.");
      delay(textDelay);
      Serial.println();
      Serial.println("When you are done, type \"done\" into the console.");
      digitalWrite(ledPin, HIGH);
      while(!checkInput(true, getSerialInput())){ //method, which checks the terminal-input
        delay(1);
      }
      Serial.println("By the way, you can jump to any task by just");
      Serial.println("sending the index of the task into the terminal!");
      delay(textDelay);
      Serial.println("You can also end the task you are working on right now");
      Serial.println("by typing \"end\" in the terminal.");
      if(newTask) task++; //to the next task (or not depends on newTask)
      Serial.println();
      Serial.println();
      break;
    }
    case 1:{
      Serial.println("You basically need the setup from before again, ");
      Serial.println("just add a button between the resistor and the black cable snail.");
      delay(textDelay);
//      Serial.println("When you are done, type \"done\" into the console.");
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
     Serial.println("Once again, you'll need nearly the same setup:");
     delay(textDelay);
     Serial.print("Just replace the resistor and the button with a potentiometer.");
     delay(textDelay);
     Serial.println("When you are finished with the construction,");
     Serial.println("you can try to spin the potentiometer and see");
     Serial.println("what happens.");
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
     #define Tone_1 131
     #define Taster_2 9
     #define Tone_2 147
     #define Taster_3 7
     #define Tone_3 165
     #define Taster_4 6
     #define Tone_4 175
     #define Taster_5 5
     #define Tone_5 196
 /*  #define Taster_6 4
     #define Tone_6 220
     #define Taster_7 3
     #define Tone_7 247 */
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
     Serial.println("you can try to press the buttons and see");
     Serial.println("what happens.");
     delay(textDelay);
     Serial.println();
     Serial.println("When you are done, type \"done\" into the console.");
     Serial.println();
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

String convNormal(String string){//converts the input to a normal string (there usually is the line feed)
  String out = "";

  for(int i = 0; i < string.length(); i++){
    if(string.charAt(i) >= 32 && string.charAt(i) <= 126) out += string.charAt(i);
  }

  return out;
}

bool checkInput(bool doneYN, String message){
  message = convNormal(message);
  message.toLowerCase();//if some1 types DONE or smth
  int num = message.toInt();//if it is a number for num-check
  bool x = message.toInt();
  if((doneYN && message == "done")||message == "end"){ //looks which message has been sent
    if(message == "done"){
      newTask = true; //make a new task
    }
    else{
      newTask = false;
    }
    return true;
  }
  else if(x && num > 0 && num < 5){ //looks which number has been sent and changes the task to the right index
    newTask = false;
    task = num - 1;
    return true;
  }

 return false;
}
