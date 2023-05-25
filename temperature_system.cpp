#include "temperature_system.h"
#include "Arduino.h"
#include "main.h"


void init_temperature_system(void)
{
    /* to config the heater and cooler pins output */
    pinMode(HEATER , OUTPUT);
    pinMode(COOLER , OUTPUT);
/* to turn off the heater and cooler */
digitalWrite(HEATER , LOW);
digitalWrite(COOLER , LOW);

}

float read_temperature(void)
{
float temperature;


/* reading the analog values and converting them to voltage and then to temperature in degree celcius */ 
temperature = (((analogRead(TEMPERATURE_SENSOR) * (float)5/1024)) / (float) 0.01);
return temperature; 

}

void cooler_control(bool control)
{
   /* function to control the cooler */
    if(control)
    {
      digitalWrite(COOLER,HIGH);
    }
    else
    {
      digitalWrite(COOLER,LOW);
    }
}
void heater_control(bool control)
{
    /* function to control the heater */
    if(control)
    {
      digitalWrite(HEATER,HIGH);
    }
    else
    {
      digitalWrite(HEATER,LOW);
    } 
}
