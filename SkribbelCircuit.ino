int task = 0;
#define ledPin 12 //TODO we can change that pot though
#define delay 500


void setup(){
  Serial.begin(9600);

  Serial.println("Hello and welcome to Scribble-Circuit!");
  delay(delay);
  Serial.println("Here you can draw your own electric Circuits on paper!");
  delay(delay);
  Serial.println("Just draw thick lines with the pen on a paper");
  Serial.println("and put the right components on it.");
  delay(delay);
  Serial.println("Lastly, put the cables into the Arduino.");
  delay(delay);
  Serial.println("Let's start now, shall we?");
  delay(delay);
}

void loop(){

  switch (task)) {
    case 0:
      //port-setup if neccessary
      Serial.println("First,  connect the black cable do a Gnd Port");
      Serial.println("Then connect the red cable to port " + ledPin);
      Serial.println("Then connect an led with the - part do the black cable");
      Serial.println("and then connect the red cable to a resistor, which");
      Serial.println("you want to connect to the + of the led.");
      Serial.println();
      Serial.println("When you are done, type \"done\" into the console.");
      digitalWrite(ledPin, HIGH);
      while(true){

        //put stuff here

//        String message =
//        if(message.contains("end"))break;
        delay(500);
      }
      Serial.println("By the way, you can jump to any task by just");
      Serial.println("send the index of the task into the terminal!");
      delay(500);
      Serial.println("You can also end the task you are working on right now");
      Serial.println("by typing end in the terminal.");
      task++;
      //^this at the end of this case
      break;
    case 1:
      while(true){
        //put stuff Here
        if("win condition")break;
        //String message =
        //if(message.contains("end"))break;
        //else task = Integer.valueOf(message);
      }
      task++;
      break;
  }
}
