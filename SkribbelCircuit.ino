int task = 0;
bool newTask = true;
#define ledPin 12 //TODO we can change that pot though
#define textDelay 500


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
    case 0: {
      //port-setup if neccessary
      Serial.println("First,  connect the black cable do a Gnd Port.");
      delay(textDelay);
      String text1 = "Then connect the red cable to port ";
      String text2 = ".";
      Serial.println(text1 + ledPin + text2);
      delay(textDelay);
      Serial.println("Then connect an led with the - (short leg) part to the black cable");
      Serial.println("and then connect the red cable to a resistor, which");
      Serial.println("you want to connect to the + (long leg) of the led.");
      delay(textDelay);
      Serial.println();
      Serial.println("When you are done, type \"done\" into the console.");
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
      Serial.println("Then connect an led with the - part do the black cable");
      Serial.println("and then connect the red cable to a button, which");
      Serial.println("you want to connect to the resistor, ");
      Serial.println("which you connect to the + of the led.");
      delay(textDelay);
      Serial.println();
      Serial.println("When you are done, type \"done\" into the console.");
      digitalWrite(ledPin, HIGH);
      while(!checkInput(true, getSerialInput())){
        delay(1);
      }
      if(newTask) task++;
      Serial.println();
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

bool checkInput(bool doneYN, String message){
  message.toLowerCase();
  if(doneYN && message == "done"){
    newTask = true;
    return true;
  }
  if(message == "end"){
    newTask = false;
    return true;
  }

  int num = message.toInt();
  bool x = message.toInt();

  if(x && num > 0 && num < 3){
    newTask = false;
    task = num - 1;
    return true;
  }
  return false;

}
