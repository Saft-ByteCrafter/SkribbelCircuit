int task = 1;

void setup(){
  Serial.begin(9600);

  Serial.println("Hello and welcome to Scribble-Circuit!");
  delay(500);
  Serial.println("Here you can draw your own electric Circuits on paper!");
  delay(500);
  Serial.println("Just draw thick lines with the pen on a paper");
  Serial.println("and put the right components on it.");
  delay(500);
  Serial.println("Lastly, put the cables into the Arduino.");
  delay(500);
  Serial.println("Let's start now, shall we?");
  delay(500);
}

void loop(){

  switch (task)) {
    case 1:
      //port-setup if neccessary
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
    case 2:
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
