
#define analogPin A0 //the thermistor attach to 
#define beta 3950 //the beta of the thermistor
void setup()
{
  
  Serial.begin(9600);
}
void loop()
{
  long a =1023 - analogRead(analogPin); //read thermistor value 
  Serial.print("Raw reading ");
  Serial.println(a); 
  //the calculating formula of temperature
  float tempC = beta /(log((1025.0 * 10 / a - 10) / 10) + beta / 298.0) - 273.0;
  float tempF = 1.8*tempC + 32.0;
  Serial.print("Centigrade ");
  Serial.print(tempC); 
  Serial.print("  ");
  Serial.print("Fahrenheit ");
  Serial.print(tempF); 
  Serial.println("");
 
  delay(500); //wait for 100 milliseconds
}
