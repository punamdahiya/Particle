// This #include statement was automatically added by the Particle IDE.
#include "InternetButton/InternetButton.h"

/* This SparkButton library has some useful functions.
Here we blink ALL the LEDs instead of just one.*/

InternetButton b = InternetButton();
int iButtonLED(String command);

void setup() {
    // Tell b to get everything ready to go
    // Use b.begin(1); if you have the original SparkButton, which does not have a buzzer or a plastic enclosure
    // to use, just add a '1' between the parentheses in the code below.
    b.begin();
    // register the Particle function
    Particle.function("handleLED", iButtonLED);
}

void loop(){
    
}


// this function automagically shows up in IFTTT
int iButtonLED(String command)
{
  // look for the matching argument "coffee" <-- max of 64 characters long
  if(command == "on")
  {
    //things you want it to do
    b.playSong("E5,8,G5,8,E6,8,C6,8,D6,8,G6,8");
    b.rainbow(5);
    delay(2000);
    b.allLedsOff();
    delay(1000);

    //Returns the value "1" if it was successful
    return 1;
  }
  else return -1;
}
