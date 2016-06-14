// This #include statement was automatically added by the Particle IDE.
#include "InternetButton/InternetButton.h"

InternetButton b = InternetButton();
int iButtonLED(String command);

void setup() {
    // Tell b to get everything ready to go
    // Use b.begin(1); if you have the original SparkButton, which does not have a buzzer or a plastic enclosure
    // to use, just add a '1' between the parentheses in the code below.
    b.begin();
    // register the Particle function
    Particle.function("toddlerSigns", toddlerButtonLED);
    
}

void loop(){
    
}


// this function automagically shows up in IFTTT
int toddlerButtonLED(String command)
{
  // look for the matching argument "coffee" <-- max of 64 characters long
  if(command == "thirsty")
  {
    //want blue water
    b.allLedsOn(0, 0, 255);
    delay(2000);
    b.allLedsOff();
    delay(1000);

    //Returns the value "1" if it was successful
    return 1;
  } else if(command == "blankie") {
    //want green blankie
    b.allLedsOn(0, 255, 0);
    delay(2000);
    b.allLedsOff();
    delay(1000);

    //Returns the value "1" if it was successful
    return 1;
  } else if(command == "go-potty") {
    //need to go potty now red!
    b.allLedsOn(255, 0, 0);
    delay(2000);
    b.allLedsOff();
    delay(1000);

    //Returns the value "1" if it was successful
    return 1;
  } else if(command == "want-fav-toy") {
    //can't find my favorite toy
    b.rainbow(5);
    //b.playSong("E5,8,G5,8,E6,8,C6,8,D6,8,G6,8");
    //b.playSong("C4,8,D4,4");
    delay(2000);
    b.allLedsOff();
    delay(1000);

    //Returns the value "1" if it was successful
    return 1;
  }
  else return -1;
}
