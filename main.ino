#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>

// #define Sprintln(b) (Serial.println(b))
#define Sprintln(b)

SoftwareSerial gsmSerial(17,16); //rx-4 tx-5

LiquidCrystal_I2C lcd(0x3F,16,2);


const byte numberButtonsPins = 5;
const int buttonPins[numberButtonsPins]={a,b,c,d,e};

void void setup()
{
	
}

void void loop()
{
	
}