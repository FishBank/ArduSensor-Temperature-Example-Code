/*  ArduSensor Temperature Read

Reads the value from the temperature sensor, converts it to temperature, and
then prints the temperature to the Serial monitor.

Qtechknow kits required:
  ArduSensor Temperature

made on 12 July 12
created by Quin
 */

const int ArduSensorPin = 0;  // the pin that our ArduSensor is connected to

void setup()
{
  Serial.begin(9600);  // begin Serial communication at 9600 baud
}


void loop()
{
  int value = analogRead(ArduSensorPin);   // read the ArduSensor Temperature
  float millivolts = (value / 1024.0) * 5000;  // crunch some numbers
  float fahrenheit = millivolts / 10;  // sensor output is 10mV per degree F
  Serial.print(fahrenheit);            // print the Fahrenheit
  Serial.print(" degrees Fahrenheit, ");

  Serial.print( (fahrenheit - 32) * 5 / 9 );  //  convert to Celsius
  Serial.println(" degrees Celsius");

  delay(1000); // wait for one second

}
