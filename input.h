#ifndef SAI_INPUT_H
#define SAI_INPUT_H

#include <Arduino.h>

unsigned long currentTime;
unsigned long previousTime;
const int SPEEDPIN = 27;
int speedCnt = 0;
int speedVal = 0;
int prevSpeedVal = 0;
int speedRpm = 0;
int prevRpm = 0;
extern int LED_PIN;
extern void myoutput_show();

int myinput_read()
{
  speedVal = digitalRead(SPEEDPIN);
  
  if (speedVal == LOW && prevSpeedVal != speedVal)
  {
    speedCnt += 1;
  }
  prevSpeedVal = speedVal;
  

  currentTime = millis();
  if ((currentTime - previousTime)/1000 >= 1)
  {
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
    prevRpm = speedRpm;
    speedRpm = (speedCnt * 60);
    Serial.printf("Speed: %d times per %d seconds, %d rpm\n", speedCnt, (currentTime - previousTime)/1000, speedRpm);   
    speedCnt = 0;
    previousTime = currentTime;
  }
  delay(10);
  return 0;
}

#endif
